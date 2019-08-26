// Generated from box_with_nms_limit_hard.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_hard) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::box_with_nms_limit_hard::get_examples());
}

TEST_F(ValidationTest, box_with_nms_limit_hard) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_hard_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::box_with_nms_limit_hard::get_examples_relaxed());
}

TEST_F(ValidationTest, box_with_nms_limit_hard_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_hard_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::box_with_nms_limit_hard::get_examples_float16());
}

TEST_F(ValidationTest, box_with_nms_limit_hard_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_hard_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::box_with_nms_limit_hard::get_examples_quant8());
}

TEST_F(ValidationTest, box_with_nms_limit_hard_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_hard_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_hard_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_hard_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_hard_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_hard_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_hard_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_hard_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_hard_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_hard_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::box_with_nms_limit_hard::get_examples_2());
}

TEST_F(ValidationTest, box_with_nms_limit_hard_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_hard_relaxed_2) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::box_with_nms_limit_hard::get_examples_relaxed_2());
}

TEST_F(ValidationTest, box_with_nms_limit_hard_relaxed_2) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_hard_float16_2) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::box_with_nms_limit_hard::get_examples_float16_2());
}

TEST_F(ValidationTest, box_with_nms_limit_hard_float16_2) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_hard_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::box_with_nms_limit_hard::get_examples_quant8_2());
}

TEST_F(ValidationTest, box_with_nms_limit_hard_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_hard_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_hard_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_2();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_hard_dynamic_output_shape_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_relaxed_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_hard_dynamic_output_shape_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_2();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_dynamic_output_shape_float16_2();
bool is_ignored_dynamic_output_shape_float16_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_hard_dynamic_output_shape_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_2,
          is_ignored_dynamic_output_shape_float16_2,
          ::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_float16_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_hard_dynamic_output_shape_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

namespace generated_tests::box_with_nms_limit_hard {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_2();

} // namespace generated_tests::box_with_nms_limit_hard

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard {

Model createTestModel_dynamic_output_shape_quant8_2();
bool is_ignored_dynamic_output_shape_quant8_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_hard_dynamic_output_shape_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_2,
          is_ignored_dynamic_output_shape_quant8_2,
          ::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_quant8_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_hard_dynamic_output_shape_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_hard::get_examples_dynamic_output_shape_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_hard

