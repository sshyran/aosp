// Generated from l2_normalization_axis.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0();
bool is_ignored_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0) {
  Execute(device,
          createTestModel_dim4_axis0,
          is_ignored_dim4_axis0,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0) {
  const Model model = createTestModel_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_dynamic_output_shape();
bool is_ignored_dim4_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_dynamic_output_shape,
          is_ignored_dim4_axis0_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_all_inputs_as_internal();
bool is_ignored_dim4_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis0_all_inputs_as_internal,
          is_ignored_dim4_axis0_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_relaxed();
bool is_ignored_dim4_axis0_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_relaxed) {
  Execute(device,
          createTestModel_dim4_axis0_relaxed,
          is_ignored_dim4_axis0_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_relaxed) {
  const Model model = createTestModel_dim4_axis0_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_relaxed_dynamic_output_shape();
bool is_ignored_dim4_axis0_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_relaxed_dynamic_output_shape,
          is_ignored_dim4_axis0_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_relaxed_all_inputs_as_internal();
bool is_ignored_dim4_axis0_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis0_relaxed_all_inputs_as_internal,
          is_ignored_dim4_axis0_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis0_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_float16();
bool is_ignored_dim4_axis0_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_float16) {
  Execute(device,
          createTestModel_dim4_axis0_float16,
          is_ignored_dim4_axis0_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_float16) {
  const Model model = createTestModel_dim4_axis0_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_float16_dynamic_output_shape();
bool is_ignored_dim4_axis0_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_float16_dynamic_output_shape,
          is_ignored_dim4_axis0_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_float16_all_inputs_as_internal();
bool is_ignored_dim4_axis0_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis0_float16_all_inputs_as_internal,
          is_ignored_dim4_axis0_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis0_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_quant8();
bool is_ignored_dim4_axis0_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_quant8) {
  Execute(device,
          createTestModel_dim4_axis0_quant8,
          is_ignored_dim4_axis0_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_quant8) {
  const Model model = createTestModel_dim4_axis0_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_quant8_dynamic_output_shape();
bool is_ignored_dim4_axis0_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_quant8_dynamic_output_shape,
          is_ignored_dim4_axis0_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_quant8_all_inputs_as_internal();
bool is_ignored_dim4_axis0_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis0_quant8_all_inputs_as_internal,
          is_ignored_dim4_axis0_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis0_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg();
bool is_ignored_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_neg) {
  Execute(device,
          createTestModel_dim4_axis0_neg,
          is_ignored_dim4_axis0_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg) {
  const Model model = createTestModel_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_dynamic_output_shape();
bool is_ignored_dim4_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_neg_dynamic_output_shape,
          is_ignored_dim4_axis0_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_all_inputs_as_internal();
bool is_ignored_dim4_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis0_neg_all_inputs_as_internal,
          is_ignored_dim4_axis0_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_relaxed();
bool is_ignored_dim4_axis0_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_neg_relaxed) {
  Execute(device,
          createTestModel_dim4_axis0_neg_relaxed,
          is_ignored_dim4_axis0_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_relaxed) {
  const Model model = createTestModel_dim4_axis0_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim4_axis0_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_neg_relaxed_dynamic_output_shape,
          is_ignored_dim4_axis0_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim4_axis0_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis0_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim4_axis0_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis0_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_float16();
bool is_ignored_dim4_axis0_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_neg_float16) {
  Execute(device,
          createTestModel_dim4_axis0_neg_float16,
          is_ignored_dim4_axis0_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_float16) {
  const Model model = createTestModel_dim4_axis0_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_float16_dynamic_output_shape();
bool is_ignored_dim4_axis0_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_neg_float16_dynamic_output_shape,
          is_ignored_dim4_axis0_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_float16_all_inputs_as_internal();
bool is_ignored_dim4_axis0_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis0_neg_float16_all_inputs_as_internal,
          is_ignored_dim4_axis0_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis0_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_quant8();
bool is_ignored_dim4_axis0_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_neg_quant8) {
  Execute(device,
          createTestModel_dim4_axis0_neg_quant8,
          is_ignored_dim4_axis0_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_quant8) {
  const Model model = createTestModel_dim4_axis0_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_quant8_dynamic_output_shape();
bool is_ignored_dim4_axis0_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_neg_quant8_dynamic_output_shape,
          is_ignored_dim4_axis0_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim4_axis0_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis0_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis0_neg_quant8_all_inputs_as_internal,
          is_ignored_dim4_axis0_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis0_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1();
bool is_ignored_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1) {
  Execute(device,
          createTestModel_dim4_axis1,
          is_ignored_dim4_axis1,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1) {
  const Model model = createTestModel_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_dynamic_output_shape();
bool is_ignored_dim4_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_dynamic_output_shape,
          is_ignored_dim4_axis1_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_all_inputs_as_internal();
bool is_ignored_dim4_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis1_all_inputs_as_internal,
          is_ignored_dim4_axis1_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_relaxed();
bool is_ignored_dim4_axis1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_relaxed) {
  Execute(device,
          createTestModel_dim4_axis1_relaxed,
          is_ignored_dim4_axis1_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_relaxed) {
  const Model model = createTestModel_dim4_axis1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_relaxed_dynamic_output_shape();
bool is_ignored_dim4_axis1_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_relaxed_dynamic_output_shape,
          is_ignored_dim4_axis1_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_relaxed_all_inputs_as_internal();
bool is_ignored_dim4_axis1_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis1_relaxed_all_inputs_as_internal,
          is_ignored_dim4_axis1_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis1_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_float16();
bool is_ignored_dim4_axis1_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_float16) {
  Execute(device,
          createTestModel_dim4_axis1_float16,
          is_ignored_dim4_axis1_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_float16) {
  const Model model = createTestModel_dim4_axis1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_float16_dynamic_output_shape();
bool is_ignored_dim4_axis1_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_float16_dynamic_output_shape,
          is_ignored_dim4_axis1_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_float16_all_inputs_as_internal();
bool is_ignored_dim4_axis1_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis1_float16_all_inputs_as_internal,
          is_ignored_dim4_axis1_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis1_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_quant8();
bool is_ignored_dim4_axis1_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_quant8) {
  Execute(device,
          createTestModel_dim4_axis1_quant8,
          is_ignored_dim4_axis1_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_quant8) {
  const Model model = createTestModel_dim4_axis1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_quant8_dynamic_output_shape();
bool is_ignored_dim4_axis1_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_quant8_dynamic_output_shape,
          is_ignored_dim4_axis1_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_quant8_all_inputs_as_internal();
bool is_ignored_dim4_axis1_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis1_quant8_all_inputs_as_internal,
          is_ignored_dim4_axis1_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis1_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg();
bool is_ignored_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_neg) {
  Execute(device,
          createTestModel_dim4_axis1_neg,
          is_ignored_dim4_axis1_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg) {
  const Model model = createTestModel_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_dynamic_output_shape();
bool is_ignored_dim4_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_neg_dynamic_output_shape,
          is_ignored_dim4_axis1_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_all_inputs_as_internal();
bool is_ignored_dim4_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis1_neg_all_inputs_as_internal,
          is_ignored_dim4_axis1_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_relaxed();
bool is_ignored_dim4_axis1_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_neg_relaxed) {
  Execute(device,
          createTestModel_dim4_axis1_neg_relaxed,
          is_ignored_dim4_axis1_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_relaxed) {
  const Model model = createTestModel_dim4_axis1_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim4_axis1_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_neg_relaxed_dynamic_output_shape,
          is_ignored_dim4_axis1_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim4_axis1_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis1_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim4_axis1_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis1_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_float16();
bool is_ignored_dim4_axis1_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_neg_float16) {
  Execute(device,
          createTestModel_dim4_axis1_neg_float16,
          is_ignored_dim4_axis1_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_float16) {
  const Model model = createTestModel_dim4_axis1_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_float16_dynamic_output_shape();
bool is_ignored_dim4_axis1_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_neg_float16_dynamic_output_shape,
          is_ignored_dim4_axis1_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_float16_all_inputs_as_internal();
bool is_ignored_dim4_axis1_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis1_neg_float16_all_inputs_as_internal,
          is_ignored_dim4_axis1_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis1_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_quant8();
bool is_ignored_dim4_axis1_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_neg_quant8) {
  Execute(device,
          createTestModel_dim4_axis1_neg_quant8,
          is_ignored_dim4_axis1_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_quant8) {
  const Model model = createTestModel_dim4_axis1_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_quant8_dynamic_output_shape();
bool is_ignored_dim4_axis1_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_neg_quant8_dynamic_output_shape,
          is_ignored_dim4_axis1_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim4_axis1_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis1_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis1_neg_quant8_all_inputs_as_internal,
          is_ignored_dim4_axis1_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis1_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2();
bool is_ignored_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2) {
  Execute(device,
          createTestModel_dim4_axis2,
          is_ignored_dim4_axis2,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2) {
  const Model model = createTestModel_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_dynamic_output_shape();
bool is_ignored_dim4_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_dynamic_output_shape,
          is_ignored_dim4_axis2_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_all_inputs_as_internal();
bool is_ignored_dim4_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis2_all_inputs_as_internal,
          is_ignored_dim4_axis2_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_relaxed();
bool is_ignored_dim4_axis2_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_relaxed) {
  Execute(device,
          createTestModel_dim4_axis2_relaxed,
          is_ignored_dim4_axis2_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_relaxed) {
  const Model model = createTestModel_dim4_axis2_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_relaxed_dynamic_output_shape();
bool is_ignored_dim4_axis2_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_relaxed_dynamic_output_shape,
          is_ignored_dim4_axis2_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_relaxed_all_inputs_as_internal();
bool is_ignored_dim4_axis2_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis2_relaxed_all_inputs_as_internal,
          is_ignored_dim4_axis2_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis2_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_float16();
bool is_ignored_dim4_axis2_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_float16) {
  Execute(device,
          createTestModel_dim4_axis2_float16,
          is_ignored_dim4_axis2_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_float16) {
  const Model model = createTestModel_dim4_axis2_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_float16_dynamic_output_shape();
bool is_ignored_dim4_axis2_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_float16_dynamic_output_shape,
          is_ignored_dim4_axis2_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_float16_all_inputs_as_internal();
bool is_ignored_dim4_axis2_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis2_float16_all_inputs_as_internal,
          is_ignored_dim4_axis2_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis2_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_quant8();
bool is_ignored_dim4_axis2_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_quant8) {
  Execute(device,
          createTestModel_dim4_axis2_quant8,
          is_ignored_dim4_axis2_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_quant8) {
  const Model model = createTestModel_dim4_axis2_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_quant8_dynamic_output_shape();
bool is_ignored_dim4_axis2_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_quant8_dynamic_output_shape,
          is_ignored_dim4_axis2_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_quant8_all_inputs_as_internal();
bool is_ignored_dim4_axis2_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis2_quant8_all_inputs_as_internal,
          is_ignored_dim4_axis2_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis2_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg();
bool is_ignored_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_neg) {
  Execute(device,
          createTestModel_dim4_axis2_neg,
          is_ignored_dim4_axis2_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg) {
  const Model model = createTestModel_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_dynamic_output_shape();
bool is_ignored_dim4_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_neg_dynamic_output_shape,
          is_ignored_dim4_axis2_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_all_inputs_as_internal();
bool is_ignored_dim4_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis2_neg_all_inputs_as_internal,
          is_ignored_dim4_axis2_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_relaxed();
bool is_ignored_dim4_axis2_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_neg_relaxed) {
  Execute(device,
          createTestModel_dim4_axis2_neg_relaxed,
          is_ignored_dim4_axis2_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_relaxed) {
  const Model model = createTestModel_dim4_axis2_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim4_axis2_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_neg_relaxed_dynamic_output_shape,
          is_ignored_dim4_axis2_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim4_axis2_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis2_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim4_axis2_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis2_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_float16();
bool is_ignored_dim4_axis2_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_neg_float16) {
  Execute(device,
          createTestModel_dim4_axis2_neg_float16,
          is_ignored_dim4_axis2_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_float16) {
  const Model model = createTestModel_dim4_axis2_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_float16_dynamic_output_shape();
bool is_ignored_dim4_axis2_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_neg_float16_dynamic_output_shape,
          is_ignored_dim4_axis2_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_float16_all_inputs_as_internal();
bool is_ignored_dim4_axis2_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis2_neg_float16_all_inputs_as_internal,
          is_ignored_dim4_axis2_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis2_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_quant8();
bool is_ignored_dim4_axis2_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_neg_quant8) {
  Execute(device,
          createTestModel_dim4_axis2_neg_quant8,
          is_ignored_dim4_axis2_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_quant8) {
  const Model model = createTestModel_dim4_axis2_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_quant8_dynamic_output_shape();
bool is_ignored_dim4_axis2_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_neg_quant8_dynamic_output_shape,
          is_ignored_dim4_axis2_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim4_axis2_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis2_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis2_neg_quant8_all_inputs_as_internal,
          is_ignored_dim4_axis2_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis2_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3();
bool is_ignored_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3) {
  Execute(device,
          createTestModel_dim4_axis3,
          is_ignored_dim4_axis3,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3) {
  const Model model = createTestModel_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_dynamic_output_shape();
bool is_ignored_dim4_axis3_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_dynamic_output_shape,
          is_ignored_dim4_axis3_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_all_inputs_as_internal();
bool is_ignored_dim4_axis3_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis3_all_inputs_as_internal,
          is_ignored_dim4_axis3_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis3_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_relaxed();
bool is_ignored_dim4_axis3_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_relaxed) {
  Execute(device,
          createTestModel_dim4_axis3_relaxed,
          is_ignored_dim4_axis3_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_relaxed) {
  const Model model = createTestModel_dim4_axis3_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_relaxed_dynamic_output_shape();
bool is_ignored_dim4_axis3_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_relaxed_dynamic_output_shape,
          is_ignored_dim4_axis3_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_relaxed_all_inputs_as_internal();
bool is_ignored_dim4_axis3_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis3_relaxed_all_inputs_as_internal,
          is_ignored_dim4_axis3_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis3_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_float16();
bool is_ignored_dim4_axis3_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_float16) {
  Execute(device,
          createTestModel_dim4_axis3_float16,
          is_ignored_dim4_axis3_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_float16) {
  const Model model = createTestModel_dim4_axis3_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_float16_dynamic_output_shape();
bool is_ignored_dim4_axis3_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_float16_dynamic_output_shape,
          is_ignored_dim4_axis3_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_float16_all_inputs_as_internal();
bool is_ignored_dim4_axis3_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis3_float16_all_inputs_as_internal,
          is_ignored_dim4_axis3_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis3_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_quant8();
bool is_ignored_dim4_axis3_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_quant8) {
  Execute(device,
          createTestModel_dim4_axis3_quant8,
          is_ignored_dim4_axis3_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_quant8) {
  const Model model = createTestModel_dim4_axis3_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_quant8_dynamic_output_shape();
bool is_ignored_dim4_axis3_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_quant8_dynamic_output_shape,
          is_ignored_dim4_axis3_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_quant8_all_inputs_as_internal();
bool is_ignored_dim4_axis3_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis3_quant8_all_inputs_as_internal,
          is_ignored_dim4_axis3_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis3_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg();
bool is_ignored_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_neg) {
  Execute(device,
          createTestModel_dim4_axis3_neg,
          is_ignored_dim4_axis3_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg) {
  const Model model = createTestModel_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_dynamic_output_shape();
bool is_ignored_dim4_axis3_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_neg_dynamic_output_shape,
          is_ignored_dim4_axis3_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_all_inputs_as_internal();
bool is_ignored_dim4_axis3_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis3_neg_all_inputs_as_internal,
          is_ignored_dim4_axis3_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis3_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_relaxed();
bool is_ignored_dim4_axis3_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_neg_relaxed) {
  Execute(device,
          createTestModel_dim4_axis3_neg_relaxed,
          is_ignored_dim4_axis3_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_relaxed) {
  const Model model = createTestModel_dim4_axis3_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim4_axis3_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_neg_relaxed_dynamic_output_shape,
          is_ignored_dim4_axis3_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim4_axis3_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis3_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim4_axis3_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis3_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_float16();
bool is_ignored_dim4_axis3_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_neg_float16) {
  Execute(device,
          createTestModel_dim4_axis3_neg_float16,
          is_ignored_dim4_axis3_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_float16) {
  const Model model = createTestModel_dim4_axis3_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_float16_dynamic_output_shape();
bool is_ignored_dim4_axis3_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_neg_float16_dynamic_output_shape,
          is_ignored_dim4_axis3_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_float16_all_inputs_as_internal();
bool is_ignored_dim4_axis3_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis3_neg_float16_all_inputs_as_internal,
          is_ignored_dim4_axis3_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis3_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_quant8();
bool is_ignored_dim4_axis3_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_neg_quant8) {
  Execute(device,
          createTestModel_dim4_axis3_neg_quant8,
          is_ignored_dim4_axis3_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_quant8) {
  const Model model = createTestModel_dim4_axis3_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_quant8_dynamic_output_shape();
bool is_ignored_dim4_axis3_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_neg_quant8_dynamic_output_shape,
          is_ignored_dim4_axis3_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim4_axis3_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim4_axis3_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim4_axis3_neg_quant8_all_inputs_as_internal,
          is_ignored_dim4_axis3_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim4_axis3_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0();
bool is_ignored_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0) {
  Execute(device,
          createTestModel_dim3_axis0,
          is_ignored_dim3_axis0,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0) {
  const Model model = createTestModel_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_dynamic_output_shape();
bool is_ignored_dim3_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_dynamic_output_shape,
          is_ignored_dim3_axis0_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_all_inputs_as_internal();
bool is_ignored_dim3_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis0_all_inputs_as_internal,
          is_ignored_dim3_axis0_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_relaxed();
bool is_ignored_dim3_axis0_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_relaxed) {
  Execute(device,
          createTestModel_dim3_axis0_relaxed,
          is_ignored_dim3_axis0_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_relaxed) {
  const Model model = createTestModel_dim3_axis0_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_relaxed_dynamic_output_shape();
bool is_ignored_dim3_axis0_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_relaxed_dynamic_output_shape,
          is_ignored_dim3_axis0_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_relaxed_all_inputs_as_internal();
bool is_ignored_dim3_axis0_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis0_relaxed_all_inputs_as_internal,
          is_ignored_dim3_axis0_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis0_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_float16();
bool is_ignored_dim3_axis0_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_float16) {
  Execute(device,
          createTestModel_dim3_axis0_float16,
          is_ignored_dim3_axis0_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_float16) {
  const Model model = createTestModel_dim3_axis0_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_float16_dynamic_output_shape();
bool is_ignored_dim3_axis0_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_float16_dynamic_output_shape,
          is_ignored_dim3_axis0_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_float16_all_inputs_as_internal();
bool is_ignored_dim3_axis0_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis0_float16_all_inputs_as_internal,
          is_ignored_dim3_axis0_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis0_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_quant8();
bool is_ignored_dim3_axis0_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_quant8) {
  Execute(device,
          createTestModel_dim3_axis0_quant8,
          is_ignored_dim3_axis0_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_quant8) {
  const Model model = createTestModel_dim3_axis0_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_quant8_dynamic_output_shape();
bool is_ignored_dim3_axis0_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_quant8_dynamic_output_shape,
          is_ignored_dim3_axis0_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_quant8_all_inputs_as_internal();
bool is_ignored_dim3_axis0_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis0_quant8_all_inputs_as_internal,
          is_ignored_dim3_axis0_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis0_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg();
bool is_ignored_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_neg) {
  Execute(device,
          createTestModel_dim3_axis0_neg,
          is_ignored_dim3_axis0_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg) {
  const Model model = createTestModel_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_dynamic_output_shape();
bool is_ignored_dim3_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_neg_dynamic_output_shape,
          is_ignored_dim3_axis0_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_all_inputs_as_internal();
bool is_ignored_dim3_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis0_neg_all_inputs_as_internal,
          is_ignored_dim3_axis0_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_relaxed();
bool is_ignored_dim3_axis0_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_neg_relaxed) {
  Execute(device,
          createTestModel_dim3_axis0_neg_relaxed,
          is_ignored_dim3_axis0_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_relaxed) {
  const Model model = createTestModel_dim3_axis0_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim3_axis0_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_neg_relaxed_dynamic_output_shape,
          is_ignored_dim3_axis0_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim3_axis0_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis0_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim3_axis0_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis0_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_float16();
bool is_ignored_dim3_axis0_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_neg_float16) {
  Execute(device,
          createTestModel_dim3_axis0_neg_float16,
          is_ignored_dim3_axis0_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_float16) {
  const Model model = createTestModel_dim3_axis0_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_float16_dynamic_output_shape();
bool is_ignored_dim3_axis0_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_neg_float16_dynamic_output_shape,
          is_ignored_dim3_axis0_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_float16_all_inputs_as_internal();
bool is_ignored_dim3_axis0_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis0_neg_float16_all_inputs_as_internal,
          is_ignored_dim3_axis0_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis0_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_quant8();
bool is_ignored_dim3_axis0_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_neg_quant8) {
  Execute(device,
          createTestModel_dim3_axis0_neg_quant8,
          is_ignored_dim3_axis0_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_quant8) {
  const Model model = createTestModel_dim3_axis0_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_quant8_dynamic_output_shape();
bool is_ignored_dim3_axis0_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_neg_quant8_dynamic_output_shape,
          is_ignored_dim3_axis0_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim3_axis0_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis0_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis0_neg_quant8_all_inputs_as_internal,
          is_ignored_dim3_axis0_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis0_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1();
bool is_ignored_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1) {
  Execute(device,
          createTestModel_dim3_axis1,
          is_ignored_dim3_axis1,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1) {
  const Model model = createTestModel_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_dynamic_output_shape();
bool is_ignored_dim3_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_dynamic_output_shape,
          is_ignored_dim3_axis1_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_all_inputs_as_internal();
bool is_ignored_dim3_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis1_all_inputs_as_internal,
          is_ignored_dim3_axis1_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_relaxed();
bool is_ignored_dim3_axis1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_relaxed) {
  Execute(device,
          createTestModel_dim3_axis1_relaxed,
          is_ignored_dim3_axis1_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_relaxed) {
  const Model model = createTestModel_dim3_axis1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_relaxed_dynamic_output_shape();
bool is_ignored_dim3_axis1_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_relaxed_dynamic_output_shape,
          is_ignored_dim3_axis1_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_relaxed_all_inputs_as_internal();
bool is_ignored_dim3_axis1_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis1_relaxed_all_inputs_as_internal,
          is_ignored_dim3_axis1_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis1_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_float16();
bool is_ignored_dim3_axis1_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_float16) {
  Execute(device,
          createTestModel_dim3_axis1_float16,
          is_ignored_dim3_axis1_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_float16) {
  const Model model = createTestModel_dim3_axis1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_float16_dynamic_output_shape();
bool is_ignored_dim3_axis1_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_float16_dynamic_output_shape,
          is_ignored_dim3_axis1_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_float16_all_inputs_as_internal();
bool is_ignored_dim3_axis1_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis1_float16_all_inputs_as_internal,
          is_ignored_dim3_axis1_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis1_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_quant8();
bool is_ignored_dim3_axis1_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_quant8) {
  Execute(device,
          createTestModel_dim3_axis1_quant8,
          is_ignored_dim3_axis1_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_quant8) {
  const Model model = createTestModel_dim3_axis1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_quant8_dynamic_output_shape();
bool is_ignored_dim3_axis1_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_quant8_dynamic_output_shape,
          is_ignored_dim3_axis1_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_quant8_all_inputs_as_internal();
bool is_ignored_dim3_axis1_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis1_quant8_all_inputs_as_internal,
          is_ignored_dim3_axis1_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis1_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg();
bool is_ignored_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_neg) {
  Execute(device,
          createTestModel_dim3_axis1_neg,
          is_ignored_dim3_axis1_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg) {
  const Model model = createTestModel_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_dynamic_output_shape();
bool is_ignored_dim3_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_neg_dynamic_output_shape,
          is_ignored_dim3_axis1_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_all_inputs_as_internal();
bool is_ignored_dim3_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis1_neg_all_inputs_as_internal,
          is_ignored_dim3_axis1_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_relaxed();
bool is_ignored_dim3_axis1_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_neg_relaxed) {
  Execute(device,
          createTestModel_dim3_axis1_neg_relaxed,
          is_ignored_dim3_axis1_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_relaxed) {
  const Model model = createTestModel_dim3_axis1_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim3_axis1_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_neg_relaxed_dynamic_output_shape,
          is_ignored_dim3_axis1_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim3_axis1_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis1_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim3_axis1_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis1_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_float16();
bool is_ignored_dim3_axis1_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_neg_float16) {
  Execute(device,
          createTestModel_dim3_axis1_neg_float16,
          is_ignored_dim3_axis1_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_float16) {
  const Model model = createTestModel_dim3_axis1_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_float16_dynamic_output_shape();
bool is_ignored_dim3_axis1_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_neg_float16_dynamic_output_shape,
          is_ignored_dim3_axis1_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_float16_all_inputs_as_internal();
bool is_ignored_dim3_axis1_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis1_neg_float16_all_inputs_as_internal,
          is_ignored_dim3_axis1_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis1_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_quant8();
bool is_ignored_dim3_axis1_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_neg_quant8) {
  Execute(device,
          createTestModel_dim3_axis1_neg_quant8,
          is_ignored_dim3_axis1_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_quant8) {
  const Model model = createTestModel_dim3_axis1_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_quant8_dynamic_output_shape();
bool is_ignored_dim3_axis1_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_neg_quant8_dynamic_output_shape,
          is_ignored_dim3_axis1_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim3_axis1_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis1_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis1_neg_quant8_all_inputs_as_internal,
          is_ignored_dim3_axis1_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis1_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2();
bool is_ignored_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2) {
  Execute(device,
          createTestModel_dim3_axis2,
          is_ignored_dim3_axis2,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2) {
  const Model model = createTestModel_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_dynamic_output_shape();
bool is_ignored_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_dynamic_output_shape,
          is_ignored_dim3_axis2_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_all_inputs_as_internal();
bool is_ignored_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis2_all_inputs_as_internal,
          is_ignored_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_relaxed();
bool is_ignored_dim3_axis2_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_relaxed) {
  Execute(device,
          createTestModel_dim3_axis2_relaxed,
          is_ignored_dim3_axis2_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_relaxed) {
  const Model model = createTestModel_dim3_axis2_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_relaxed_dynamic_output_shape();
bool is_ignored_dim3_axis2_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_relaxed_dynamic_output_shape,
          is_ignored_dim3_axis2_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_relaxed_all_inputs_as_internal();
bool is_ignored_dim3_axis2_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis2_relaxed_all_inputs_as_internal,
          is_ignored_dim3_axis2_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis2_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_float16();
bool is_ignored_dim3_axis2_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_float16) {
  Execute(device,
          createTestModel_dim3_axis2_float16,
          is_ignored_dim3_axis2_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_float16) {
  const Model model = createTestModel_dim3_axis2_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_float16_dynamic_output_shape();
bool is_ignored_dim3_axis2_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_float16_dynamic_output_shape,
          is_ignored_dim3_axis2_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_float16_all_inputs_as_internal();
bool is_ignored_dim3_axis2_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis2_float16_all_inputs_as_internal,
          is_ignored_dim3_axis2_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis2_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_quant8();
bool is_ignored_dim3_axis2_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_quant8) {
  Execute(device,
          createTestModel_dim3_axis2_quant8,
          is_ignored_dim3_axis2_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_quant8) {
  const Model model = createTestModel_dim3_axis2_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_quant8_dynamic_output_shape();
bool is_ignored_dim3_axis2_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_quant8_dynamic_output_shape,
          is_ignored_dim3_axis2_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_quant8_all_inputs_as_internal();
bool is_ignored_dim3_axis2_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis2_quant8_all_inputs_as_internal,
          is_ignored_dim3_axis2_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis2_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg();
bool is_ignored_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_neg) {
  Execute(device,
          createTestModel_dim3_axis2_neg,
          is_ignored_dim3_axis2_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg) {
  const Model model = createTestModel_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_dynamic_output_shape();
bool is_ignored_dim3_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_neg_dynamic_output_shape,
          is_ignored_dim3_axis2_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_all_inputs_as_internal();
bool is_ignored_dim3_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis2_neg_all_inputs_as_internal,
          is_ignored_dim3_axis2_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_relaxed();
bool is_ignored_dim3_axis2_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_neg_relaxed) {
  Execute(device,
          createTestModel_dim3_axis2_neg_relaxed,
          is_ignored_dim3_axis2_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_relaxed) {
  const Model model = createTestModel_dim3_axis2_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim3_axis2_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_neg_relaxed_dynamic_output_shape,
          is_ignored_dim3_axis2_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim3_axis2_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis2_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim3_axis2_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis2_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_float16();
bool is_ignored_dim3_axis2_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_neg_float16) {
  Execute(device,
          createTestModel_dim3_axis2_neg_float16,
          is_ignored_dim3_axis2_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_float16) {
  const Model model = createTestModel_dim3_axis2_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_float16_dynamic_output_shape();
bool is_ignored_dim3_axis2_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_neg_float16_dynamic_output_shape,
          is_ignored_dim3_axis2_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_float16_all_inputs_as_internal();
bool is_ignored_dim3_axis2_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis2_neg_float16_all_inputs_as_internal,
          is_ignored_dim3_axis2_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis2_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_quant8();
bool is_ignored_dim3_axis2_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_neg_quant8) {
  Execute(device,
          createTestModel_dim3_axis2_neg_quant8,
          is_ignored_dim3_axis2_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_quant8) {
  const Model model = createTestModel_dim3_axis2_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_quant8_dynamic_output_shape();
bool is_ignored_dim3_axis2_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_neg_quant8_dynamic_output_shape,
          is_ignored_dim3_axis2_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim3_axis2_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim3_axis2_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim3_axis2_neg_quant8_all_inputs_as_internal,
          is_ignored_dim3_axis2_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim3_axis2_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0();
bool is_ignored_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0) {
  Execute(device,
          createTestModel_dim2_axis0,
          is_ignored_dim2_axis0,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0) {
  const Model model = createTestModel_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_dynamic_output_shape();
bool is_ignored_dim2_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_dynamic_output_shape,
          is_ignored_dim2_axis0_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_all_inputs_as_internal();
bool is_ignored_dim2_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis0_all_inputs_as_internal,
          is_ignored_dim2_axis0_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_relaxed();
bool is_ignored_dim2_axis0_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_relaxed) {
  Execute(device,
          createTestModel_dim2_axis0_relaxed,
          is_ignored_dim2_axis0_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_relaxed) {
  const Model model = createTestModel_dim2_axis0_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_relaxed_dynamic_output_shape();
bool is_ignored_dim2_axis0_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_relaxed_dynamic_output_shape,
          is_ignored_dim2_axis0_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_relaxed_all_inputs_as_internal();
bool is_ignored_dim2_axis0_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis0_relaxed_all_inputs_as_internal,
          is_ignored_dim2_axis0_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis0_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_float16();
bool is_ignored_dim2_axis0_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_float16) {
  Execute(device,
          createTestModel_dim2_axis0_float16,
          is_ignored_dim2_axis0_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_float16) {
  const Model model = createTestModel_dim2_axis0_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_float16_dynamic_output_shape();
bool is_ignored_dim2_axis0_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_float16_dynamic_output_shape,
          is_ignored_dim2_axis0_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_float16_all_inputs_as_internal();
bool is_ignored_dim2_axis0_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis0_float16_all_inputs_as_internal,
          is_ignored_dim2_axis0_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis0_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_quant8();
bool is_ignored_dim2_axis0_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_quant8) {
  Execute(device,
          createTestModel_dim2_axis0_quant8,
          is_ignored_dim2_axis0_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_quant8) {
  const Model model = createTestModel_dim2_axis0_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_quant8_dynamic_output_shape();
bool is_ignored_dim2_axis0_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_quant8_dynamic_output_shape,
          is_ignored_dim2_axis0_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_quant8_all_inputs_as_internal();
bool is_ignored_dim2_axis0_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis0_quant8_all_inputs_as_internal,
          is_ignored_dim2_axis0_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis0_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg();
bool is_ignored_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_neg) {
  Execute(device,
          createTestModel_dim2_axis0_neg,
          is_ignored_dim2_axis0_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg) {
  const Model model = createTestModel_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_dynamic_output_shape();
bool is_ignored_dim2_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_neg_dynamic_output_shape,
          is_ignored_dim2_axis0_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_all_inputs_as_internal();
bool is_ignored_dim2_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis0_neg_all_inputs_as_internal,
          is_ignored_dim2_axis0_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_relaxed();
bool is_ignored_dim2_axis0_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_neg_relaxed) {
  Execute(device,
          createTestModel_dim2_axis0_neg_relaxed,
          is_ignored_dim2_axis0_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_relaxed) {
  const Model model = createTestModel_dim2_axis0_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim2_axis0_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_neg_relaxed_dynamic_output_shape,
          is_ignored_dim2_axis0_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim2_axis0_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis0_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim2_axis0_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis0_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_float16();
bool is_ignored_dim2_axis0_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_neg_float16) {
  Execute(device,
          createTestModel_dim2_axis0_neg_float16,
          is_ignored_dim2_axis0_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_float16) {
  const Model model = createTestModel_dim2_axis0_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_float16_dynamic_output_shape();
bool is_ignored_dim2_axis0_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_neg_float16_dynamic_output_shape,
          is_ignored_dim2_axis0_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_float16_all_inputs_as_internal();
bool is_ignored_dim2_axis0_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis0_neg_float16_all_inputs_as_internal,
          is_ignored_dim2_axis0_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis0_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_quant8();
bool is_ignored_dim2_axis0_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_neg_quant8) {
  Execute(device,
          createTestModel_dim2_axis0_neg_quant8,
          is_ignored_dim2_axis0_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_quant8) {
  const Model model = createTestModel_dim2_axis0_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_quant8_dynamic_output_shape();
bool is_ignored_dim2_axis0_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_neg_quant8_dynamic_output_shape,
          is_ignored_dim2_axis0_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim2_axis0_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis0_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis0_neg_quant8_all_inputs_as_internal,
          is_ignored_dim2_axis0_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis0_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1();
bool is_ignored_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1) {
  Execute(device,
          createTestModel_dim2_axis1,
          is_ignored_dim2_axis1,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1) {
  const Model model = createTestModel_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_dynamic_output_shape();
bool is_ignored_dim2_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_dynamic_output_shape,
          is_ignored_dim2_axis1_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_all_inputs_as_internal();
bool is_ignored_dim2_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis1_all_inputs_as_internal,
          is_ignored_dim2_axis1_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_relaxed();
bool is_ignored_dim2_axis1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_relaxed) {
  Execute(device,
          createTestModel_dim2_axis1_relaxed,
          is_ignored_dim2_axis1_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_relaxed) {
  const Model model = createTestModel_dim2_axis1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_relaxed_dynamic_output_shape();
bool is_ignored_dim2_axis1_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_relaxed_dynamic_output_shape,
          is_ignored_dim2_axis1_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_relaxed_all_inputs_as_internal();
bool is_ignored_dim2_axis1_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis1_relaxed_all_inputs_as_internal,
          is_ignored_dim2_axis1_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis1_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_float16();
bool is_ignored_dim2_axis1_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_float16) {
  Execute(device,
          createTestModel_dim2_axis1_float16,
          is_ignored_dim2_axis1_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_float16) {
  const Model model = createTestModel_dim2_axis1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_float16_dynamic_output_shape();
bool is_ignored_dim2_axis1_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_float16_dynamic_output_shape,
          is_ignored_dim2_axis1_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_float16_all_inputs_as_internal();
bool is_ignored_dim2_axis1_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis1_float16_all_inputs_as_internal,
          is_ignored_dim2_axis1_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis1_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_quant8();
bool is_ignored_dim2_axis1_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_quant8) {
  Execute(device,
          createTestModel_dim2_axis1_quant8,
          is_ignored_dim2_axis1_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_quant8) {
  const Model model = createTestModel_dim2_axis1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_quant8_dynamic_output_shape();
bool is_ignored_dim2_axis1_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_quant8_dynamic_output_shape,
          is_ignored_dim2_axis1_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_quant8_all_inputs_as_internal();
bool is_ignored_dim2_axis1_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis1_quant8_all_inputs_as_internal,
          is_ignored_dim2_axis1_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis1_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg();
bool is_ignored_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_neg) {
  Execute(device,
          createTestModel_dim2_axis1_neg,
          is_ignored_dim2_axis1_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg) {
  const Model model = createTestModel_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_dynamic_output_shape();
bool is_ignored_dim2_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_neg_dynamic_output_shape,
          is_ignored_dim2_axis1_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_all_inputs_as_internal();
bool is_ignored_dim2_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis1_neg_all_inputs_as_internal,
          is_ignored_dim2_axis1_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_relaxed();
bool is_ignored_dim2_axis1_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_neg_relaxed) {
  Execute(device,
          createTestModel_dim2_axis1_neg_relaxed,
          is_ignored_dim2_axis1_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_relaxed) {
  const Model model = createTestModel_dim2_axis1_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim2_axis1_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_neg_relaxed_dynamic_output_shape,
          is_ignored_dim2_axis1_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim2_axis1_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis1_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim2_axis1_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis1_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_float16();
bool is_ignored_dim2_axis1_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_neg_float16) {
  Execute(device,
          createTestModel_dim2_axis1_neg_float16,
          is_ignored_dim2_axis1_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_float16) {
  const Model model = createTestModel_dim2_axis1_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_float16_dynamic_output_shape();
bool is_ignored_dim2_axis1_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_neg_float16_dynamic_output_shape,
          is_ignored_dim2_axis1_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_float16_all_inputs_as_internal();
bool is_ignored_dim2_axis1_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis1_neg_float16_all_inputs_as_internal,
          is_ignored_dim2_axis1_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis1_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_quant8();
bool is_ignored_dim2_axis1_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_neg_quant8) {
  Execute(device,
          createTestModel_dim2_axis1_neg_quant8,
          is_ignored_dim2_axis1_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_quant8) {
  const Model model = createTestModel_dim2_axis1_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_quant8_dynamic_output_shape();
bool is_ignored_dim2_axis1_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_neg_quant8_dynamic_output_shape,
          is_ignored_dim2_axis1_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim2_axis1_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim2_axis1_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim2_axis1_neg_quant8_all_inputs_as_internal,
          is_ignored_dim2_axis1_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim2_axis1_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0();
bool is_ignored_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0) {
  Execute(device,
          createTestModel_dim1_axis0,
          is_ignored_dim1_axis0,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0) {
  const Model model = createTestModel_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_dynamic_output_shape();
bool is_ignored_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_dynamic_output_shape,
          is_ignored_dim1_axis0_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_all_inputs_as_internal();
bool is_ignored_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim1_axis0_all_inputs_as_internal,
          is_ignored_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_relaxed();
bool is_ignored_dim1_axis0_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_relaxed) {
  Execute(device,
          createTestModel_dim1_axis0_relaxed,
          is_ignored_dim1_axis0_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_relaxed) {
  const Model model = createTestModel_dim1_axis0_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_relaxed_dynamic_output_shape();
bool is_ignored_dim1_axis0_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_relaxed_dynamic_output_shape,
          is_ignored_dim1_axis0_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_relaxed_all_inputs_as_internal();
bool is_ignored_dim1_axis0_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim1_axis0_relaxed_all_inputs_as_internal,
          is_ignored_dim1_axis0_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim1_axis0_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_float16();
bool is_ignored_dim1_axis0_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_float16) {
  Execute(device,
          createTestModel_dim1_axis0_float16,
          is_ignored_dim1_axis0_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_float16) {
  const Model model = createTestModel_dim1_axis0_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_float16_dynamic_output_shape();
bool is_ignored_dim1_axis0_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_float16_dynamic_output_shape,
          is_ignored_dim1_axis0_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_float16_all_inputs_as_internal();
bool is_ignored_dim1_axis0_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim1_axis0_float16_all_inputs_as_internal,
          is_ignored_dim1_axis0_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim1_axis0_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_quant8();
bool is_ignored_dim1_axis0_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_quant8) {
  Execute(device,
          createTestModel_dim1_axis0_quant8,
          is_ignored_dim1_axis0_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_quant8) {
  const Model model = createTestModel_dim1_axis0_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_quant8_dynamic_output_shape();
bool is_ignored_dim1_axis0_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_quant8_dynamic_output_shape,
          is_ignored_dim1_axis0_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_quant8_all_inputs_as_internal();
bool is_ignored_dim1_axis0_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim1_axis0_quant8_all_inputs_as_internal,
          is_ignored_dim1_axis0_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim1_axis0_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg();
bool is_ignored_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_neg) {
  Execute(device,
          createTestModel_dim1_axis0_neg,
          is_ignored_dim1_axis0_neg,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg) {
  const Model model = createTestModel_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_dynamic_output_shape();
bool is_ignored_dim1_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_neg_dynamic_output_shape,
          is_ignored_dim1_axis0_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_all_inputs_as_internal();
bool is_ignored_dim1_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim1_axis0_neg_all_inputs_as_internal,
          is_ignored_dim1_axis0_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_dim1_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_relaxed();
bool is_ignored_dim1_axis0_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_neg_relaxed) {
  Execute(device,
          createTestModel_dim1_axis0_neg_relaxed,
          is_ignored_dim1_axis0_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_relaxed) {
  const Model model = createTestModel_dim1_axis0_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_relaxed_dynamic_output_shape();
bool is_ignored_dim1_axis0_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_neg_relaxed_dynamic_output_shape,
          is_ignored_dim1_axis0_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_relaxed_all_inputs_as_internal();
bool is_ignored_dim1_axis0_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim1_axis0_neg_relaxed_all_inputs_as_internal,
          is_ignored_dim1_axis0_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_dim1_axis0_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_float16();
bool is_ignored_dim1_axis0_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_neg_float16) {
  Execute(device,
          createTestModel_dim1_axis0_neg_float16,
          is_ignored_dim1_axis0_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_float16) {
  const Model model = createTestModel_dim1_axis0_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_float16_dynamic_output_shape();
bool is_ignored_dim1_axis0_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_neg_float16_dynamic_output_shape,
          is_ignored_dim1_axis0_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_float16_all_inputs_as_internal();
bool is_ignored_dim1_axis0_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim1_axis0_neg_float16_all_inputs_as_internal,
          is_ignored_dim1_axis0_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_dim1_axis0_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_quant8();
bool is_ignored_dim1_axis0_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_neg_quant8) {
  Execute(device,
          createTestModel_dim1_axis0_neg_quant8,
          is_ignored_dim1_axis0_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_quant8) {
  const Model model = createTestModel_dim1_axis0_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_quant8_dynamic_output_shape();
bool is_ignored_dim1_axis0_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_neg_quant8_dynamic_output_shape,
          is_ignored_dim1_axis0_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_quant8_all_inputs_as_internal();
bool is_ignored_dim1_axis0_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_dim1_axis0_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_dim1_axis0_neg_quant8_all_inputs_as_internal,
          is_ignored_dim1_axis0_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_dim1_axis0_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0();
bool is_ignored_relaxed_dim4_axis0(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0,
          is_ignored_relaxed_dim4_axis0,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0) {
  const Model model = createTestModel_relaxed_dim4_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis0_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_relaxed();
bool is_ignored_relaxed_dim4_axis0_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_relaxed,
          is_ignored_relaxed_dim4_axis0_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_relaxed) {
  const Model model = createTestModel_relaxed_dim4_axis0_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis0_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis0_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis0_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_float16();
bool is_ignored_relaxed_dim4_axis0_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_float16) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_float16,
          is_ignored_relaxed_dim4_axis0_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_float16) {
  const Model model = createTestModel_relaxed_dim4_axis0_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_float16_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis0_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis0_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis0_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_quant8();
bool is_ignored_relaxed_dim4_axis0_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_quant8) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_quant8,
          is_ignored_relaxed_dim4_axis0_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_quant8) {
  const Model model = createTestModel_relaxed_dim4_axis0_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis0_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis0_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis0_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg();
bool is_ignored_relaxed_dim4_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_neg) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg,
          is_ignored_relaxed_dim4_axis0_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis0_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_relaxed();
bool is_ignored_relaxed_dim4_axis0_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_relaxed,
          is_ignored_relaxed_dim4_axis0_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_float16();
bool is_ignored_relaxed_dim4_axis0_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_float16,
          is_ignored_relaxed_dim4_axis0_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_float16) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_quant8();
bool is_ignored_relaxed_dim4_axis0_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_quant8,
          is_ignored_relaxed_dim4_axis0_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_quant8) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1();
bool is_ignored_relaxed_dim4_axis1(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1,
          is_ignored_relaxed_dim4_axis1,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1) {
  const Model model = createTestModel_relaxed_dim4_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis1_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_relaxed();
bool is_ignored_relaxed_dim4_axis1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_relaxed,
          is_ignored_relaxed_dim4_axis1_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_relaxed) {
  const Model model = createTestModel_relaxed_dim4_axis1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis1_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis1_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis1_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_float16();
bool is_ignored_relaxed_dim4_axis1_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_float16) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_float16,
          is_ignored_relaxed_dim4_axis1_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_float16) {
  const Model model = createTestModel_relaxed_dim4_axis1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_float16_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis1_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis1_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis1_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_quant8();
bool is_ignored_relaxed_dim4_axis1_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_quant8) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_quant8,
          is_ignored_relaxed_dim4_axis1_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_quant8) {
  const Model model = createTestModel_relaxed_dim4_axis1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis1_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis1_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis1_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg();
bool is_ignored_relaxed_dim4_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_neg) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg,
          is_ignored_relaxed_dim4_axis1_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis1_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_relaxed();
bool is_ignored_relaxed_dim4_axis1_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_relaxed,
          is_ignored_relaxed_dim4_axis1_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_float16();
bool is_ignored_relaxed_dim4_axis1_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_float16,
          is_ignored_relaxed_dim4_axis1_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_float16) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_quant8();
bool is_ignored_relaxed_dim4_axis1_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_quant8,
          is_ignored_relaxed_dim4_axis1_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_quant8) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2();
bool is_ignored_relaxed_dim4_axis2(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2,
          is_ignored_relaxed_dim4_axis2,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2) {
  const Model model = createTestModel_relaxed_dim4_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis2_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_relaxed();
bool is_ignored_relaxed_dim4_axis2_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_relaxed,
          is_ignored_relaxed_dim4_axis2_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_relaxed) {
  const Model model = createTestModel_relaxed_dim4_axis2_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis2_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis2_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis2_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_float16();
bool is_ignored_relaxed_dim4_axis2_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_float16) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_float16,
          is_ignored_relaxed_dim4_axis2_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_float16) {
  const Model model = createTestModel_relaxed_dim4_axis2_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_float16_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis2_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis2_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis2_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_quant8();
bool is_ignored_relaxed_dim4_axis2_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_quant8) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_quant8,
          is_ignored_relaxed_dim4_axis2_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_quant8) {
  const Model model = createTestModel_relaxed_dim4_axis2_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis2_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis2_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis2_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg();
bool is_ignored_relaxed_dim4_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_neg) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg,
          is_ignored_relaxed_dim4_axis2_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis2_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_relaxed();
bool is_ignored_relaxed_dim4_axis2_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_relaxed,
          is_ignored_relaxed_dim4_axis2_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_float16();
bool is_ignored_relaxed_dim4_axis2_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_float16,
          is_ignored_relaxed_dim4_axis2_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_float16) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_quant8();
bool is_ignored_relaxed_dim4_axis2_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_quant8,
          is_ignored_relaxed_dim4_axis2_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_quant8) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3();
bool is_ignored_relaxed_dim4_axis3(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3,
          is_ignored_relaxed_dim4_axis3,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3) {
  const Model model = createTestModel_relaxed_dim4_axis3();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis3_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis3_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis3_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_relaxed();
bool is_ignored_relaxed_dim4_axis3_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_relaxed,
          is_ignored_relaxed_dim4_axis3_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_relaxed) {
  const Model model = createTestModel_relaxed_dim4_axis3_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis3_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis3_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis3_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_float16();
bool is_ignored_relaxed_dim4_axis3_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_float16) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_float16,
          is_ignored_relaxed_dim4_axis3_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_float16) {
  const Model model = createTestModel_relaxed_dim4_axis3_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_float16_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis3_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis3_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis3_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_quant8();
bool is_ignored_relaxed_dim4_axis3_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_quant8) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_quant8,
          is_ignored_relaxed_dim4_axis3_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_quant8) {
  const Model model = createTestModel_relaxed_dim4_axis3_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis3_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis3_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis3_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg();
bool is_ignored_relaxed_dim4_axis3_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_neg) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg,
          is_ignored_relaxed_dim4_axis3_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis3_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis3_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_relaxed();
bool is_ignored_relaxed_dim4_axis3_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_relaxed,
          is_ignored_relaxed_dim4_axis3_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_float16();
bool is_ignored_relaxed_dim4_axis3_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_float16,
          is_ignored_relaxed_dim4_axis3_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_float16) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_quant8();
bool is_ignored_relaxed_dim4_axis3_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_quant8,
          is_ignored_relaxed_dim4_axis3_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_quant8) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim4_axis3_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0();
bool is_ignored_relaxed_dim3_axis0(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0,
          is_ignored_relaxed_dim3_axis0,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0) {
  const Model model = createTestModel_relaxed_dim3_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis0_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_relaxed();
bool is_ignored_relaxed_dim3_axis0_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_relaxed,
          is_ignored_relaxed_dim3_axis0_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_relaxed) {
  const Model model = createTestModel_relaxed_dim3_axis0_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis0_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis0_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis0_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_float16();
bool is_ignored_relaxed_dim3_axis0_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_float16) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_float16,
          is_ignored_relaxed_dim3_axis0_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_float16) {
  const Model model = createTestModel_relaxed_dim3_axis0_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_float16_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis0_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis0_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis0_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_quant8();
bool is_ignored_relaxed_dim3_axis0_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_quant8) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_quant8,
          is_ignored_relaxed_dim3_axis0_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_quant8) {
  const Model model = createTestModel_relaxed_dim3_axis0_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis0_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis0_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis0_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg();
bool is_ignored_relaxed_dim3_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_neg) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg,
          is_ignored_relaxed_dim3_axis0_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis0_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_relaxed();
bool is_ignored_relaxed_dim3_axis0_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_relaxed,
          is_ignored_relaxed_dim3_axis0_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_float16();
bool is_ignored_relaxed_dim3_axis0_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_float16,
          is_ignored_relaxed_dim3_axis0_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_float16) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_quant8();
bool is_ignored_relaxed_dim3_axis0_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_quant8,
          is_ignored_relaxed_dim3_axis0_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_quant8) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1();
bool is_ignored_relaxed_dim3_axis1(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1,
          is_ignored_relaxed_dim3_axis1,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1) {
  const Model model = createTestModel_relaxed_dim3_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis1_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_relaxed();
bool is_ignored_relaxed_dim3_axis1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_relaxed,
          is_ignored_relaxed_dim3_axis1_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_relaxed) {
  const Model model = createTestModel_relaxed_dim3_axis1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis1_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis1_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis1_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_float16();
bool is_ignored_relaxed_dim3_axis1_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_float16) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_float16,
          is_ignored_relaxed_dim3_axis1_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_float16) {
  const Model model = createTestModel_relaxed_dim3_axis1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_float16_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis1_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis1_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis1_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_quant8();
bool is_ignored_relaxed_dim3_axis1_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_quant8) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_quant8,
          is_ignored_relaxed_dim3_axis1_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_quant8) {
  const Model model = createTestModel_relaxed_dim3_axis1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis1_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis1_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis1_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg();
bool is_ignored_relaxed_dim3_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_neg) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg,
          is_ignored_relaxed_dim3_axis1_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis1_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_relaxed();
bool is_ignored_relaxed_dim3_axis1_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_relaxed,
          is_ignored_relaxed_dim3_axis1_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_float16();
bool is_ignored_relaxed_dim3_axis1_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_float16,
          is_ignored_relaxed_dim3_axis1_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_float16) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_quant8();
bool is_ignored_relaxed_dim3_axis1_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_quant8,
          is_ignored_relaxed_dim3_axis1_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_quant8) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2();
bool is_ignored_relaxed_dim3_axis2(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2,
          is_ignored_relaxed_dim3_axis2,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2) {
  const Model model = createTestModel_relaxed_dim3_axis2();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis2_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis2_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis2_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_relaxed();
bool is_ignored_relaxed_dim3_axis2_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_relaxed,
          is_ignored_relaxed_dim3_axis2_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_relaxed) {
  const Model model = createTestModel_relaxed_dim3_axis2_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis2_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis2_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis2_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_float16();
bool is_ignored_relaxed_dim3_axis2_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_float16) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_float16,
          is_ignored_relaxed_dim3_axis2_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_float16) {
  const Model model = createTestModel_relaxed_dim3_axis2_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_float16_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis2_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis2_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis2_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_quant8();
bool is_ignored_relaxed_dim3_axis2_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_quant8) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_quant8,
          is_ignored_relaxed_dim3_axis2_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_quant8) {
  const Model model = createTestModel_relaxed_dim3_axis2_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis2_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis2_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis2_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg();
bool is_ignored_relaxed_dim3_axis2_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_neg) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg,
          is_ignored_relaxed_dim3_axis2_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis2_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis2_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_relaxed();
bool is_ignored_relaxed_dim3_axis2_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_relaxed,
          is_ignored_relaxed_dim3_axis2_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_float16();
bool is_ignored_relaxed_dim3_axis2_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_float16,
          is_ignored_relaxed_dim3_axis2_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_float16) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_quant8();
bool is_ignored_relaxed_dim3_axis2_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_quant8,
          is_ignored_relaxed_dim3_axis2_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_quant8) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim3_axis2_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0();
bool is_ignored_relaxed_dim2_axis0(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0,
          is_ignored_relaxed_dim2_axis0,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0) {
  const Model model = createTestModel_relaxed_dim2_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis0_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_relaxed();
bool is_ignored_relaxed_dim2_axis0_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_relaxed,
          is_ignored_relaxed_dim2_axis0_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_relaxed) {
  const Model model = createTestModel_relaxed_dim2_axis0_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis0_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis0_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis0_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_float16();
bool is_ignored_relaxed_dim2_axis0_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_float16) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_float16,
          is_ignored_relaxed_dim2_axis0_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_float16) {
  const Model model = createTestModel_relaxed_dim2_axis0_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_float16_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis0_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis0_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis0_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_quant8();
bool is_ignored_relaxed_dim2_axis0_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_quant8) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_quant8,
          is_ignored_relaxed_dim2_axis0_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_quant8) {
  const Model model = createTestModel_relaxed_dim2_axis0_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis0_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis0_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis0_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg();
bool is_ignored_relaxed_dim2_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_neg) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg,
          is_ignored_relaxed_dim2_axis0_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis0_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_relaxed();
bool is_ignored_relaxed_dim2_axis0_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_relaxed,
          is_ignored_relaxed_dim2_axis0_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_float16();
bool is_ignored_relaxed_dim2_axis0_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_float16,
          is_ignored_relaxed_dim2_axis0_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_float16) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_quant8();
bool is_ignored_relaxed_dim2_axis0_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_quant8,
          is_ignored_relaxed_dim2_axis0_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_quant8) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1();
bool is_ignored_relaxed_dim2_axis1(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1,
          is_ignored_relaxed_dim2_axis1,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1) {
  const Model model = createTestModel_relaxed_dim2_axis1();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis1_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis1_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis1_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_relaxed();
bool is_ignored_relaxed_dim2_axis1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_relaxed,
          is_ignored_relaxed_dim2_axis1_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_relaxed) {
  const Model model = createTestModel_relaxed_dim2_axis1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis1_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis1_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis1_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_float16();
bool is_ignored_relaxed_dim2_axis1_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_float16) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_float16,
          is_ignored_relaxed_dim2_axis1_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_float16) {
  const Model model = createTestModel_relaxed_dim2_axis1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_float16_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis1_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis1_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis1_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_quant8();
bool is_ignored_relaxed_dim2_axis1_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_quant8) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_quant8,
          is_ignored_relaxed_dim2_axis1_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_quant8) {
  const Model model = createTestModel_relaxed_dim2_axis1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis1_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis1_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis1_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg();
bool is_ignored_relaxed_dim2_axis1_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_neg) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg,
          is_ignored_relaxed_dim2_axis1_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis1_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis1_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_relaxed();
bool is_ignored_relaxed_dim2_axis1_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_relaxed,
          is_ignored_relaxed_dim2_axis1_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_float16();
bool is_ignored_relaxed_dim2_axis1_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_float16,
          is_ignored_relaxed_dim2_axis1_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_float16) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_quant8();
bool is_ignored_relaxed_dim2_axis1_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_quant8,
          is_ignored_relaxed_dim2_axis1_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_quant8) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim2_axis1_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0();
bool is_ignored_relaxed_dim1_axis0(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0,
          is_ignored_relaxed_dim1_axis0,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0) {
  const Model model = createTestModel_relaxed_dim1_axis0();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_all_inputs_as_internal();
bool is_ignored_relaxed_dim1_axis0_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_all_inputs_as_internal,
          is_ignored_relaxed_dim1_axis0_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim1_axis0_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_relaxed();
bool is_ignored_relaxed_dim1_axis0_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_relaxed,
          is_ignored_relaxed_dim1_axis0_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_relaxed) {
  const Model model = createTestModel_relaxed_dim1_axis0_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim1_axis0_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim1_axis0_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim1_axis0_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_float16();
bool is_ignored_relaxed_dim1_axis0_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_float16) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_float16,
          is_ignored_relaxed_dim1_axis0_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_float16) {
  const Model model = createTestModel_relaxed_dim1_axis0_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_float16_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim1_axis0_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim1_axis0_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim1_axis0_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_quant8();
bool is_ignored_relaxed_dim1_axis0_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_quant8) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_quant8,
          is_ignored_relaxed_dim1_axis0_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_quant8) {
  const Model model = createTestModel_relaxed_dim1_axis0_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim1_axis0_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim1_axis0_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim1_axis0_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg();
bool is_ignored_relaxed_dim1_axis0_neg(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_neg) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg,
          is_ignored_relaxed_dim1_axis0_neg,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_neg_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_neg_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_neg_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_all_inputs_as_internal();
bool is_ignored_relaxed_dim1_axis0_neg_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_all_inputs_as_internal,
          is_ignored_relaxed_dim1_axis0_neg_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_relaxed();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_relaxed();
bool is_ignored_relaxed_dim1_axis0_neg_relaxed(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_neg_relaxed) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_relaxed,
          is_ignored_relaxed_dim1_axis0_neg_relaxed,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_relaxed());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_relaxed) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_float16();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_float16();
bool is_ignored_relaxed_dim1_axis0_neg_float16(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_neg_float16) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_float16,
          is_ignored_relaxed_dim1_axis0_neg_float16,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_float16());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_float16) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_float16_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_float16_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_neg_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_neg_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_float16_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_neg_float16_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_float16_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal();
bool is_ignored_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal,
          is_ignored_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_quant8();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_quant8();
bool is_ignored_relaxed_dim1_axis0_neg_quant8(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_neg_quant8) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_quant8,
          is_ignored_relaxed_dim1_axis0_neg_quant8,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_quant8());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_quant8) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal();
bool is_ignored_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, l2_normalization_axis_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal,
          is_ignored_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

namespace generated_tests::l2_normalization_axis {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::l2_normalization_axis

namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis {

Model createTestModel_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, l2_normalization_axis_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, l2_normalization_axis_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::l2_normalization_axis::get_examples_relaxed_dim1_axis0_neg_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::l2_normalization_axis

