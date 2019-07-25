// Generated from resize_nearest_neighbor.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc();
bool is_ignored_shape_nhwc(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc) {
  Execute(device,
          createTestModel_shape_nhwc,
          is_ignored_shape_nhwc,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc) {
  const Model model = createTestModel_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_dynamic_output_shape();
bool is_ignored_shape_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape,
          is_ignored_shape_nhwc_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal();
bool is_ignored_shape_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal,
          is_ignored_shape_nhwc_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed();
bool is_ignored_shape_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed,
          is_ignored_shape_nhwc_relaxed,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed) {
  const Model model = createTestModel_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8();
bool is_ignored_shape_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8) {
  Execute(device,
          createTestModel_shape_nhwc_quant8,
          is_ignored_shape_nhwc_quant8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8) {
  const Model model = createTestModel_shape_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16();
bool is_ignored_shape_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16) {
  Execute(device,
          createTestModel_shape_nhwc_float16,
          is_ignored_shape_nhwc_float16,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16) {
  const Model model = createTestModel_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape,
          is_ignored_shape_nhwc_float16_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw();
bool is_ignored_shape_nchw(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw) {
  Execute(device,
          createTestModel_shape_nchw,
          is_ignored_shape_nchw,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw) {
  const Model model = createTestModel_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_dynamic_output_shape();
bool is_ignored_shape_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape,
          is_ignored_shape_nchw_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal();
bool is_ignored_shape_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal,
          is_ignored_shape_nchw_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed();
bool is_ignored_shape_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_shape_nchw_relaxed,
          is_ignored_shape_nchw_relaxed,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed) {
  const Model model = createTestModel_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8();
bool is_ignored_shape_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8) {
  Execute(device,
          createTestModel_shape_nchw_quant8,
          is_ignored_shape_nchw_quant8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8) {
  const Model model = createTestModel_shape_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape,
          is_ignored_shape_nchw_quant8_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16();
bool is_ignored_shape_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16) {
  Execute(device,
          createTestModel_shape_nchw_float16,
          is_ignored_shape_nchw_float16,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16) {
  const Model model = createTestModel_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_dynamic_output_shape();
bool is_ignored_shape_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape,
          is_ignored_shape_nchw_float16_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal,
          is_ignored_shape_nchw_float16_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc();
bool is_ignored_scale_nhwc(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc) {
  Execute(device,
          createTestModel_scale_nhwc,
          is_ignored_scale_nhwc,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc) {
  const Model model = createTestModel_scale_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_dynamic_output_shape();
bool is_ignored_scale_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape,
          is_ignored_scale_nhwc_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal();
bool is_ignored_scale_nhwc_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal,
          is_ignored_scale_nhwc_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed();
bool is_ignored_scale_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed,
          is_ignored_scale_nhwc_relaxed,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed) {
  const Model model = createTestModel_scale_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8();
bool is_ignored_scale_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8) {
  Execute(device,
          createTestModel_scale_nhwc_quant8,
          is_ignored_scale_nhwc_quant8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8) {
  const Model model = createTestModel_scale_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16();
bool is_ignored_scale_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16) {
  Execute(device,
          createTestModel_scale_nhwc_float16,
          is_ignored_scale_nhwc_float16,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16) {
  const Model model = createTestModel_scale_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape,
          is_ignored_scale_nhwc_float16_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw();
bool is_ignored_scale_nchw(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw) {
  Execute(device,
          createTestModel_scale_nchw,
          is_ignored_scale_nchw,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw) {
  const Model model = createTestModel_scale_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_dynamic_output_shape();
bool is_ignored_scale_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape,
          is_ignored_scale_nchw_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal();
bool is_ignored_scale_nchw_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal,
          is_ignored_scale_nchw_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed();
bool is_ignored_scale_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed) {
  Execute(device,
          createTestModel_scale_nchw_relaxed,
          is_ignored_scale_nchw_relaxed,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed) {
  const Model model = createTestModel_scale_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8();
bool is_ignored_scale_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8) {
  Execute(device,
          createTestModel_scale_nchw_quant8,
          is_ignored_scale_nchw_quant8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8) {
  const Model model = createTestModel_scale_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape,
          is_ignored_scale_nchw_quant8_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16();
bool is_ignored_scale_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16) {
  Execute(device,
          createTestModel_scale_nchw_float16,
          is_ignored_scale_nchw_float16,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16) {
  const Model model = createTestModel_scale_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_dynamic_output_shape();
bool is_ignored_scale_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape,
          is_ignored_scale_nchw_float16_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal,
          is_ignored_scale_nchw_float16_all_inputs_as_internal,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_2();
bool is_ignored_shape_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_2) {
  Execute(device,
          createTestModel_shape_nhwc_2,
          is_ignored_shape_nhwc_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_2) {
  const Model model = createTestModel_shape_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape_2,
          is_ignored_shape_nhwc_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_2();
bool is_ignored_shape_nhwc_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_2,
          is_ignored_shape_nhwc_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_2();
bool is_ignored_shape_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_2,
          is_ignored_shape_nhwc_relaxed_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_2) {
  const Model model = createTestModel_shape_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape_2,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_2();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_2,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_2();
bool is_ignored_shape_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_2) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_2,
          is_ignored_shape_nhwc_quant8_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_2) {
  const Model model = createTestModel_shape_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape_2,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_2();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_2,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_2();
bool is_ignored_shape_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_2) {
  Execute(device,
          createTestModel_shape_nhwc_float16_2,
          is_ignored_shape_nhwc_float16_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_2) {
  const Model model = createTestModel_shape_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape_2,
          is_ignored_shape_nhwc_float16_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_2();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_2,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_2();
bool is_ignored_shape_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_2) {
  Execute(device,
          createTestModel_shape_nchw_2,
          is_ignored_shape_nchw_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_2) {
  const Model model = createTestModel_shape_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_dynamic_output_shape_2();
bool is_ignored_shape_nchw_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape_2,
          is_ignored_shape_nchw_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_2();
bool is_ignored_shape_nchw_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_2,
          is_ignored_shape_nchw_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_2();
bool is_ignored_shape_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_2) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_2,
          is_ignored_shape_nchw_relaxed_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_2) {
  const Model model = createTestModel_shape_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape_2();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape_2,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_2();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_2,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_2();
bool is_ignored_shape_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_2) {
  Execute(device,
          createTestModel_shape_nchw_quant8_2,
          is_ignored_shape_nchw_quant8_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_2) {
  const Model model = createTestModel_shape_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape_2();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape_2,
          is_ignored_shape_nchw_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_2();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_2,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_2();
bool is_ignored_shape_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_2) {
  Execute(device,
          createTestModel_shape_nchw_float16_2,
          is_ignored_shape_nchw_float16_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_2) {
  const Model model = createTestModel_shape_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_dynamic_output_shape_2();
bool is_ignored_shape_nchw_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape_2,
          is_ignored_shape_nchw_float16_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_2();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_2,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_2();
bool is_ignored_scale_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_2) {
  Execute(device,
          createTestModel_scale_nhwc_2,
          is_ignored_scale_nhwc_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_2) {
  const Model model = createTestModel_scale_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape_2,
          is_ignored_scale_nhwc_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_2();
bool is_ignored_scale_nhwc_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_2,
          is_ignored_scale_nhwc_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_2();
bool is_ignored_scale_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_2,
          is_ignored_scale_nhwc_relaxed_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_2) {
  const Model model = createTestModel_scale_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape_2,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_2();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_2,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_2();
bool is_ignored_scale_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_2) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_2,
          is_ignored_scale_nhwc_quant8_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_2) {
  const Model model = createTestModel_scale_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape_2,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_2();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_2,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_2();
bool is_ignored_scale_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_2) {
  Execute(device,
          createTestModel_scale_nhwc_float16_2,
          is_ignored_scale_nhwc_float16_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_2) {
  const Model model = createTestModel_scale_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape_2,
          is_ignored_scale_nhwc_float16_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_2();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_2,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_2();
bool is_ignored_scale_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_2) {
  Execute(device,
          createTestModel_scale_nchw_2,
          is_ignored_scale_nchw_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_2) {
  const Model model = createTestModel_scale_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_dynamic_output_shape_2();
bool is_ignored_scale_nchw_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape_2,
          is_ignored_scale_nchw_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_2();
bool is_ignored_scale_nchw_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_2,
          is_ignored_scale_nchw_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_2();
bool is_ignored_scale_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_2) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_2,
          is_ignored_scale_nchw_relaxed_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_2) {
  const Model model = createTestModel_scale_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape_2();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape_2,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_2();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_2,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_2();
bool is_ignored_scale_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_2) {
  Execute(device,
          createTestModel_scale_nchw_quant8_2,
          is_ignored_scale_nchw_quant8_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_2) {
  const Model model = createTestModel_scale_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape_2();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape_2,
          is_ignored_scale_nchw_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_2();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_2,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_2();
bool is_ignored_scale_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_2) {
  Execute(device,
          createTestModel_scale_nchw_float16_2,
          is_ignored_scale_nchw_float16_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_2) {
  const Model model = createTestModel_scale_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_dynamic_output_shape_2();
bool is_ignored_scale_nchw_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape_2,
          is_ignored_scale_nchw_float16_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_2();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_2,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_3();
bool is_ignored_shape_nhwc_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_3) {
  Execute(device,
          createTestModel_shape_nhwc_3,
          is_ignored_shape_nhwc_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_3) {
  const Model model = createTestModel_shape_nhwc_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_dynamic_output_shape_3();
bool is_ignored_shape_nhwc_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape_3,
          is_ignored_shape_nhwc_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_3();
bool is_ignored_shape_nhwc_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_3,
          is_ignored_shape_nhwc_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_3) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_3();
bool is_ignored_shape_nhwc_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_3) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_3,
          is_ignored_shape_nhwc_relaxed_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_3) {
  const Model model = createTestModel_shape_nhwc_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape_3();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape_3,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_3();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_3,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_3) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_3();
bool is_ignored_shape_nhwc_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_3) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_3,
          is_ignored_shape_nhwc_quant8_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_3) {
  const Model model = createTestModel_shape_nhwc_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape_3();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape_3,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_3();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_3,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_3) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_3();
bool is_ignored_shape_nhwc_float16_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_3) {
  Execute(device,
          createTestModel_shape_nhwc_float16_3,
          is_ignored_shape_nhwc_float16_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_3) {
  const Model model = createTestModel_shape_nhwc_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape_3();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape_3,
          is_ignored_shape_nhwc_float16_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_3();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_3,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_3) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_3();
bool is_ignored_shape_nchw_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_3) {
  Execute(device,
          createTestModel_shape_nchw_3,
          is_ignored_shape_nchw_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_3) {
  const Model model = createTestModel_shape_nchw_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_dynamic_output_shape_3();
bool is_ignored_shape_nchw_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape_3,
          is_ignored_shape_nchw_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_3();
bool is_ignored_shape_nchw_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_3,
          is_ignored_shape_nchw_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_3) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_3();
bool is_ignored_shape_nchw_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_3) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_3,
          is_ignored_shape_nchw_relaxed_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_3) {
  const Model model = createTestModel_shape_nchw_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape_3();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape_3,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_3();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_3,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_3) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_3();
bool is_ignored_shape_nchw_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_3) {
  Execute(device,
          createTestModel_shape_nchw_quant8_3,
          is_ignored_shape_nchw_quant8_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_3) {
  const Model model = createTestModel_shape_nchw_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape_3();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape_3,
          is_ignored_shape_nchw_quant8_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_3();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_3,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_3) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_3();
bool is_ignored_shape_nchw_float16_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_3) {
  Execute(device,
          createTestModel_shape_nchw_float16_3,
          is_ignored_shape_nchw_float16_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_3) {
  const Model model = createTestModel_shape_nchw_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_dynamic_output_shape_3();
bool is_ignored_shape_nchw_float16_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape_3,
          is_ignored_shape_nchw_float16_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_3();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_3,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_3) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_3();
bool is_ignored_scale_nhwc_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_3) {
  Execute(device,
          createTestModel_scale_nhwc_3,
          is_ignored_scale_nhwc_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_3) {
  const Model model = createTestModel_scale_nhwc_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_dynamic_output_shape_3();
bool is_ignored_scale_nhwc_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape_3,
          is_ignored_scale_nhwc_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_3();
bool is_ignored_scale_nhwc_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_3,
          is_ignored_scale_nhwc_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_3) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_3();
bool is_ignored_scale_nhwc_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_3) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_3,
          is_ignored_scale_nhwc_relaxed_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_3) {
  const Model model = createTestModel_scale_nhwc_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape_3();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape_3,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_3();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_3,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_3) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_3();
bool is_ignored_scale_nhwc_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_3) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_3,
          is_ignored_scale_nhwc_quant8_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_3) {
  const Model model = createTestModel_scale_nhwc_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape_3();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape_3,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_3();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_3,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_3) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_3();
bool is_ignored_scale_nhwc_float16_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_3) {
  Execute(device,
          createTestModel_scale_nhwc_float16_3,
          is_ignored_scale_nhwc_float16_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_3) {
  const Model model = createTestModel_scale_nhwc_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape_3();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape_3,
          is_ignored_scale_nhwc_float16_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_3();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_3,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_3) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_3();
bool is_ignored_scale_nchw_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_3) {
  Execute(device,
          createTestModel_scale_nchw_3,
          is_ignored_scale_nchw_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_3) {
  const Model model = createTestModel_scale_nchw_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_dynamic_output_shape_3();
bool is_ignored_scale_nchw_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape_3,
          is_ignored_scale_nchw_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_3();
bool is_ignored_scale_nchw_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_3,
          is_ignored_scale_nchw_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_3) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_3();
bool is_ignored_scale_nchw_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_3) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_3,
          is_ignored_scale_nchw_relaxed_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_3) {
  const Model model = createTestModel_scale_nchw_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape_3();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape_3,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_3();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_3,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_3) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_3();
bool is_ignored_scale_nchw_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_3) {
  Execute(device,
          createTestModel_scale_nchw_quant8_3,
          is_ignored_scale_nchw_quant8_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_3) {
  const Model model = createTestModel_scale_nchw_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape_3();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape_3,
          is_ignored_scale_nchw_quant8_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_3();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_3,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_3) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_3();
bool is_ignored_scale_nchw_float16_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_3) {
  Execute(device,
          createTestModel_scale_nchw_float16_3,
          is_ignored_scale_nchw_float16_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_3) {
  const Model model = createTestModel_scale_nchw_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_dynamic_output_shape_3();
bool is_ignored_scale_nchw_float16_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape_3,
          is_ignored_scale_nchw_float16_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_3();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_3,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_3) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_4();
bool is_ignored_shape_nhwc_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_4) {
  Execute(device,
          createTestModel_shape_nhwc_4,
          is_ignored_shape_nhwc_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_4) {
  const Model model = createTestModel_shape_nhwc_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_dynamic_output_shape_4();
bool is_ignored_shape_nhwc_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape_4,
          is_ignored_shape_nhwc_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_4();
bool is_ignored_shape_nhwc_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_4,
          is_ignored_shape_nhwc_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_4) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_4();
bool is_ignored_shape_nhwc_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_4) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_4,
          is_ignored_shape_nhwc_relaxed_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_4) {
  const Model model = createTestModel_shape_nhwc_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape_4();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape_4,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_4();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_4,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_4) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_4();
bool is_ignored_shape_nhwc_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_4) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_4,
          is_ignored_shape_nhwc_quant8_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_4) {
  const Model model = createTestModel_shape_nhwc_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape_4();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape_4,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_4();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_4,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_4) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_4();
bool is_ignored_shape_nhwc_float16_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_4) {
  Execute(device,
          createTestModel_shape_nhwc_float16_4,
          is_ignored_shape_nhwc_float16_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_4) {
  const Model model = createTestModel_shape_nhwc_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape_4();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape_4,
          is_ignored_shape_nhwc_float16_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_4();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_4,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_4) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_4();
bool is_ignored_shape_nchw_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_4) {
  Execute(device,
          createTestModel_shape_nchw_4,
          is_ignored_shape_nchw_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_4) {
  const Model model = createTestModel_shape_nchw_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_dynamic_output_shape_4();
bool is_ignored_shape_nchw_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape_4,
          is_ignored_shape_nchw_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_4();
bool is_ignored_shape_nchw_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_4,
          is_ignored_shape_nchw_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_4) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_4();
bool is_ignored_shape_nchw_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_4) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_4,
          is_ignored_shape_nchw_relaxed_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_4) {
  const Model model = createTestModel_shape_nchw_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape_4();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape_4,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_4();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_4,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_4) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_4();
bool is_ignored_shape_nchw_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_4) {
  Execute(device,
          createTestModel_shape_nchw_quant8_4,
          is_ignored_shape_nchw_quant8_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_4) {
  const Model model = createTestModel_shape_nchw_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape_4();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape_4,
          is_ignored_shape_nchw_quant8_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_4();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_4,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_4) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_4();
bool is_ignored_shape_nchw_float16_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_4) {
  Execute(device,
          createTestModel_shape_nchw_float16_4,
          is_ignored_shape_nchw_float16_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_4) {
  const Model model = createTestModel_shape_nchw_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_dynamic_output_shape_4();
bool is_ignored_shape_nchw_float16_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape_4,
          is_ignored_shape_nchw_float16_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_4();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_4,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_4) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_4();
bool is_ignored_scale_nhwc_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_4) {
  Execute(device,
          createTestModel_scale_nhwc_4,
          is_ignored_scale_nhwc_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_4) {
  const Model model = createTestModel_scale_nhwc_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_dynamic_output_shape_4();
bool is_ignored_scale_nhwc_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape_4,
          is_ignored_scale_nhwc_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_4();
bool is_ignored_scale_nhwc_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_4,
          is_ignored_scale_nhwc_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_4) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_4();
bool is_ignored_scale_nhwc_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_4) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_4,
          is_ignored_scale_nhwc_relaxed_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_4) {
  const Model model = createTestModel_scale_nhwc_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape_4();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape_4,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_4();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_4,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_4) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_4();
bool is_ignored_scale_nhwc_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_4) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_4,
          is_ignored_scale_nhwc_quant8_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_4) {
  const Model model = createTestModel_scale_nhwc_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape_4();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape_4,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_4();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_4,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_4) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_4();
bool is_ignored_scale_nhwc_float16_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_4) {
  Execute(device,
          createTestModel_scale_nhwc_float16_4,
          is_ignored_scale_nhwc_float16_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_4) {
  const Model model = createTestModel_scale_nhwc_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape_4();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape_4,
          is_ignored_scale_nhwc_float16_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_4();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_4,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_4) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_4();
bool is_ignored_scale_nchw_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_4) {
  Execute(device,
          createTestModel_scale_nchw_4,
          is_ignored_scale_nchw_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_4) {
  const Model model = createTestModel_scale_nchw_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_dynamic_output_shape_4();
bool is_ignored_scale_nchw_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape_4,
          is_ignored_scale_nchw_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_4();
bool is_ignored_scale_nchw_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_4,
          is_ignored_scale_nchw_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_4) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_4();
bool is_ignored_scale_nchw_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_4) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_4,
          is_ignored_scale_nchw_relaxed_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_4) {
  const Model model = createTestModel_scale_nchw_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape_4();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape_4,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_4();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_4,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_4) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_4();
bool is_ignored_scale_nchw_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_4) {
  Execute(device,
          createTestModel_scale_nchw_quant8_4,
          is_ignored_scale_nchw_quant8_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_4) {
  const Model model = createTestModel_scale_nchw_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape_4();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape_4,
          is_ignored_scale_nchw_quant8_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_4();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_4,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_4) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_4();
bool is_ignored_scale_nchw_float16_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_4) {
  Execute(device,
          createTestModel_scale_nchw_float16_4,
          is_ignored_scale_nchw_float16_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_4) {
  const Model model = createTestModel_scale_nchw_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_dynamic_output_shape_4();
bool is_ignored_scale_nchw_float16_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape_4,
          is_ignored_scale_nchw_float16_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_4();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_4,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_4) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_5();
bool is_ignored_shape_nhwc_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_5) {
  Execute(device,
          createTestModel_shape_nhwc_5,
          is_ignored_shape_nhwc_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_5) {
  const Model model = createTestModel_shape_nhwc_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_dynamic_output_shape_5();
bool is_ignored_shape_nhwc_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape_5,
          is_ignored_shape_nhwc_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_5();
bool is_ignored_shape_nhwc_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_5,
          is_ignored_shape_nhwc_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_5) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_5();
bool is_ignored_shape_nhwc_relaxed_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_5) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_5,
          is_ignored_shape_nhwc_relaxed_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_5) {
  const Model model = createTestModel_shape_nhwc_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape_5();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape_5,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_5();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_5,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_5) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_5();
bool is_ignored_shape_nhwc_quant8_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_5) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_5,
          is_ignored_shape_nhwc_quant8_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_5) {
  const Model model = createTestModel_shape_nhwc_quant8_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape_5();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape_5,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_5();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_5,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_5) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_5();
bool is_ignored_shape_nhwc_float16_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_5) {
  Execute(device,
          createTestModel_shape_nhwc_float16_5,
          is_ignored_shape_nhwc_float16_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_5) {
  const Model model = createTestModel_shape_nhwc_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape_5();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape_5,
          is_ignored_shape_nhwc_float16_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_5();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_5,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_5) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_5();
bool is_ignored_shape_nchw_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_5) {
  Execute(device,
          createTestModel_shape_nchw_5,
          is_ignored_shape_nchw_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_5) {
  const Model model = createTestModel_shape_nchw_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_dynamic_output_shape_5();
bool is_ignored_shape_nchw_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape_5,
          is_ignored_shape_nchw_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_5();
bool is_ignored_shape_nchw_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_5,
          is_ignored_shape_nchw_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_5) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_5();
bool is_ignored_shape_nchw_relaxed_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_5) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_5,
          is_ignored_shape_nchw_relaxed_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_5) {
  const Model model = createTestModel_shape_nchw_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape_5();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape_5,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_5();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_5,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_5) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_5();
bool is_ignored_shape_nchw_quant8_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_5) {
  Execute(device,
          createTestModel_shape_nchw_quant8_5,
          is_ignored_shape_nchw_quant8_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_5) {
  const Model model = createTestModel_shape_nchw_quant8_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape_5();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape_5,
          is_ignored_shape_nchw_quant8_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_5();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_5,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_5) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_5();
bool is_ignored_shape_nchw_float16_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_5) {
  Execute(device,
          createTestModel_shape_nchw_float16_5,
          is_ignored_shape_nchw_float16_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_5) {
  const Model model = createTestModel_shape_nchw_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_dynamic_output_shape_5();
bool is_ignored_shape_nchw_float16_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape_5,
          is_ignored_shape_nchw_float16_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_5();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_5,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_5) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_5();
bool is_ignored_scale_nhwc_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_5) {
  Execute(device,
          createTestModel_scale_nhwc_5,
          is_ignored_scale_nhwc_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_5) {
  const Model model = createTestModel_scale_nhwc_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_dynamic_output_shape_5();
bool is_ignored_scale_nhwc_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape_5,
          is_ignored_scale_nhwc_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_5();
bool is_ignored_scale_nhwc_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_5,
          is_ignored_scale_nhwc_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_5) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_5();
bool is_ignored_scale_nhwc_relaxed_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_5) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_5,
          is_ignored_scale_nhwc_relaxed_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_5) {
  const Model model = createTestModel_scale_nhwc_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape_5();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape_5,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_5();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_5,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_5) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_5();
bool is_ignored_scale_nhwc_quant8_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_5) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_5,
          is_ignored_scale_nhwc_quant8_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_5) {
  const Model model = createTestModel_scale_nhwc_quant8_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape_5();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape_5,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_5();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_5,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_5) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_5();
bool is_ignored_scale_nhwc_float16_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_5) {
  Execute(device,
          createTestModel_scale_nhwc_float16_5,
          is_ignored_scale_nhwc_float16_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_5) {
  const Model model = createTestModel_scale_nhwc_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape_5();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape_5,
          is_ignored_scale_nhwc_float16_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_5();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_5,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_5) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_5();
bool is_ignored_scale_nchw_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_5) {
  Execute(device,
          createTestModel_scale_nchw_5,
          is_ignored_scale_nchw_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_5) {
  const Model model = createTestModel_scale_nchw_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_dynamic_output_shape_5();
bool is_ignored_scale_nchw_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape_5,
          is_ignored_scale_nchw_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_5();
bool is_ignored_scale_nchw_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_5,
          is_ignored_scale_nchw_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_5) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_5();
bool is_ignored_scale_nchw_relaxed_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_5) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_5,
          is_ignored_scale_nchw_relaxed_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_5) {
  const Model model = createTestModel_scale_nchw_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape_5();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape_5,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_5();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_5,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_5) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_5();
bool is_ignored_scale_nchw_quant8_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_5) {
  Execute(device,
          createTestModel_scale_nchw_quant8_5,
          is_ignored_scale_nchw_quant8_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_5) {
  const Model model = createTestModel_scale_nchw_quant8_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape_5();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape_5,
          is_ignored_scale_nchw_quant8_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_5();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_5,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_5) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_5();
bool is_ignored_scale_nchw_float16_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_5) {
  Execute(device,
          createTestModel_scale_nchw_float16_5,
          is_ignored_scale_nchw_float16_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_5) {
  const Model model = createTestModel_scale_nchw_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_dynamic_output_shape_5();
bool is_ignored_scale_nchw_float16_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape_5,
          is_ignored_scale_nchw_float16_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_5();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_5) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_5,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_5());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_5) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_6();
bool is_ignored_shape_nhwc_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_6) {
  Execute(device,
          createTestModel_shape_nhwc_6,
          is_ignored_shape_nhwc_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_6) {
  const Model model = createTestModel_shape_nhwc_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_dynamic_output_shape_6();
bool is_ignored_shape_nhwc_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape_6,
          is_ignored_shape_nhwc_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_6();
bool is_ignored_shape_nhwc_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_6,
          is_ignored_shape_nhwc_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_6) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_6();
bool is_ignored_shape_nhwc_relaxed_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_6) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_6,
          is_ignored_shape_nhwc_relaxed_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_6) {
  const Model model = createTestModel_shape_nhwc_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape_6();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape_6,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_6();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_6,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_6) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_6();
bool is_ignored_shape_nhwc_quant8_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_6) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_6,
          is_ignored_shape_nhwc_quant8_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_6) {
  const Model model = createTestModel_shape_nhwc_quant8_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape_6();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape_6,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_6();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_6,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_6) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_6();
bool is_ignored_shape_nhwc_float16_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_6) {
  Execute(device,
          createTestModel_shape_nhwc_float16_6,
          is_ignored_shape_nhwc_float16_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_6) {
  const Model model = createTestModel_shape_nhwc_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape_6();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape_6,
          is_ignored_shape_nhwc_float16_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_6();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_6,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_6) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_6();
bool is_ignored_shape_nchw_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_6) {
  Execute(device,
          createTestModel_shape_nchw_6,
          is_ignored_shape_nchw_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_6) {
  const Model model = createTestModel_shape_nchw_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_dynamic_output_shape_6();
bool is_ignored_shape_nchw_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape_6,
          is_ignored_shape_nchw_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_6();
bool is_ignored_shape_nchw_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_6,
          is_ignored_shape_nchw_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_6) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_6();
bool is_ignored_shape_nchw_relaxed_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_6) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_6,
          is_ignored_shape_nchw_relaxed_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_6) {
  const Model model = createTestModel_shape_nchw_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape_6();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape_6,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_6();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_6,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_6) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_6();
bool is_ignored_shape_nchw_quant8_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_6) {
  Execute(device,
          createTestModel_shape_nchw_quant8_6,
          is_ignored_shape_nchw_quant8_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_6) {
  const Model model = createTestModel_shape_nchw_quant8_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape_6();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape_6,
          is_ignored_shape_nchw_quant8_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_6();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_6,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_6) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_6();
bool is_ignored_shape_nchw_float16_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_6) {
  Execute(device,
          createTestModel_shape_nchw_float16_6,
          is_ignored_shape_nchw_float16_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_6) {
  const Model model = createTestModel_shape_nchw_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_dynamic_output_shape_6();
bool is_ignored_shape_nchw_float16_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape_6,
          is_ignored_shape_nchw_float16_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_6();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_6,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_6) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_6();
bool is_ignored_scale_nhwc_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_6) {
  Execute(device,
          createTestModel_scale_nhwc_6,
          is_ignored_scale_nhwc_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_6) {
  const Model model = createTestModel_scale_nhwc_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_dynamic_output_shape_6();
bool is_ignored_scale_nhwc_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape_6,
          is_ignored_scale_nhwc_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_6();
bool is_ignored_scale_nhwc_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_6,
          is_ignored_scale_nhwc_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_6) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_6();
bool is_ignored_scale_nhwc_relaxed_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_6) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_6,
          is_ignored_scale_nhwc_relaxed_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_6) {
  const Model model = createTestModel_scale_nhwc_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape_6();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape_6,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_6();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_6,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_6) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_6();
bool is_ignored_scale_nhwc_quant8_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_6) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_6,
          is_ignored_scale_nhwc_quant8_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_6) {
  const Model model = createTestModel_scale_nhwc_quant8_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape_6();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape_6,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_6();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_6,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_6) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_6();
bool is_ignored_scale_nhwc_float16_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_6) {
  Execute(device,
          createTestModel_scale_nhwc_float16_6,
          is_ignored_scale_nhwc_float16_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_6) {
  const Model model = createTestModel_scale_nhwc_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape_6();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape_6,
          is_ignored_scale_nhwc_float16_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_6();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_6,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_6) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_6();
bool is_ignored_scale_nchw_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_6) {
  Execute(device,
          createTestModel_scale_nchw_6,
          is_ignored_scale_nchw_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_6) {
  const Model model = createTestModel_scale_nchw_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_dynamic_output_shape_6();
bool is_ignored_scale_nchw_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape_6,
          is_ignored_scale_nchw_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_6();
bool is_ignored_scale_nchw_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_6,
          is_ignored_scale_nchw_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_6) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_6();
bool is_ignored_scale_nchw_relaxed_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_6) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_6,
          is_ignored_scale_nchw_relaxed_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_6) {
  const Model model = createTestModel_scale_nchw_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape_6();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape_6,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_6();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_6,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_6) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_6();
bool is_ignored_scale_nchw_quant8_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_6) {
  Execute(device,
          createTestModel_scale_nchw_quant8_6,
          is_ignored_scale_nchw_quant8_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_6) {
  const Model model = createTestModel_scale_nchw_quant8_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape_6();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape_6,
          is_ignored_scale_nchw_quant8_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_6();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_6,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_6) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_6();
bool is_ignored_scale_nchw_float16_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_6) {
  Execute(device,
          createTestModel_scale_nchw_float16_6,
          is_ignored_scale_nchw_float16_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_6) {
  const Model model = createTestModel_scale_nchw_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_dynamic_output_shape_6();
bool is_ignored_scale_nchw_float16_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape_6,
          is_ignored_scale_nchw_float16_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_6();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_6) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_6,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_6());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_6) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_7();
bool is_ignored_shape_nhwc_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_7) {
  Execute(device,
          createTestModel_shape_nhwc_7,
          is_ignored_shape_nhwc_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_7) {
  const Model model = createTestModel_shape_nhwc_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_dynamic_output_shape_7();
bool is_ignored_shape_nhwc_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape_7,
          is_ignored_shape_nhwc_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_7();
bool is_ignored_shape_nhwc_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_7,
          is_ignored_shape_nhwc_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_7) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_7();
bool is_ignored_shape_nhwc_relaxed_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_7) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_7,
          is_ignored_shape_nhwc_relaxed_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_7) {
  const Model model = createTestModel_shape_nhwc_relaxed_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape_7();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape_7,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_7();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_7,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_7) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_7();
bool is_ignored_shape_nhwc_quant8_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_7) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_7,
          is_ignored_shape_nhwc_quant8_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_7) {
  const Model model = createTestModel_shape_nhwc_quant8_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape_7();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape_7,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_7();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_7,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_7) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_7();
bool is_ignored_shape_nhwc_float16_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_7) {
  Execute(device,
          createTestModel_shape_nhwc_float16_7,
          is_ignored_shape_nhwc_float16_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_7) {
  const Model model = createTestModel_shape_nhwc_float16_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape_7();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape_7,
          is_ignored_shape_nhwc_float16_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_7();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_7,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_7) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_7();
bool is_ignored_shape_nchw_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_7) {
  Execute(device,
          createTestModel_shape_nchw_7,
          is_ignored_shape_nchw_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_7) {
  const Model model = createTestModel_shape_nchw_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_dynamic_output_shape_7();
bool is_ignored_shape_nchw_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape_7,
          is_ignored_shape_nchw_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_7();
bool is_ignored_shape_nchw_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_7,
          is_ignored_shape_nchw_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_7) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_7();
bool is_ignored_shape_nchw_relaxed_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_7) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_7,
          is_ignored_shape_nchw_relaxed_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_7) {
  const Model model = createTestModel_shape_nchw_relaxed_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape_7();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape_7,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_7();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_7,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_7) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_7();
bool is_ignored_shape_nchw_quant8_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_7) {
  Execute(device,
          createTestModel_shape_nchw_quant8_7,
          is_ignored_shape_nchw_quant8_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_7) {
  const Model model = createTestModel_shape_nchw_quant8_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape_7();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape_7,
          is_ignored_shape_nchw_quant8_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_7();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_7,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_7) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_7();
bool is_ignored_shape_nchw_float16_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_7) {
  Execute(device,
          createTestModel_shape_nchw_float16_7,
          is_ignored_shape_nchw_float16_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_7) {
  const Model model = createTestModel_shape_nchw_float16_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_dynamic_output_shape_7();
bool is_ignored_shape_nchw_float16_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape_7,
          is_ignored_shape_nchw_float16_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_7();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_7,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_7) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_7();
bool is_ignored_scale_nhwc_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_7) {
  Execute(device,
          createTestModel_scale_nhwc_7,
          is_ignored_scale_nhwc_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_7) {
  const Model model = createTestModel_scale_nhwc_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_dynamic_output_shape_7();
bool is_ignored_scale_nhwc_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape_7,
          is_ignored_scale_nhwc_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_7();
bool is_ignored_scale_nhwc_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_7,
          is_ignored_scale_nhwc_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_7) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_7();
bool is_ignored_scale_nhwc_relaxed_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_7) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_7,
          is_ignored_scale_nhwc_relaxed_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_7) {
  const Model model = createTestModel_scale_nhwc_relaxed_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape_7();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape_7,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_7();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_7,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_7) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_7();
bool is_ignored_scale_nhwc_quant8_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_7) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_7,
          is_ignored_scale_nhwc_quant8_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_7) {
  const Model model = createTestModel_scale_nhwc_quant8_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape_7();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape_7,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_7();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_7,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_7) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_7();
bool is_ignored_scale_nhwc_float16_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_7) {
  Execute(device,
          createTestModel_scale_nhwc_float16_7,
          is_ignored_scale_nhwc_float16_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_7) {
  const Model model = createTestModel_scale_nhwc_float16_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape_7();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape_7,
          is_ignored_scale_nhwc_float16_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_7();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_7,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_7) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_7();
bool is_ignored_scale_nchw_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_7) {
  Execute(device,
          createTestModel_scale_nchw_7,
          is_ignored_scale_nchw_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_7) {
  const Model model = createTestModel_scale_nchw_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_dynamic_output_shape_7();
bool is_ignored_scale_nchw_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape_7,
          is_ignored_scale_nchw_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_7();
bool is_ignored_scale_nchw_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_7,
          is_ignored_scale_nchw_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_7) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_7();
bool is_ignored_scale_nchw_relaxed_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_7) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_7,
          is_ignored_scale_nchw_relaxed_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_7) {
  const Model model = createTestModel_scale_nchw_relaxed_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape_7();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape_7,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_7();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_7,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_7) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_7();
bool is_ignored_scale_nchw_quant8_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_7) {
  Execute(device,
          createTestModel_scale_nchw_quant8_7,
          is_ignored_scale_nchw_quant8_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_7) {
  const Model model = createTestModel_scale_nchw_quant8_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape_7();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape_7,
          is_ignored_scale_nchw_quant8_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_7();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_7,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_7) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_7();
bool is_ignored_scale_nchw_float16_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_7) {
  Execute(device,
          createTestModel_scale_nchw_float16_7,
          is_ignored_scale_nchw_float16_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_7) {
  const Model model = createTestModel_scale_nchw_float16_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_dynamic_output_shape_7();
bool is_ignored_scale_nchw_float16_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape_7,
          is_ignored_scale_nchw_float16_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_7();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_7) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_7,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_7());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_7) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_8();
bool is_ignored_shape_nhwc_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_8) {
  Execute(device,
          createTestModel_shape_nhwc_8,
          is_ignored_shape_nhwc_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_8) {
  const Model model = createTestModel_shape_nhwc_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_dynamic_output_shape_8();
bool is_ignored_shape_nhwc_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nhwc_dynamic_output_shape_8,
          is_ignored_shape_nhwc_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nhwc_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_8();
bool is_ignored_shape_nhwc_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_8,
          is_ignored_shape_nhwc_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_8) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_8();
bool is_ignored_shape_nhwc_relaxed_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_8) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_8,
          is_ignored_shape_nhwc_relaxed_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_8) {
  const Model model = createTestModel_shape_nhwc_relaxed_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_dynamic_output_shape_8();
bool is_ignored_shape_nhwc_relaxed_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_dynamic_output_shape_8,
          is_ignored_shape_nhwc_relaxed_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nhwc_relaxed_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_8();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_8,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_8) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_8();
bool is_ignored_shape_nhwc_quant8_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_8) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_8,
          is_ignored_shape_nhwc_quant8_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_8) {
  const Model model = createTestModel_shape_nhwc_quant8_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_dynamic_output_shape_8();
bool is_ignored_shape_nhwc_quant8_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_dynamic_output_shape_8,
          is_ignored_shape_nhwc_quant8_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nhwc_quant8_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_8();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_8,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_8) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_8();
bool is_ignored_shape_nhwc_float16_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_8) {
  Execute(device,
          createTestModel_shape_nhwc_float16_8,
          is_ignored_shape_nhwc_float16_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_8) {
  const Model model = createTestModel_shape_nhwc_float16_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_dynamic_output_shape_8();
bool is_ignored_shape_nhwc_float16_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nhwc_float16_dynamic_output_shape_8,
          is_ignored_shape_nhwc_float16_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nhwc_float16_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_8();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_8,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_8) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_8();
bool is_ignored_shape_nchw_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_8) {
  Execute(device,
          createTestModel_shape_nchw_8,
          is_ignored_shape_nchw_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_8) {
  const Model model = createTestModel_shape_nchw_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_dynamic_output_shape_8();
bool is_ignored_shape_nchw_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nchw_dynamic_output_shape_8,
          is_ignored_shape_nchw_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nchw_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_8();
bool is_ignored_shape_nchw_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_8,
          is_ignored_shape_nchw_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_8) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_8();
bool is_ignored_shape_nchw_relaxed_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_8) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_8,
          is_ignored_shape_nchw_relaxed_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_8) {
  const Model model = createTestModel_shape_nchw_relaxed_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_dynamic_output_shape_8();
bool is_ignored_shape_nchw_relaxed_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_dynamic_output_shape_8,
          is_ignored_shape_nchw_relaxed_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nchw_relaxed_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_8();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_8,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_8) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_8();
bool is_ignored_shape_nchw_quant8_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_8) {
  Execute(device,
          createTestModel_shape_nchw_quant8_8,
          is_ignored_shape_nchw_quant8_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_8) {
  const Model model = createTestModel_shape_nchw_quant8_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_dynamic_output_shape_8();
bool is_ignored_shape_nchw_quant8_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nchw_quant8_dynamic_output_shape_8,
          is_ignored_shape_nchw_quant8_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nchw_quant8_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_8();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_8,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_8) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_8();
bool is_ignored_shape_nchw_float16_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_8) {
  Execute(device,
          createTestModel_shape_nchw_float16_8,
          is_ignored_shape_nchw_float16_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_8) {
  const Model model = createTestModel_shape_nchw_float16_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_dynamic_output_shape_8();
bool is_ignored_shape_nchw_float16_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nchw_float16_dynamic_output_shape_8,
          is_ignored_shape_nchw_float16_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nchw_float16_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_8();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_8,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_8) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_shape_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_8();
bool is_ignored_scale_nhwc_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_8) {
  Execute(device,
          createTestModel_scale_nhwc_8,
          is_ignored_scale_nhwc_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_8) {
  const Model model = createTestModel_scale_nhwc_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_dynamic_output_shape_8();
bool is_ignored_scale_nhwc_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nhwc_dynamic_output_shape_8,
          is_ignored_scale_nhwc_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nhwc_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_8();
bool is_ignored_scale_nhwc_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_8,
          is_ignored_scale_nhwc_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_8) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_8();
bool is_ignored_scale_nhwc_relaxed_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_8) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_8,
          is_ignored_scale_nhwc_relaxed_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_8) {
  const Model model = createTestModel_scale_nhwc_relaxed_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_dynamic_output_shape_8();
bool is_ignored_scale_nhwc_relaxed_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_dynamic_output_shape_8,
          is_ignored_scale_nhwc_relaxed_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nhwc_relaxed_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_8();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_8,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_8) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_relaxed_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_8();
bool is_ignored_scale_nhwc_quant8_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_8) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_8,
          is_ignored_scale_nhwc_quant8_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_8) {
  const Model model = createTestModel_scale_nhwc_quant8_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_dynamic_output_shape_8();
bool is_ignored_scale_nhwc_quant8_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_dynamic_output_shape_8,
          is_ignored_scale_nhwc_quant8_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nhwc_quant8_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_8();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_8,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_8) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_quant8_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_8();
bool is_ignored_scale_nhwc_float16_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_8) {
  Execute(device,
          createTestModel_scale_nhwc_float16_8,
          is_ignored_scale_nhwc_float16_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_8) {
  const Model model = createTestModel_scale_nhwc_float16_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_dynamic_output_shape_8();
bool is_ignored_scale_nhwc_float16_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nhwc_float16_dynamic_output_shape_8,
          is_ignored_scale_nhwc_float16_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nhwc_float16_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_8();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_8,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_8) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nhwc_float16_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_8();
bool is_ignored_scale_nchw_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_8) {
  Execute(device,
          createTestModel_scale_nchw_8,
          is_ignored_scale_nchw_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_8) {
  const Model model = createTestModel_scale_nchw_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_dynamic_output_shape_8();
bool is_ignored_scale_nchw_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nchw_dynamic_output_shape_8,
          is_ignored_scale_nchw_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nchw_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_8();
bool is_ignored_scale_nchw_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_8,
          is_ignored_scale_nchw_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_8) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_8();
bool is_ignored_scale_nchw_relaxed_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_8) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_8,
          is_ignored_scale_nchw_relaxed_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_8) {
  const Model model = createTestModel_scale_nchw_relaxed_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_dynamic_output_shape_8();
bool is_ignored_scale_nchw_relaxed_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_dynamic_output_shape_8,
          is_ignored_scale_nchw_relaxed_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nchw_relaxed_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_8();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_8,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_8) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_relaxed_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_8();
bool is_ignored_scale_nchw_quant8_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_8) {
  Execute(device,
          createTestModel_scale_nchw_quant8_8,
          is_ignored_scale_nchw_quant8_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_8) {
  const Model model = createTestModel_scale_nchw_quant8_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_dynamic_output_shape_8();
bool is_ignored_scale_nchw_quant8_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nchw_quant8_dynamic_output_shape_8,
          is_ignored_scale_nchw_quant8_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nchw_quant8_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_8();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_8,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_8) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_quant8_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_8();
bool is_ignored_scale_nchw_float16_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_8) {
  Execute(device,
          createTestModel_scale_nchw_float16_8,
          is_ignored_scale_nchw_float16_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_8) {
  const Model model = createTestModel_scale_nchw_float16_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_dynamic_output_shape_8();
bool is_ignored_scale_nchw_float16_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nchw_float16_dynamic_output_shape_8,
          is_ignored_scale_nchw_float16_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nchw_float16_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_8();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_8) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_8,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_8) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8) {
  const Model model = createTestModel_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_scale_nchw_float16_all_inputs_as_internal_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc();
bool is_ignored_zero_sized_nhwc(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nhwc) {
  Execute(device,
          createTestModel_zero_sized_nhwc,
          is_ignored_zero_sized_nhwc,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc) {
  const Model model = createTestModel_zero_sized_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_dynamic_output_shape();
bool is_ignored_zero_sized_nhwc_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nhwc_dynamic_output_shape,
          is_ignored_zero_sized_nhwc_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nhwc_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_relaxed();
bool is_ignored_zero_sized_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed) {
  Execute(device,
          createTestModel_zero_sized_nhwc_relaxed,
          is_ignored_zero_sized_nhwc_relaxed,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_relaxed());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed) {
  const Model model = createTestModel_zero_sized_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape();
bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape,
          is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_quant8();
bool is_ignored_zero_sized_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nhwc_quant8) {
  Execute(device,
          createTestModel_zero_sized_nhwc_quant8,
          is_ignored_zero_sized_nhwc_quant8,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_quant8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_quant8) {
  const Model model = createTestModel_zero_sized_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape();
bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape,
          is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_quant8_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_float16();
bool is_ignored_zero_sized_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nhwc_float16) {
  Execute(device,
          createTestModel_zero_sized_nhwc_float16,
          is_ignored_zero_sized_nhwc_float16,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_float16());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_float16) {
  const Model model = createTestModel_zero_sized_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_float16_dynamic_output_shape();
bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nhwc_float16_dynamic_output_shape,
          is_ignored_zero_sized_nhwc_float16_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_float16_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nhwc_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw();
bool is_ignored_zero_sized_nchw(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nchw) {
  Execute(device,
          createTestModel_zero_sized_nchw,
          is_ignored_zero_sized_nchw,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw) {
  const Model model = createTestModel_zero_sized_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_dynamic_output_shape();
bool is_ignored_zero_sized_nchw_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nchw_dynamic_output_shape,
          is_ignored_zero_sized_nchw_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nchw_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_relaxed();
bool is_ignored_zero_sized_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nchw_relaxed) {
  Execute(device,
          createTestModel_zero_sized_nchw_relaxed,
          is_ignored_zero_sized_nchw_relaxed,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_relaxed());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_relaxed) {
  const Model model = createTestModel_zero_sized_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape();
bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape,
          is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_quant8();
bool is_ignored_zero_sized_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nchw_quant8) {
  Execute(device,
          createTestModel_zero_sized_nchw_quant8,
          is_ignored_zero_sized_nchw_quant8,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_quant8());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_quant8) {
  const Model model = createTestModel_zero_sized_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_quant8_dynamic_output_shape();
bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nchw_quant8_dynamic_output_shape,
          is_ignored_zero_sized_nchw_quant8_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_quant8_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nchw_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_float16();
bool is_ignored_zero_sized_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nchw_float16) {
  Execute(device,
          createTestModel_zero_sized_nchw_float16,
          is_ignored_zero_sized_nchw_float16,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_float16());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_float16) {
  const Model model = createTestModel_zero_sized_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16_dynamic_output_shape();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_float16_dynamic_output_shape();
bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_nchw_float16_dynamic_output_shape,
          is_ignored_zero_sized_nchw_float16_dynamic_output_shape,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_float16_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_nchw_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_2();
bool is_ignored_zero_sized_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nhwc_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_2,
          is_ignored_zero_sized_nhwc_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_2) {
  const Model model = createTestModel_zero_sized_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_dynamic_output_shape_2();
bool is_ignored_zero_sized_nhwc_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_dynamic_output_shape_2,
          is_ignored_zero_sized_nhwc_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nhwc_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_relaxed_2();
bool is_ignored_zero_sized_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_relaxed_2,
          is_ignored_zero_sized_nhwc_relaxed_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_relaxed_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed_2) {
  const Model model = createTestModel_zero_sized_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2();
bool is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2,
          is_ignored_zero_sized_nhwc_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nhwc_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_quant8_2();
bool is_ignored_zero_sized_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nhwc_quant8_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_quant8_2,
          is_ignored_zero_sized_nhwc_quant8_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_quant8_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_quant8_2) {
  const Model model = createTestModel_zero_sized_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape_2();
bool is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape_2,
          is_ignored_zero_sized_nhwc_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nhwc_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_float16_2();
bool is_ignored_zero_sized_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nhwc_float16_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_float16_2,
          is_ignored_zero_sized_nhwc_float16_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_float16_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_float16_2) {
  const Model model = createTestModel_zero_sized_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nhwc_float16_dynamic_output_shape_2();
bool is_ignored_zero_sized_nhwc_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nhwc_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nhwc_float16_dynamic_output_shape_2,
          is_ignored_zero_sized_nhwc_float16_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nhwc_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nhwc_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nhwc_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_2();
bool is_ignored_zero_sized_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nchw_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_2,
          is_ignored_zero_sized_nchw_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_2) {
  const Model model = createTestModel_zero_sized_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_dynamic_output_shape_2();
bool is_ignored_zero_sized_nchw_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_dynamic_output_shape_2,
          is_ignored_zero_sized_nchw_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nchw_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_relaxed_2();
bool is_ignored_zero_sized_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nchw_relaxed_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_relaxed_2,
          is_ignored_zero_sized_nchw_relaxed_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_relaxed_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_relaxed_2) {
  const Model model = createTestModel_zero_sized_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape_2();
bool is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape_2,
          is_ignored_zero_sized_nchw_relaxed_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nchw_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_quant8_2();
bool is_ignored_zero_sized_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nchw_quant8_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_quant8_2,
          is_ignored_zero_sized_nchw_quant8_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_quant8_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_quant8_2) {
  const Model model = createTestModel_zero_sized_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_quant8_dynamic_output_shape_2();
bool is_ignored_zero_sized_nchw_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_quant8_dynamic_output_shape_2,
          is_ignored_zero_sized_nchw_quant8_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nchw_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_float16_2();
bool is_ignored_zero_sized_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, resize_nearest_neighbor_zero_sized_nchw_float16_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_float16_2,
          is_ignored_zero_sized_nchw_float16_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_float16_2());
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_float16_2) {
  const Model model = createTestModel_zero_sized_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

namespace generated_tests::resize_nearest_neighbor {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16_dynamic_output_shape_2();

} // namespace generated_tests::resize_nearest_neighbor

namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor {

Model createTestModel_zero_sized_nchw_float16_dynamic_output_shape_2();
bool is_ignored_zero_sized_nchw_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, resize_nearest_neighbor_zero_sized_nchw_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_zero_sized_nchw_float16_dynamic_output_shape_2,
          is_ignored_zero_sized_nchw_float16_dynamic_output_shape_2,
          ::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, resize_nearest_neighbor_zero_sized_nchw_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_zero_sized_nchw_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::resize_nearest_neighbor::get_examples_zero_sized_nchw_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::resize_nearest_neighbor

