// Generated from fully_connected_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::fully_connected_v1_2::get_examples());
}

TEST_F(ValidationTest, fully_connected_v1_2) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::fully_connected_v1_2::get_examples_relaxed());
}

TEST_F(ValidationTest, fully_connected_v1_2_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::fully_connected_v1_2::get_examples_float16());
}

TEST_F(ValidationTest, fully_connected_v1_2_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_mult_gt_1();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_quant8_mult_gt_1();
bool is_ignored_quant8_mult_gt_1(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_quant8_mult_gt_1) {
  Execute(device,
          createTestModel_quant8_mult_gt_1,
          is_ignored_quant8_mult_gt_1,
          ::generated_tests::fully_connected_v1_2::get_examples_quant8_mult_gt_1());
}

TEST_F(ValidationTest, fully_connected_v1_2_quant8_mult_gt_1) {
  const Model model = createTestModel_quant8_mult_gt_1();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_quant8_mult_gt_1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::fully_connected_v1_2::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::fully_connected_v1_2::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::fully_connected_v1_2::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_mult_gt_1();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_dynamic_output_shape_quant8_mult_gt_1();
bool is_ignored_dynamic_output_shape_quant8_mult_gt_1(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_dynamic_output_shape_quant8_mult_gt_1) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_mult_gt_1,
          is_ignored_dynamic_output_shape_quant8_mult_gt_1,
          ::generated_tests::fully_connected_v1_2::get_examples_dynamic_output_shape_quant8_mult_gt_1(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_dynamic_output_shape_quant8_mult_gt_1) {
  const Model model = createTestModel_dynamic_output_shape_quant8_mult_gt_1();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_dynamic_output_shape_quant8_mult_gt_1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_nhwc();
bool is_ignored_zero_sized_nhwc(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_zero_sized_nhwc) {
  Execute(device,
          createTestModel_zero_sized_nhwc,
          is_ignored_zero_sized_nhwc,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nhwc());
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nhwc) {
  const Model model = createTestModel_zero_sized_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_relaxed();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_nhwc_relaxed();
bool is_ignored_zero_sized_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_zero_sized_nhwc_relaxed) {
  Execute(device,
          createTestModel_zero_sized_nhwc_relaxed,
          is_ignored_zero_sized_nhwc_relaxed,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nhwc_relaxed());
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nhwc_relaxed) {
  const Model model = createTestModel_zero_sized_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_quant8();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_nhwc_quant8();
bool is_ignored_zero_sized_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_zero_sized_nhwc_quant8) {
  Execute(device,
          createTestModel_zero_sized_nhwc_quant8,
          is_ignored_zero_sized_nhwc_quant8,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nhwc_quant8());
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nhwc_quant8) {
  const Model model = createTestModel_zero_sized_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nhwc_float16();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_nhwc_float16();
bool is_ignored_zero_sized_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_zero_sized_nhwc_float16) {
  Execute(device,
          createTestModel_zero_sized_nhwc_float16,
          is_ignored_zero_sized_nhwc_float16,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nhwc_float16());
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nhwc_float16) {
  const Model model = createTestModel_zero_sized_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_nchw();
bool is_ignored_zero_sized_nchw(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_zero_sized_nchw) {
  Execute(device,
          createTestModel_zero_sized_nchw,
          is_ignored_zero_sized_nchw,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nchw());
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nchw) {
  const Model model = createTestModel_zero_sized_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_relaxed();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_nchw_relaxed();
bool is_ignored_zero_sized_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_zero_sized_nchw_relaxed) {
  Execute(device,
          createTestModel_zero_sized_nchw_relaxed,
          is_ignored_zero_sized_nchw_relaxed,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nchw_relaxed());
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nchw_relaxed) {
  const Model model = createTestModel_zero_sized_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_quant8();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_nchw_quant8();
bool is_ignored_zero_sized_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_zero_sized_nchw_quant8) {
  Execute(device,
          createTestModel_zero_sized_nchw_quant8,
          is_ignored_zero_sized_nchw_quant8,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nchw_quant8());
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nchw_quant8) {
  const Model model = createTestModel_zero_sized_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_nchw_float16();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_nchw_float16();
bool is_ignored_zero_sized_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, fully_connected_v1_2_zero_sized_nchw_float16) {
  Execute(device,
          createTestModel_zero_sized_nchw_float16,
          is_ignored_zero_sized_nchw_float16,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nchw_float16());
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_nchw_float16) {
  const Model model = createTestModel_zero_sized_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_nhwc();
bool is_ignored_zero_sized_dynamic_output_shape_nhwc(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_nhwc,
          is_ignored_zero_sized_dynamic_output_shape_nhwc,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nhwc(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc_relaxed();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_nhwc_relaxed();
bool is_ignored_zero_sized_dynamic_output_shape_nhwc_relaxed(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_nhwc_relaxed,
          is_ignored_zero_sized_dynamic_output_shape_nhwc_relaxed,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc_relaxed) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc_quant8();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_nhwc_quant8();
bool is_ignored_zero_sized_dynamic_output_shape_nhwc_quant8(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc_quant8) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_nhwc_quant8,
          is_ignored_zero_sized_dynamic_output_shape_nhwc_quant8,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nhwc_quant8(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc_quant8) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nhwc_float16();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_nhwc_float16();
bool is_ignored_zero_sized_dynamic_output_shape_nhwc_float16(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc_float16) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_nhwc_float16,
          is_ignored_zero_sized_dynamic_output_shape_nhwc_float16,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nhwc_float16) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_nchw();
bool is_ignored_zero_sized_dynamic_output_shape_nchw(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_nchw,
          is_ignored_zero_sized_dynamic_output_shape_nchw,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nchw(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw_relaxed();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_nchw_relaxed();
bool is_ignored_zero_sized_dynamic_output_shape_nchw_relaxed(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_nchw_relaxed,
          is_ignored_zero_sized_dynamic_output_shape_nchw_relaxed,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw_relaxed) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw_quant8();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_nchw_quant8();
bool is_ignored_zero_sized_dynamic_output_shape_nchw_quant8(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw_quant8) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_nchw_quant8,
          is_ignored_zero_sized_dynamic_output_shape_nchw_quant8,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nchw_quant8(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw_quant8) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

namespace generated_tests::fully_connected_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_nchw_float16();

} // namespace generated_tests::fully_connected_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_nchw_float16();
bool is_ignored_zero_sized_dynamic_output_shape_nchw_float16(int);

TEST_F(DynamicOutputShapeTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw_float16) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_nchw_float16,
          is_ignored_zero_sized_dynamic_output_shape_nchw_float16,
          ::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, fully_connected_v1_2_zero_sized_dynamic_output_shape_nchw_float16) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::fully_connected_v1_2::get_examples_zero_sized_dynamic_output_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::fully_connected_v1_2

