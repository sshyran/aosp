// Generated from dequantize_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_1d_quant8_asymm) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm());
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_1d_quant8_asymm_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_relaxed());
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_1d_quant8_asymm_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_float16());
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_dynamic_output_shape();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_dynamic_output_shape_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_1d_quant8_asymm_dynamic_output_shape_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_1d_quant8_asymm_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_1d_quant8_asymm_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_1d_quant8_asymm_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_2d_quant8_asymm) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm());
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_2d_quant8_asymm_relaxed) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_relaxed());
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_relaxed) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_2d_quant8_asymm_float16) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_float16());
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_float16) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_dynamic_output_shape();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_dynamic_output_shape_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_2d_quant8_asymm_dynamic_output_shape_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_float16_2();
bool is_ignored_dynamic_output_shape_float16_2(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_2d_quant8_asymm_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_2,
          is_ignored_dynamic_output_shape_float16_2,
          ::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_2d_quant8_asymm_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_2d_quant8_asymm_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_3d_quant8_symm) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm());
}

TEST_F(ValidationTest, dequantize_v1_2_3d_quant8_symm) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_relaxed_3();
bool is_ignored_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_3d_quant8_symm_relaxed) {
  Execute(device,
          createTestModel_relaxed_3,
          is_ignored_relaxed_3,
          ::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_relaxed());
}

TEST_F(ValidationTest, dequantize_v1_2_3d_quant8_symm_relaxed) {
  const Model model = createTestModel_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_float16_3();
bool is_ignored_float16_3(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_3d_quant8_symm_float16) {
  Execute(device,
          createTestModel_float16_3,
          is_ignored_float16_3,
          ::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_float16());
}

TEST_F(ValidationTest, dequantize_v1_2_3d_quant8_symm_float16) {
  const Model model = createTestModel_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_dynamic_output_shape();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_quant8_symm_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_quant8_symm_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_dynamic_output_shape_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed_3();
bool is_ignored_dynamic_output_shape_relaxed_3(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_quant8_symm_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_3,
          is_ignored_dynamic_output_shape_relaxed_3,
          ::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_quant8_symm_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_quant8_symm_dynamic_output_shape_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_float16_3();
bool is_ignored_dynamic_output_shape_float16_3(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_quant8_symm_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_3,
          is_ignored_dynamic_output_shape_float16_3,
          ::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_quant8_symm_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_quant8_symm_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_4d_quant8_symm) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm());
}

TEST_F(ValidationTest, dequantize_v1_2_4d_quant8_symm) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_relaxed_4();
bool is_ignored_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_4d_quant8_symm_relaxed) {
  Execute(device,
          createTestModel_relaxed_4,
          is_ignored_relaxed_4,
          ::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_relaxed());
}

TEST_F(ValidationTest, dequantize_v1_2_4d_quant8_symm_relaxed) {
  const Model model = createTestModel_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_float16_4();
bool is_ignored_float16_4(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_4d_quant8_symm_float16) {
  Execute(device,
          createTestModel_float16_4,
          is_ignored_float16_4,
          ::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_float16());
}

TEST_F(ValidationTest, dequantize_v1_2_4d_quant8_symm_float16) {
  const Model model = createTestModel_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_dynamic_output_shape();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_4d_quant8_symm_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_4d_quant8_symm_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_dynamic_output_shape_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed_4();
bool is_ignored_dynamic_output_shape_relaxed_4(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_4d_quant8_symm_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_4,
          is_ignored_dynamic_output_shape_relaxed_4,
          ::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_4d_quant8_symm_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_4d_quant8_symm_dynamic_output_shape_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_float16_4();
bool is_ignored_dynamic_output_shape_float16_4(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_4d_quant8_symm_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_4,
          is_ignored_dynamic_output_shape_float16_4,
          ::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_4d_quant8_symm_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_4d_quant8_symm_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_5();
bool is_ignored_5(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_3d_per_channel_first_dim) {
  Execute(device,
          createTestModel_5,
          is_ignored_5,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim());
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_first_dim) {
  const Model model = createTestModel_5();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_relaxed_5();
bool is_ignored_relaxed_5(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_3d_per_channel_first_dim_relaxed) {
  Execute(device,
          createTestModel_relaxed_5,
          is_ignored_relaxed_5,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_relaxed());
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_first_dim_relaxed) {
  const Model model = createTestModel_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_float16_5();
bool is_ignored_float16_5(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_3d_per_channel_first_dim_float16) {
  Execute(device,
          createTestModel_float16_5,
          is_ignored_float16_5,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_float16());
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_first_dim_float16) {
  const Model model = createTestModel_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_dynamic_output_shape();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_5();
bool is_ignored_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_first_dim_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_5,
          is_ignored_dynamic_output_shape_5,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_first_dim_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_dynamic_output_shape_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed_5();
bool is_ignored_dynamic_output_shape_relaxed_5(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_first_dim_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_5,
          is_ignored_dynamic_output_shape_relaxed_5,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_first_dim_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_first_dim_dynamic_output_shape_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_float16_5();
bool is_ignored_dynamic_output_shape_float16_5(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_first_dim_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_5,
          is_ignored_dynamic_output_shape_float16_5,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_first_dim_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_first_dim_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_6();
bool is_ignored_6(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_3d_per_channel_second_dim) {
  Execute(device,
          createTestModel_6,
          is_ignored_6,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim());
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_second_dim) {
  const Model model = createTestModel_6();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_relaxed_6();
bool is_ignored_relaxed_6(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_3d_per_channel_second_dim_relaxed) {
  Execute(device,
          createTestModel_relaxed_6,
          is_ignored_relaxed_6,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_relaxed());
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_second_dim_relaxed) {
  const Model model = createTestModel_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_float16_6();
bool is_ignored_float16_6(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_3d_per_channel_second_dim_float16) {
  Execute(device,
          createTestModel_float16_6,
          is_ignored_float16_6,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_float16());
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_second_dim_float16) {
  const Model model = createTestModel_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_dynamic_output_shape();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_6();
bool is_ignored_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_second_dim_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_6,
          is_ignored_dynamic_output_shape_6,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_second_dim_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_dynamic_output_shape_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed_6();
bool is_ignored_dynamic_output_shape_relaxed_6(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_second_dim_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_6,
          is_ignored_dynamic_output_shape_relaxed_6,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_second_dim_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_3d_per_channel_second_dim_dynamic_output_shape_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_float16_6();
bool is_ignored_dynamic_output_shape_float16_6(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_3d_per_channel_second_dim_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_6,
          is_ignored_dynamic_output_shape_float16_6,
          ::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_3d_per_channel_second_dim_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_3d_per_channel_second_dim_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_7();
bool is_ignored_7(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2) {
  Execute(device,
          createTestModel_7,
          is_ignored_7,
          ::generated_tests::dequantize_v1_2::get_examples());
}

TEST_F(ValidationTest, dequantize_v1_2) {
  const Model model = createTestModel_7();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_dynamic_output_shape_7();
bool is_ignored_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_7,
          is_ignored_dynamic_output_shape_7,
          ::generated_tests::dequantize_v1_2::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_zero_sized();
bool is_ignored_zero_sized(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_zero_sized) {
  Execute(device,
          createTestModel_zero_sized,
          is_ignored_zero_sized,
          ::generated_tests::dequantize_v1_2::get_examples_zero_sized());
}

TEST_F(ValidationTest, dequantize_v1_2_zero_sized) {
  const Model model = createTestModel_zero_sized();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_zero_sized());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_zero_sized_relaxed();
bool is_ignored_zero_sized_relaxed(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_zero_sized_relaxed) {
  Execute(device,
          createTestModel_zero_sized_relaxed,
          is_ignored_zero_sized_relaxed,
          ::generated_tests::dequantize_v1_2::get_examples_zero_sized_relaxed());
}

TEST_F(ValidationTest, dequantize_v1_2_zero_sized_relaxed) {
  const Model model = createTestModel_zero_sized_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_zero_sized_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_zero_sized_float16();
bool is_ignored_zero_sized_float16(int);

TEST_F(NeuralnetworksHidlTest, dequantize_v1_2_zero_sized_float16) {
  Execute(device,
          createTestModel_zero_sized_float16,
          is_ignored_zero_sized_float16,
          ::generated_tests::dequantize_v1_2::get_examples_zero_sized_float16());
}

TEST_F(ValidationTest, dequantize_v1_2_zero_sized_float16) {
  const Model model = createTestModel_zero_sized_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_zero_sized_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape();
bool is_ignored_zero_sized_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_zero_sized_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape,
          is_ignored_zero_sized_dynamic_output_shape,
          ::generated_tests::dequantize_v1_2::get_examples_zero_sized_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_zero_sized_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_zero_sized_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_relaxed();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_relaxed();
bool is_ignored_zero_sized_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_zero_sized_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_relaxed,
          is_ignored_zero_sized_dynamic_output_shape_relaxed,
          ::generated_tests::dequantize_v1_2::get_examples_zero_sized_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_zero_sized_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_zero_sized_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

namespace generated_tests::dequantize_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_float16();

} // namespace generated_tests::dequantize_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape_float16();
bool is_ignored_zero_sized_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, dequantize_v1_2_zero_sized_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_float16,
          is_ignored_zero_sized_dynamic_output_shape_float16,
          ::generated_tests::dequantize_v1_2::get_examples_zero_sized_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, dequantize_v1_2_zero_sized_dynamic_output_shape_float16) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::dequantize_v1_2::get_examples_zero_sized_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::dequantize_v1_2

