// Generated from instance_normalization.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nhwc();
bool is_ignored_nhwc(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nhwc) {
  Execute(device,
          createTestModel_nhwc,
          is_ignored_nhwc,
          ::generated_tests::instance_normalization::get_examples_nhwc());
}

TEST_F(ValidationTest, instance_normalization_nhwc) {
  const Model model = createTestModel_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nhwc_relaxed();
bool is_ignored_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nhwc_relaxed) {
  Execute(device,
          createTestModel_nhwc_relaxed,
          is_ignored_nhwc_relaxed,
          ::generated_tests::instance_normalization::get_examples_nhwc_relaxed());
}

TEST_F(ValidationTest, instance_normalization_nhwc_relaxed) {
  const Model model = createTestModel_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nhwc_float16();
bool is_ignored_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nhwc_float16) {
  Execute(device,
          createTestModel_nhwc_float16,
          is_ignored_nhwc_float16,
          ::generated_tests::instance_normalization::get_examples_nhwc_float16());
}

TEST_F(ValidationTest, instance_normalization_nhwc_float16) {
  const Model model = createTestModel_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nchw();
bool is_ignored_nchw(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nchw) {
  Execute(device,
          createTestModel_nchw,
          is_ignored_nchw,
          ::generated_tests::instance_normalization::get_examples_nchw());
}

TEST_F(ValidationTest, instance_normalization_nchw) {
  const Model model = createTestModel_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nchw_relaxed();
bool is_ignored_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nchw_relaxed) {
  Execute(device,
          createTestModel_nchw_relaxed,
          is_ignored_nchw_relaxed,
          ::generated_tests::instance_normalization::get_examples_nchw_relaxed());
}

TEST_F(ValidationTest, instance_normalization_nchw_relaxed) {
  const Model model = createTestModel_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nchw_float16();
bool is_ignored_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nchw_float16) {
  Execute(device,
          createTestModel_nchw_float16,
          is_ignored_nchw_float16,
          ::generated_tests::instance_normalization::get_examples_nchw_float16());
}

TEST_F(ValidationTest, instance_normalization_nchw_float16) {
  const Model model = createTestModel_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nhwc();
bool is_ignored_dynamic_output_shape_nhwc(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nhwc) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc,
          is_ignored_dynamic_output_shape_nhwc,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nhwc) {
  const Model model = createTestModel_dynamic_output_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nhwc_relaxed();
bool is_ignored_dynamic_output_shape_nhwc_relaxed(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relaxed,
          is_ignored_dynamic_output_shape_nhwc_relaxed,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nhwc_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nhwc_float16();
bool is_ignored_dynamic_output_shape_nhwc_float16(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nhwc_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_float16,
          is_ignored_dynamic_output_shape_nhwc_float16,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nhwc_float16) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nchw();
bool is_ignored_dynamic_output_shape_nchw(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nchw) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw,
          is_ignored_dynamic_output_shape_nchw,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nchw) {
  const Model model = createTestModel_dynamic_output_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nchw_relaxed();
bool is_ignored_dynamic_output_shape_nchw_relaxed(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relaxed,
          is_ignored_dynamic_output_shape_nchw_relaxed,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nchw_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nchw_float16();
bool is_ignored_dynamic_output_shape_nchw_float16(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nchw_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_float16,
          is_ignored_dynamic_output_shape_nchw_float16,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nchw_float16) {
  const Model model = createTestModel_dynamic_output_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nhwc_2();
bool is_ignored_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nhwc_2) {
  Execute(device,
          createTestModel_nhwc_2,
          is_ignored_nhwc_2,
          ::generated_tests::instance_normalization::get_examples_nhwc_2());
}

TEST_F(ValidationTest, instance_normalization_nhwc_2) {
  const Model model = createTestModel_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nhwc_relaxed_2();
bool is_ignored_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_2,
          is_ignored_nhwc_relaxed_2,
          ::generated_tests::instance_normalization::get_examples_nhwc_relaxed_2());
}

TEST_F(ValidationTest, instance_normalization_nhwc_relaxed_2) {
  const Model model = createTestModel_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nhwc_float16_2();
bool is_ignored_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nhwc_float16_2) {
  Execute(device,
          createTestModel_nhwc_float16_2,
          is_ignored_nhwc_float16_2,
          ::generated_tests::instance_normalization::get_examples_nhwc_float16_2());
}

TEST_F(ValidationTest, instance_normalization_nhwc_float16_2) {
  const Model model = createTestModel_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nchw_2();
bool is_ignored_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nchw_2) {
  Execute(device,
          createTestModel_nchw_2,
          is_ignored_nchw_2,
          ::generated_tests::instance_normalization::get_examples_nchw_2());
}

TEST_F(ValidationTest, instance_normalization_nchw_2) {
  const Model model = createTestModel_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nchw_relaxed_2();
bool is_ignored_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nchw_relaxed_2) {
  Execute(device,
          createTestModel_nchw_relaxed_2,
          is_ignored_nchw_relaxed_2,
          ::generated_tests::instance_normalization::get_examples_nchw_relaxed_2());
}

TEST_F(ValidationTest, instance_normalization_nchw_relaxed_2) {
  const Model model = createTestModel_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_nchw_float16_2();
bool is_ignored_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, instance_normalization_nchw_float16_2) {
  Execute(device,
          createTestModel_nchw_float16_2,
          is_ignored_nchw_float16_2,
          ::generated_tests::instance_normalization::get_examples_nchw_float16_2());
}

TEST_F(ValidationTest, instance_normalization_nchw_float16_2) {
  const Model model = createTestModel_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nhwc_2();
bool is_ignored_dynamic_output_shape_nhwc_2(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nhwc_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_2,
          is_ignored_dynamic_output_shape_nhwc_2,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_2(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nhwc_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nhwc_relaxed_2();
bool is_ignored_dynamic_output_shape_nhwc_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relaxed_2,
          is_ignored_dynamic_output_shape_nhwc_relaxed_2,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nhwc_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nhwc_float16_2();
bool is_ignored_dynamic_output_shape_nhwc_float16_2(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nhwc_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_float16_2,
          is_ignored_dynamic_output_shape_nhwc_float16_2,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nhwc_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nchw_2();
bool is_ignored_dynamic_output_shape_nchw_2(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nchw_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_2,
          is_ignored_dynamic_output_shape_nchw_2,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_2(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nchw_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nchw_relaxed_2();
bool is_ignored_dynamic_output_shape_nchw_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nchw_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relaxed_2,
          is_ignored_dynamic_output_shape_nchw_relaxed_2,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nchw_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

namespace generated_tests::instance_normalization {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_2();

} // namespace generated_tests::instance_normalization

namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization {

Model createTestModel_dynamic_output_shape_nchw_float16_2();
bool is_ignored_dynamic_output_shape_nchw_float16_2(int);

TEST_F(DynamicOutputShapeTest, instance_normalization_dynamic_output_shape_nchw_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_float16_2,
          is_ignored_dynamic_output_shape_nchw_float16_2,
          ::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_float16_2(), true);
}

TEST_F(ValidationTest, instance_normalization_dynamic_output_shape_nchw_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::instance_normalization::get_examples_dynamic_output_shape_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::instance_normalization

