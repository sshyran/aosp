// Generated from batch_to_space_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc();
bool is_ignored_nhwc(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc) {
  Execute(device,
          createTestModel_nhwc,
          is_ignored_nhwc,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc) {
  const Model model = createTestModel_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_dynamic_output_shape();
bool is_ignored_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_dynamic_output_shape,
          is_ignored_nhwc_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_all_inputs_as_internal();
bool is_ignored_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_all_inputs_as_internal,
          is_ignored_nhwc_all_inputs_as_internal,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_relaxed();
bool is_ignored_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_relaxed) {
  Execute(device,
          createTestModel_nhwc_relaxed,
          is_ignored_nhwc_relaxed,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_relaxed) {
  const Model model = createTestModel_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relaxed_dynamic_output_shape,
          is_ignored_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_relaxed_all_inputs_as_internal();
bool is_ignored_nhwc_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_inputs_as_internal,
          is_ignored_nhwc_relaxed_all_inputs_as_internal,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_float16();
bool is_ignored_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_float16) {
  Execute(device,
          createTestModel_nhwc_float16,
          is_ignored_nhwc_float16,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_float16) {
  const Model model = createTestModel_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_float16_dynamic_output_shape();
bool is_ignored_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_float16_dynamic_output_shape,
          is_ignored_nhwc_float16_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_float16_all_inputs_as_internal();
bool is_ignored_nhwc_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_float16_all_inputs_as_internal,
          is_ignored_nhwc_float16_all_inputs_as_internal,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_quant8();
bool is_ignored_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_quant8) {
  Execute(device,
          createTestModel_nhwc_quant8,
          is_ignored_nhwc_quant8,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_quant8) {
  const Model model = createTestModel_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_quant8_dynamic_output_shape();
bool is_ignored_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_quant8_dynamic_output_shape,
          is_ignored_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_quant8_all_inputs_as_internal();
bool is_ignored_nhwc_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nhwc_quant8_all_inputs_as_internal,
          is_ignored_nhwc_quant8_all_inputs_as_internal,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nhwc_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw();
bool is_ignored_nchw(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw) {
  Execute(device,
          createTestModel_nchw,
          is_ignored_nchw,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw) {
  const Model model = createTestModel_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_dynamic_output_shape();
bool is_ignored_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_dynamic_output_shape,
          is_ignored_nchw_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_dynamic_output_shape) {
  const Model model = createTestModel_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_all_inputs_as_internal();
bool is_ignored_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_all_inputs_as_internal,
          is_ignored_nchw_all_inputs_as_internal,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_relaxed();
bool is_ignored_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_relaxed) {
  Execute(device,
          createTestModel_nchw_relaxed,
          is_ignored_nchw_relaxed,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_relaxed) {
  const Model model = createTestModel_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_relaxed_dynamic_output_shape();
bool is_ignored_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relaxed_dynamic_output_shape,
          is_ignored_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_relaxed_all_inputs_as_internal();
bool is_ignored_nchw_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_relaxed_all_inputs_as_internal,
          is_ignored_nchw_relaxed_all_inputs_as_internal,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_float16();
bool is_ignored_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_float16) {
  Execute(device,
          createTestModel_nchw_float16,
          is_ignored_nchw_float16,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_float16) {
  const Model model = createTestModel_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_float16_dynamic_output_shape();
bool is_ignored_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_float16_dynamic_output_shape,
          is_ignored_nchw_float16_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_float16_all_inputs_as_internal();
bool is_ignored_nchw_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_float16_all_inputs_as_internal,
          is_ignored_nchw_float16_all_inputs_as_internal,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_float16_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_quant8();
bool is_ignored_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_quant8) {
  Execute(device,
          createTestModel_nchw_quant8,
          is_ignored_nchw_quant8,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_quant8) {
  const Model model = createTestModel_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_quant8_dynamic_output_shape();
bool is_ignored_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_quant8_dynamic_output_shape,
          is_ignored_nchw_quant8_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_quant8_all_inputs_as_internal();
bool is_ignored_nchw_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_nchw_quant8_all_inputs_as_internal,
          is_ignored_nchw_quant8_all_inputs_as_internal,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_nchw_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_2();
bool is_ignored_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_2) {
  Execute(device,
          createTestModel_nhwc_2,
          is_ignored_nhwc_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_2) {
  const Model model = createTestModel_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_dynamic_output_shape_2();
bool is_ignored_nhwc_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_dynamic_output_shape_2,
          is_ignored_nhwc_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_all_inputs_as_internal_2();
bool is_ignored_nhwc_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_all_inputs_as_internal_2,
          is_ignored_nhwc_all_inputs_as_internal_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_relaxed_2();
bool is_ignored_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_2,
          is_ignored_nhwc_relaxed_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_relaxed_2) {
  const Model model = createTestModel_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_relaxed_dynamic_output_shape_2();
bool is_ignored_nhwc_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_dynamic_output_shape_2,
          is_ignored_nhwc_relaxed_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_relaxed_all_inputs_as_internal_2();
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_inputs_as_internal_2,
          is_ignored_nhwc_relaxed_all_inputs_as_internal_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_float16_2();
bool is_ignored_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_float16_2) {
  Execute(device,
          createTestModel_nhwc_float16_2,
          is_ignored_nhwc_float16_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_float16_2) {
  const Model model = createTestModel_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_float16_dynamic_output_shape_2();
bool is_ignored_nhwc_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_float16_dynamic_output_shape_2,
          is_ignored_nhwc_float16_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_float16_all_inputs_as_internal_2();
bool is_ignored_nhwc_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_float16_all_inputs_as_internal_2,
          is_ignored_nhwc_float16_all_inputs_as_internal_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_quant8_2();
bool is_ignored_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_quant8_2) {
  Execute(device,
          createTestModel_nhwc_quant8_2,
          is_ignored_nhwc_quant8_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_quant8_2) {
  const Model model = createTestModel_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_quant8_dynamic_output_shape_2();
bool is_ignored_nhwc_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_quant8_dynamic_output_shape_2,
          is_ignored_nhwc_quant8_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_quant8_all_inputs_as_internal_2();
bool is_ignored_nhwc_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nhwc_quant8_all_inputs_as_internal_2,
          is_ignored_nhwc_quant8_all_inputs_as_internal_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nhwc_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_2();
bool is_ignored_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_2) {
  Execute(device,
          createTestModel_nchw_2,
          is_ignored_nchw_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_2) {
  const Model model = createTestModel_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_dynamic_output_shape_2();
bool is_ignored_nchw_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_dynamic_output_shape_2,
          is_ignored_nchw_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_all_inputs_as_internal_2();
bool is_ignored_nchw_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_all_inputs_as_internal_2,
          is_ignored_nchw_all_inputs_as_internal_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_relaxed_2();
bool is_ignored_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_relaxed_2) {
  Execute(device,
          createTestModel_nchw_relaxed_2,
          is_ignored_nchw_relaxed_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_relaxed_2) {
  const Model model = createTestModel_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_relaxed_dynamic_output_shape_2();
bool is_ignored_nchw_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relaxed_dynamic_output_shape_2,
          is_ignored_nchw_relaxed_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_relaxed_all_inputs_as_internal_2();
bool is_ignored_nchw_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_relaxed_all_inputs_as_internal_2,
          is_ignored_nchw_relaxed_all_inputs_as_internal_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_float16_2();
bool is_ignored_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_float16_2) {
  Execute(device,
          createTestModel_nchw_float16_2,
          is_ignored_nchw_float16_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_float16_2) {
  const Model model = createTestModel_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_float16_dynamic_output_shape_2();
bool is_ignored_nchw_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_float16_dynamic_output_shape_2,
          is_ignored_nchw_float16_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_float16_all_inputs_as_internal_2();
bool is_ignored_nchw_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_float16_all_inputs_as_internal_2,
          is_ignored_nchw_float16_all_inputs_as_internal_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_quant8_2();
bool is_ignored_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_quant8_2) {
  Execute(device,
          createTestModel_nchw_quant8_2,
          is_ignored_nchw_quant8_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_quant8_2) {
  const Model model = createTestModel_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_quant8_dynamic_output_shape_2();
bool is_ignored_nchw_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_quant8_dynamic_output_shape_2,
          is_ignored_nchw_quant8_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_quant8_all_inputs_as_internal_2();
bool is_ignored_nchw_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, batch_to_space_v1_2_nchw_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_nchw_quant8_all_inputs_as_internal_2,
          is_ignored_nchw_quant8_all_inputs_as_internal_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_nchw_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

namespace generated_tests::batch_to_space_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::batch_to_space_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2 {

Model createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, batch_to_space_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, batch_to_space_v1_2_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::batch_to_space_v1_2::get_examples_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::batch_to_space_v1_2

