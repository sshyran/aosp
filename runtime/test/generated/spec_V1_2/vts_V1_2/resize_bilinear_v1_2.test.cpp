// Generated from resize_bilinear_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc();
bool is_ignored_shape_nhwc(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc) {
  Execute(device,
          createTestModel_shape_nhwc,
          is_ignored_shape_nhwc,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc) {
  const Model model = createTestModel_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_dynamic_output_shape();
bool is_ignored_shape_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape,
          is_ignored_shape_nhwc_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_all_inputs_as_internal();
bool is_ignored_shape_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal,
          is_ignored_shape_nhwc_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_relaxed();
bool is_ignored_shape_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed,
          is_ignored_shape_nhwc_relaxed,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed) {
  const Model model = createTestModel_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_float16();
bool is_ignored_shape_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_float16) {
  Execute(device,
          createTestModel_shape_nhwc_float16,
          is_ignored_shape_nhwc_float16,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16) {
  const Model model = createTestModel_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape,
          is_ignored_shape_nhwc_float16_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_quant8();
bool is_ignored_shape_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_quant8) {
  Execute(device,
          createTestModel_shape_nhwc_quant8,
          is_ignored_shape_nhwc_quant8,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8) {
  const Model model = createTestModel_shape_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw();
bool is_ignored_shape_nchw(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw) {
  Execute(device,
          createTestModel_shape_nchw,
          is_ignored_shape_nchw,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw) {
  const Model model = createTestModel_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_dynamic_output_shape();
bool is_ignored_shape_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape,
          is_ignored_shape_nchw_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_all_inputs_as_internal();
bool is_ignored_shape_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal,
          is_ignored_shape_nchw_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_relaxed();
bool is_ignored_shape_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_shape_nchw_relaxed,
          is_ignored_shape_nchw_relaxed,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed) {
  const Model model = createTestModel_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_float16();
bool is_ignored_shape_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_float16) {
  Execute(device,
          createTestModel_shape_nchw_float16,
          is_ignored_shape_nchw_float16,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16) {
  const Model model = createTestModel_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_float16_dynamic_output_shape();
bool is_ignored_shape_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape,
          is_ignored_shape_nchw_float16_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal,
          is_ignored_shape_nchw_float16_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_quant8();
bool is_ignored_shape_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_quant8) {
  Execute(device,
          createTestModel_shape_nchw_quant8,
          is_ignored_shape_nchw_quant8,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8) {
  const Model model = createTestModel_shape_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape,
          is_ignored_shape_nchw_quant8_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc();
bool is_ignored_scale_nhwc(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc) {
  Execute(device,
          createTestModel_scale_nhwc,
          is_ignored_scale_nhwc,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc) {
  const Model model = createTestModel_scale_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_dynamic_output_shape();
bool is_ignored_scale_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape,
          is_ignored_scale_nhwc_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_all_inputs_as_internal();
bool is_ignored_scale_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal,
          is_ignored_scale_nhwc_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_relaxed();
bool is_ignored_scale_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_relaxed) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed,
          is_ignored_scale_nhwc_relaxed,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed) {
  const Model model = createTestModel_scale_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_float16();
bool is_ignored_scale_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_float16) {
  Execute(device,
          createTestModel_scale_nhwc_float16,
          is_ignored_scale_nhwc_float16,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16) {
  const Model model = createTestModel_scale_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape,
          is_ignored_scale_nhwc_float16_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_quant8();
bool is_ignored_scale_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_quant8) {
  Execute(device,
          createTestModel_scale_nhwc_quant8,
          is_ignored_scale_nhwc_quant8,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8) {
  const Model model = createTestModel_scale_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw();
bool is_ignored_scale_nchw(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw) {
  Execute(device,
          createTestModel_scale_nchw,
          is_ignored_scale_nchw,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw) {
  const Model model = createTestModel_scale_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_dynamic_output_shape();
bool is_ignored_scale_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape,
          is_ignored_scale_nchw_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_all_inputs_as_internal();
bool is_ignored_scale_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal,
          is_ignored_scale_nchw_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_relaxed();
bool is_ignored_scale_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_relaxed) {
  Execute(device,
          createTestModel_scale_nchw_relaxed,
          is_ignored_scale_nchw_relaxed,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed) {
  const Model model = createTestModel_scale_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_float16();
bool is_ignored_scale_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_float16) {
  Execute(device,
          createTestModel_scale_nchw_float16,
          is_ignored_scale_nchw_float16,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16) {
  const Model model = createTestModel_scale_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_float16_dynamic_output_shape();
bool is_ignored_scale_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape,
          is_ignored_scale_nchw_float16_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal,
          is_ignored_scale_nchw_float16_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_quant8();
bool is_ignored_scale_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_quant8) {
  Execute(device,
          createTestModel_scale_nchw_quant8,
          is_ignored_scale_nchw_quant8,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8) {
  const Model model = createTestModel_scale_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape,
          is_ignored_scale_nchw_quant8_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_2();
bool is_ignored_shape_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_2) {
  Execute(device,
          createTestModel_shape_nhwc_2,
          is_ignored_shape_nhwc_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_2) {
  const Model model = createTestModel_shape_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape_2,
          is_ignored_shape_nhwc_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_all_inputs_as_internal_2();
bool is_ignored_shape_nhwc_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_2,
          is_ignored_shape_nhwc_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_relaxed_2();
bool is_ignored_shape_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_2,
          is_ignored_shape_nhwc_relaxed_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_2) {
  const Model model = createTestModel_shape_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape_2,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_2();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_2,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_float16_2();
bool is_ignored_shape_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_float16_2) {
  Execute(device,
          createTestModel_shape_nhwc_float16_2,
          is_ignored_shape_nhwc_float16_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_2) {
  const Model model = createTestModel_shape_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape_2,
          is_ignored_shape_nhwc_float16_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_2();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_2,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_quant8_2();
bool is_ignored_shape_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_quant8_2) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_2,
          is_ignored_shape_nhwc_quant8_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_2) {
  const Model model = createTestModel_shape_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape_2,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_2();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_2,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_2();
bool is_ignored_shape_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_2) {
  Execute(device,
          createTestModel_shape_nchw_2,
          is_ignored_shape_nchw_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_2) {
  const Model model = createTestModel_shape_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_dynamic_output_shape_2();
bool is_ignored_shape_nchw_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape_2,
          is_ignored_shape_nchw_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_all_inputs_as_internal_2();
bool is_ignored_shape_nchw_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_2,
          is_ignored_shape_nchw_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_relaxed_2();
bool is_ignored_shape_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_relaxed_2) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_2,
          is_ignored_shape_nchw_relaxed_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_2) {
  const Model model = createTestModel_shape_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape_2();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape_2,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_2();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_2,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_float16_2();
bool is_ignored_shape_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_float16_2) {
  Execute(device,
          createTestModel_shape_nchw_float16_2,
          is_ignored_shape_nchw_float16_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_2) {
  const Model model = createTestModel_shape_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_float16_dynamic_output_shape_2();
bool is_ignored_shape_nchw_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape_2,
          is_ignored_shape_nchw_float16_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_2();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_2,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_quant8_2();
bool is_ignored_shape_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_quant8_2) {
  Execute(device,
          createTestModel_shape_nchw_quant8_2,
          is_ignored_shape_nchw_quant8_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_2) {
  const Model model = createTestModel_shape_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape_2();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape_2,
          is_ignored_shape_nchw_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_2();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_2,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_2();
bool is_ignored_scale_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_2) {
  Execute(device,
          createTestModel_scale_nhwc_2,
          is_ignored_scale_nhwc_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_2) {
  const Model model = createTestModel_scale_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape_2,
          is_ignored_scale_nhwc_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_all_inputs_as_internal_2();
bool is_ignored_scale_nhwc_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_2,
          is_ignored_scale_nhwc_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_relaxed_2();
bool is_ignored_scale_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_2,
          is_ignored_scale_nhwc_relaxed_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_2) {
  const Model model = createTestModel_scale_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape_2,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_2();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_2,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_float16_2();
bool is_ignored_scale_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_float16_2) {
  Execute(device,
          createTestModel_scale_nhwc_float16_2,
          is_ignored_scale_nhwc_float16_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_2) {
  const Model model = createTestModel_scale_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape_2,
          is_ignored_scale_nhwc_float16_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_2();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_2,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_quant8_2();
bool is_ignored_scale_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_quant8_2) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_2,
          is_ignored_scale_nhwc_quant8_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_2) {
  const Model model = createTestModel_scale_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape_2,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_2();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_2,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_2();
bool is_ignored_scale_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_2) {
  Execute(device,
          createTestModel_scale_nchw_2,
          is_ignored_scale_nchw_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_2) {
  const Model model = createTestModel_scale_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_dynamic_output_shape_2();
bool is_ignored_scale_nchw_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape_2,
          is_ignored_scale_nchw_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_all_inputs_as_internal_2();
bool is_ignored_scale_nchw_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_2,
          is_ignored_scale_nchw_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_relaxed_2();
bool is_ignored_scale_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_relaxed_2) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_2,
          is_ignored_scale_nchw_relaxed_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_2) {
  const Model model = createTestModel_scale_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape_2();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape_2,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_2();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_2,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_float16_2();
bool is_ignored_scale_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_float16_2) {
  Execute(device,
          createTestModel_scale_nchw_float16_2,
          is_ignored_scale_nchw_float16_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_2) {
  const Model model = createTestModel_scale_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_float16_dynamic_output_shape_2();
bool is_ignored_scale_nchw_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape_2,
          is_ignored_scale_nchw_float16_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_2();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_2,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_quant8_2();
bool is_ignored_scale_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_quant8_2) {
  Execute(device,
          createTestModel_scale_nchw_quant8_2,
          is_ignored_scale_nchw_quant8_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_2) {
  const Model model = createTestModel_scale_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape_2();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape_2,
          is_ignored_scale_nchw_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_2();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_2,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_float16();
bool is_ignored_shape_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_float16) {
  Execute(device,
          createTestModel_shape_float16,
          is_ignored_shape_float16,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_float16());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_float16) {
  const Model model = createTestModel_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_float16_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_float16_dynamic_output_shape();
bool is_ignored_shape_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_float16_dynamic_output_shape,
          is_ignored_shape_float16_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_float16_dynamic_output_shape) {
  const Model model = createTestModel_shape_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_float16_all_inputs_as_internal();
bool is_ignored_shape_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_float16_all_inputs_as_internal,
          is_ignored_shape_float16_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_float16_all_inputs_as_internal) {
  const Model model = createTestModel_shape_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_quant8();
bool is_ignored_shape_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_quant8) {
  Execute(device,
          createTestModel_shape_quant8,
          is_ignored_shape_quant8,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_quant8());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_quant8) {
  const Model model = createTestModel_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_quant8_dynamic_output_shape();
bool is_ignored_shape_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_quant8_dynamic_output_shape,
          is_ignored_shape_quant8_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_quant8_dynamic_output_shape) {
  const Model model = createTestModel_shape_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_quant8_all_inputs_as_internal();
bool is_ignored_shape_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_shape_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_quant8_all_inputs_as_internal,
          is_ignored_shape_quant8_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_shape_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_shape_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_shape_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_shape_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_shape_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_shape_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_float16();
bool is_ignored_scale_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_float16) {
  Execute(device,
          createTestModel_scale_float16,
          is_ignored_scale_float16,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_float16());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_float16) {
  const Model model = createTestModel_scale_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_float16_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_float16_dynamic_output_shape();
bool is_ignored_scale_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_float16_dynamic_output_shape,
          is_ignored_scale_float16_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_float16_dynamic_output_shape) {
  const Model model = createTestModel_scale_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_float16_all_inputs_as_internal();
bool is_ignored_scale_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_float16_all_inputs_as_internal,
          is_ignored_scale_float16_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_float16_all_inputs_as_internal) {
  const Model model = createTestModel_scale_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_quant8();
bool is_ignored_scale_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_quant8) {
  Execute(device,
          createTestModel_scale_quant8,
          is_ignored_scale_quant8,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_quant8());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_quant8) {
  const Model model = createTestModel_scale_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_quant8_dynamic_output_shape();
bool is_ignored_scale_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_quant8_dynamic_output_shape,
          is_ignored_scale_quant8_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_quant8_dynamic_output_shape) {
  const Model model = createTestModel_scale_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_quant8_all_inputs_as_internal();
bool is_ignored_scale_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_scale_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_quant8_all_inputs_as_internal,
          is_ignored_scale_quant8_all_inputs_as_internal,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_scale_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_scale_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_scale_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_scale_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_scale_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_scale_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc();
bool is_ignored_zero_sized_nhwc(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nhwc) {
  Execute(device,
          createTestModel_zero_sized_nhwc,
          is_ignored_zero_sized_nhwc,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc) {
  const Model model = createTestModel_zero_sized_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_dynamic_output_shape();
bool is_ignored_zero_sized_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nhwc_dynamic_output_shape,
          is_ignored_zero_sized_nhwc_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_relaxed();
bool is_ignored_zero_sized_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed) {
  Execute(device,
          createTestModel_zero_sized_nhwc_relaxed,
          is_ignored_zero_sized_nhwc_relaxed,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_relaxed());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed) {
  const Model model = createTestModel_zero_sized_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape,
          is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_quant8();
bool is_ignored_zero_sized_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8) {
  Execute(device,
          createTestModel_zero_sized_nhwc_quant8,
          is_ignored_zero_sized_nhwc_quant8,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_quant8());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8) {
  const Model model = createTestModel_zero_sized_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape();
bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape,
          is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_float16();
bool is_ignored_zero_sized_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nhwc_float16) {
  Execute(device,
          createTestModel_zero_sized_nhwc_float16,
          is_ignored_zero_sized_nhwc_float16,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_float16());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_float16) {
  const Model model = createTestModel_zero_sized_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_float16_dynamic_output_shape();
bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nhwc_float16_dynamic_output_shape,
          is_ignored_zero_sized_nhwc_float16_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw();
bool is_ignored_zero_sized_nchw(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nchw) {
  Execute(device,
          createTestModel_zero_sized_nchw,
          is_ignored_zero_sized_nchw,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw) {
  const Model model = createTestModel_zero_sized_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_dynamic_output_shape();
bool is_ignored_zero_sized_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nchw_dynamic_output_shape,
          is_ignored_zero_sized_nchw_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_relaxed();
bool is_ignored_zero_sized_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed) {
  Execute(device,
          createTestModel_zero_sized_nchw_relaxed,
          is_ignored_zero_sized_nchw_relaxed,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_relaxed());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed) {
  const Model model = createTestModel_zero_sized_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape();
bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape,
          is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_quant8();
bool is_ignored_zero_sized_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nchw_quant8) {
  Execute(device,
          createTestModel_zero_sized_nchw_quant8,
          is_ignored_zero_sized_nchw_quant8,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_quant8());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_quant8) {
  const Model model = createTestModel_zero_sized_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_quant8_dynamic_output_shape();
bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nchw_quant8_dynamic_output_shape,
          is_ignored_zero_sized_nchw_quant8_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_float16();
bool is_ignored_zero_sized_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nchw_float16) {
  Execute(device,
          createTestModel_zero_sized_nchw_float16,
          is_ignored_zero_sized_nchw_float16,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_float16());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_float16) {
  const Model model = createTestModel_zero_sized_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_float16_dynamic_output_shape();
bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nchw_float16_dynamic_output_shape,
          is_ignored_zero_sized_nchw_float16_dynamic_output_shape,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_2();
bool is_ignored_zero_sized_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nhwc_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_2,
          is_ignored_zero_sized_nhwc_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_2) {
  const Model model = createTestModel_zero_sized_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_dynamic_output_shape_2();
bool is_ignored_zero_sized_nhwc_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_dynamic_output_shape_2,
          is_ignored_zero_sized_nhwc_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nhwc_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_relaxed_2();
bool is_ignored_zero_sized_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_relaxed_2,
          is_ignored_zero_sized_nhwc_relaxed_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_relaxed_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed_2) {
  const Model model = createTestModel_zero_sized_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2();
bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2,
          is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_quant8_2();
bool is_ignored_zero_sized_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_quant8_2,
          is_ignored_zero_sized_nhwc_quant8_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_quant8_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8_2) {
  const Model model = createTestModel_zero_sized_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape_2();
bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape_2,
          is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_float16_2();
bool is_ignored_zero_sized_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nhwc_float16_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_float16_2,
          is_ignored_zero_sized_nhwc_float16_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_float16_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_float16_2) {
  const Model model = createTestModel_zero_sized_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nhwc_float16_dynamic_output_shape_2();
bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nhwc_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_float16_dynamic_output_shape_2,
          is_ignored_zero_sized_nhwc_float16_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nhwc_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nhwc_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nhwc_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_2();
bool is_ignored_zero_sized_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nchw_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_2,
          is_ignored_zero_sized_nchw_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_2) {
  const Model model = createTestModel_zero_sized_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_dynamic_output_shape_2();
bool is_ignored_zero_sized_nchw_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_dynamic_output_shape_2,
          is_ignored_zero_sized_nchw_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nchw_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_relaxed_2();
bool is_ignored_zero_sized_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_relaxed_2,
          is_ignored_zero_sized_nchw_relaxed_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_relaxed_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed_2) {
  const Model model = createTestModel_zero_sized_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape_2();
bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape_2,
          is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_quant8_2();
bool is_ignored_zero_sized_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nchw_quant8_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_quant8_2,
          is_ignored_zero_sized_nchw_quant8_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_quant8_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_quant8_2) {
  const Model model = createTestModel_zero_sized_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_quant8_dynamic_output_shape_2();
bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_quant8_dynamic_output_shape_2,
          is_ignored_zero_sized_nchw_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nchw_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_float16_2();
bool is_ignored_zero_sized_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_bilinear_v1_2_zero_sized_nchw_float16_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_float16_2,
          is_ignored_zero_sized_nchw_float16_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_float16_2());
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_float16_2) {
  const Model model = createTestModel_zero_sized_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

namespace generated_tests::resize_bilinear_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_bilinear_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2 {

Model createTestModel_zero_sized_nchw_float16_dynamic_output_shape_2();
bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_bilinear_v1_2_zero_sized_nchw_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_float16_dynamic_output_shape_2,
          is_ignored_zero_sized_nchw_float16_dynamic_output_shape_2,
          ::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_bilinear_v1_2_zero_sized_nchw_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nchw_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_bilinear_v1_2::get_examples_zero_sized_nchw_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_bilinear_v1_2

