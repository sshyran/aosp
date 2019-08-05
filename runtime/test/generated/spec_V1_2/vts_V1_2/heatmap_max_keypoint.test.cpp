// Generated from heatmap_max_keypoint.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nhwc();
bool is_ignored_nhwc(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nhwc) {
  Execute(device,
          createTestModel_nhwc,
          is_ignored_nhwc,
          ::generated_tests::heatmap_max_keypoint::get_examples_nhwc());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nhwc) {
  const Model model = createTestModel_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nhwc_relaxed();
bool is_ignored_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nhwc_relaxed) {
  Execute(device,
          createTestModel_nhwc_relaxed,
          is_ignored_nhwc_relaxed,
          ::generated_tests::heatmap_max_keypoint::get_examples_nhwc_relaxed());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nhwc_relaxed) {
  const Model model = createTestModel_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nhwc_float16();
bool is_ignored_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nhwc_float16) {
  Execute(device,
          createTestModel_nhwc_float16,
          is_ignored_nhwc_float16,
          ::generated_tests::heatmap_max_keypoint::get_examples_nhwc_float16());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nhwc_float16) {
  const Model model = createTestModel_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nchw();
bool is_ignored_nchw(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nchw) {
  Execute(device,
          createTestModel_nchw,
          is_ignored_nchw,
          ::generated_tests::heatmap_max_keypoint::get_examples_nchw());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nchw) {
  const Model model = createTestModel_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nchw_relaxed();
bool is_ignored_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nchw_relaxed) {
  Execute(device,
          createTestModel_nchw_relaxed,
          is_ignored_nchw_relaxed,
          ::generated_tests::heatmap_max_keypoint::get_examples_nchw_relaxed());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nchw_relaxed) {
  const Model model = createTestModel_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nchw_float16();
bool is_ignored_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nchw_float16) {
  Execute(device,
          createTestModel_nchw_float16,
          is_ignored_nchw_float16,
          ::generated_tests::heatmap_max_keypoint::get_examples_nchw_float16());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nchw_float16) {
  const Model model = createTestModel_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nhwc();
bool is_ignored_dynamic_output_shape_nhwc(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nhwc) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc,
          is_ignored_dynamic_output_shape_nhwc,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nhwc) {
  const Model model = createTestModel_dynamic_output_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nhwc_relaxed();
bool is_ignored_dynamic_output_shape_nhwc_relaxed(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relaxed,
          is_ignored_dynamic_output_shape_nhwc_relaxed,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nhwc_float16();
bool is_ignored_dynamic_output_shape_nhwc_float16(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_float16,
          is_ignored_dynamic_output_shape_nhwc_float16,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_float16) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nchw();
bool is_ignored_dynamic_output_shape_nchw(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nchw) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw,
          is_ignored_dynamic_output_shape_nchw,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nchw) {
  const Model model = createTestModel_dynamic_output_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nchw_relaxed();
bool is_ignored_dynamic_output_shape_nchw_relaxed(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relaxed,
          is_ignored_dynamic_output_shape_nchw_relaxed,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nchw_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nchw_float16();
bool is_ignored_dynamic_output_shape_nchw_float16(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nchw_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_float16,
          is_ignored_dynamic_output_shape_nchw_float16,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nchw_float16) {
  const Model model = createTestModel_dynamic_output_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nhwc_2();
bool is_ignored_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nhwc_2) {
  Execute(device,
          createTestModel_nhwc_2,
          is_ignored_nhwc_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_nhwc_2());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nhwc_2) {
  const Model model = createTestModel_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nhwc_relaxed_2();
bool is_ignored_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_2,
          is_ignored_nhwc_relaxed_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_nhwc_relaxed_2());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nhwc_relaxed_2) {
  const Model model = createTestModel_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nhwc_float16_2();
bool is_ignored_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nhwc_float16_2) {
  Execute(device,
          createTestModel_nhwc_float16_2,
          is_ignored_nhwc_float16_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_nhwc_float16_2());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nhwc_float16_2) {
  const Model model = createTestModel_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nhwc_quant8();
bool is_ignored_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nhwc_quant8) {
  Execute(device,
          createTestModel_nhwc_quant8,
          is_ignored_nhwc_quant8,
          ::generated_tests::heatmap_max_keypoint::get_examples_nhwc_quant8());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nhwc_quant8) {
  const Model model = createTestModel_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nchw_2();
bool is_ignored_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nchw_2) {
  Execute(device,
          createTestModel_nchw_2,
          is_ignored_nchw_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_nchw_2());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nchw_2) {
  const Model model = createTestModel_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nchw_relaxed_2();
bool is_ignored_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nchw_relaxed_2) {
  Execute(device,
          createTestModel_nchw_relaxed_2,
          is_ignored_nchw_relaxed_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_nchw_relaxed_2());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nchw_relaxed_2) {
  const Model model = createTestModel_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nchw_float16_2();
bool is_ignored_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nchw_float16_2) {
  Execute(device,
          createTestModel_nchw_float16_2,
          is_ignored_nchw_float16_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_nchw_float16_2());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nchw_float16_2) {
  const Model model = createTestModel_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nchw_quant8();
bool is_ignored_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nchw_quant8) {
  Execute(device,
          createTestModel_nchw_quant8,
          is_ignored_nchw_quant8,
          ::generated_tests::heatmap_max_keypoint::get_examples_nchw_quant8());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nchw_quant8) {
  const Model model = createTestModel_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nhwc_2();
bool is_ignored_dynamic_output_shape_nhwc_2(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_2,
          is_ignored_dynamic_output_shape_nhwc_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_2(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nhwc_relaxed_2();
bool is_ignored_dynamic_output_shape_nhwc_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relaxed_2,
          is_ignored_dynamic_output_shape_nhwc_relaxed_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nhwc_float16_2();
bool is_ignored_dynamic_output_shape_nhwc_float16_2(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_float16_2,
          is_ignored_dynamic_output_shape_nhwc_float16_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nhwc_quant8();
bool is_ignored_dynamic_output_shape_nhwc_quant8(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_quant8,
          is_ignored_dynamic_output_shape_nhwc_quant8,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_quant8(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nchw_2();
bool is_ignored_dynamic_output_shape_nchw_2(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nchw_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_2,
          is_ignored_dynamic_output_shape_nchw_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_2(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nchw_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nchw_relaxed_2();
bool is_ignored_dynamic_output_shape_nchw_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nchw_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relaxed_2,
          is_ignored_dynamic_output_shape_nchw_relaxed_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nchw_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nchw_float16_2();
bool is_ignored_dynamic_output_shape_nchw_float16_2(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nchw_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_float16_2,
          is_ignored_dynamic_output_shape_nchw_float16_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_float16_2(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nchw_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nchw_quant8();
bool is_ignored_dynamic_output_shape_nchw_quant8(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nchw_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_quant8,
          is_ignored_dynamic_output_shape_nchw_quant8,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_quant8(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nchw_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nhwc_quant8_2();
bool is_ignored_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nhwc_quant8_2) {
  Execute(device,
          createTestModel_nhwc_quant8_2,
          is_ignored_nhwc_quant8_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_nhwc_quant8_2());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nhwc_quant8_2) {
  const Model model = createTestModel_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_nchw_quant8_2();
bool is_ignored_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, heatmap_max_keypoint_nchw_quant8_2) {
  Execute(device,
          createTestModel_nchw_quant8_2,
          is_ignored_nchw_quant8_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_nchw_quant8_2());
}

TEST_F(ValidationTest, heatmap_max_keypoint_nchw_quant8_2) {
  const Model model = createTestModel_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nhwc_quant8_2();
bool is_ignored_dynamic_output_shape_nhwc_quant8_2(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_quant8_2,
          is_ignored_dynamic_output_shape_nhwc_quant8_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nhwc_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

namespace generated_tests::heatmap_max_keypoint {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8_2();

} // namespace generated_tests::heatmap_max_keypoint

namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint {

Model createTestModel_dynamic_output_shape_nchw_quant8_2();
bool is_ignored_dynamic_output_shape_nchw_quant8_2(int);

TEST_F(DynamicOutputShapeTest, heatmap_max_keypoint_dynamic_output_shape_nchw_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_quant8_2,
          is_ignored_dynamic_output_shape_nchw_quant8_2,
          ::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, heatmap_max_keypoint_dynamic_output_shape_nchw_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::heatmap_max_keypoint::get_examples_dynamic_output_shape_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::heatmap_max_keypoint

