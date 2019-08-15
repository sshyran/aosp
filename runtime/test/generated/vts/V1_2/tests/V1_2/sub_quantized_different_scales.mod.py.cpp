// Generated from sub_quantized_different_scales.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::sub_quantized_different_scales::get_examples());
}

TEST_F(ValidationTest, sub_quantized_different_scales) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::sub_quantized_different_scales::get_examples_2());
}

TEST_F(ValidationTest, sub_quantized_different_scales_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_3();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_3) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::sub_quantized_different_scales::get_examples_3());
}

TEST_F(ValidationTest, sub_quantized_different_scales_3) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_3();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_3) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_4();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_4) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::sub_quantized_different_scales::get_examples_4());
}

TEST_F(ValidationTest, sub_quantized_different_scales_4) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_4();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_4) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_5();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_5();
bool is_ignored_5(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_5) {
  Execute(device,
          createTestModel_5,
          is_ignored_5,
          ::generated_tests::sub_quantized_different_scales::get_examples_5());
}

TEST_F(ValidationTest, sub_quantized_different_scales_5) {
  const Model model = createTestModel_5();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_5();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_5();
bool is_ignored_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_dynamic_output_shape_5,
          is_ignored_dynamic_output_shape_5,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_5) {
  const Model model = createTestModel_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_6();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_6();
bool is_ignored_6(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_6) {
  Execute(device,
          createTestModel_6,
          is_ignored_6,
          ::generated_tests::sub_quantized_different_scales::get_examples_6());
}

TEST_F(ValidationTest, sub_quantized_different_scales_6) {
  const Model model = createTestModel_6();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_6();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_6();
bool is_ignored_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_dynamic_output_shape_6,
          is_ignored_dynamic_output_shape_6,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_6) {
  const Model model = createTestModel_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_7();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_7();
bool is_ignored_7(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_7) {
  Execute(device,
          createTestModel_7,
          is_ignored_7,
          ::generated_tests::sub_quantized_different_scales::get_examples_7());
}

TEST_F(ValidationTest, sub_quantized_different_scales_7) {
  const Model model = createTestModel_7();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_7();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_7();
bool is_ignored_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_dynamic_output_shape_7,
          is_ignored_dynamic_output_shape_7,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_7) {
  const Model model = createTestModel_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_8();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_8();
bool is_ignored_8(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_8) {
  Execute(device,
          createTestModel_8,
          is_ignored_8,
          ::generated_tests::sub_quantized_different_scales::get_examples_8());
}

TEST_F(ValidationTest, sub_quantized_different_scales_8) {
  const Model model = createTestModel_8();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_8();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_8();
bool is_ignored_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_dynamic_output_shape_8,
          is_ignored_dynamic_output_shape_8,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_8) {
  const Model model = createTestModel_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_9();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_9();
bool is_ignored_9(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_9) {
  Execute(device,
          createTestModel_9,
          is_ignored_9,
          ::generated_tests::sub_quantized_different_scales::get_examples_9());
}

TEST_F(ValidationTest, sub_quantized_different_scales_9) {
  const Model model = createTestModel_9();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_9());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_9();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_9();
bool is_ignored_dynamic_output_shape_9(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_9) {
  Execute(device,
          createTestModel_dynamic_output_shape_9,
          is_ignored_dynamic_output_shape_9,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_9(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_9) {
  const Model model = createTestModel_dynamic_output_shape_9();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_9());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_10();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_10();
bool is_ignored_10(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_10) {
  Execute(device,
          createTestModel_10,
          is_ignored_10,
          ::generated_tests::sub_quantized_different_scales::get_examples_10());
}

TEST_F(ValidationTest, sub_quantized_different_scales_10) {
  const Model model = createTestModel_10();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_10());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_10();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_10();
bool is_ignored_dynamic_output_shape_10(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_10) {
  Execute(device,
          createTestModel_dynamic_output_shape_10,
          is_ignored_dynamic_output_shape_10,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_10(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_10) {
  const Model model = createTestModel_dynamic_output_shape_10();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_10());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_11();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_11();
bool is_ignored_11(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_11) {
  Execute(device,
          createTestModel_11,
          is_ignored_11,
          ::generated_tests::sub_quantized_different_scales::get_examples_11());
}

TEST_F(ValidationTest, sub_quantized_different_scales_11) {
  const Model model = createTestModel_11();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_11());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_11();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_11();
bool is_ignored_dynamic_output_shape_11(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_11) {
  Execute(device,
          createTestModel_dynamic_output_shape_11,
          is_ignored_dynamic_output_shape_11,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_11(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_11) {
  const Model model = createTestModel_dynamic_output_shape_11();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_11());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_12();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_12();
bool is_ignored_12(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_12) {
  Execute(device,
          createTestModel_12,
          is_ignored_12,
          ::generated_tests::sub_quantized_different_scales::get_examples_12());
}

TEST_F(ValidationTest, sub_quantized_different_scales_12) {
  const Model model = createTestModel_12();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_12());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_12();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_12();
bool is_ignored_dynamic_output_shape_12(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_12) {
  Execute(device,
          createTestModel_dynamic_output_shape_12,
          is_ignored_dynamic_output_shape_12,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_12(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_12) {
  const Model model = createTestModel_dynamic_output_shape_12();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_12());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_13();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_13();
bool is_ignored_13(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_13) {
  Execute(device,
          createTestModel_13,
          is_ignored_13,
          ::generated_tests::sub_quantized_different_scales::get_examples_13());
}

TEST_F(ValidationTest, sub_quantized_different_scales_13) {
  const Model model = createTestModel_13();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_13());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_13();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_13();
bool is_ignored_dynamic_output_shape_13(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_13) {
  Execute(device,
          createTestModel_dynamic_output_shape_13,
          is_ignored_dynamic_output_shape_13,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_13(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_13) {
  const Model model = createTestModel_dynamic_output_shape_13();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_13());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_14();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_14();
bool is_ignored_14(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_14) {
  Execute(device,
          createTestModel_14,
          is_ignored_14,
          ::generated_tests::sub_quantized_different_scales::get_examples_14());
}

TEST_F(ValidationTest, sub_quantized_different_scales_14) {
  const Model model = createTestModel_14();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_14());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_14();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_14();
bool is_ignored_dynamic_output_shape_14(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_14) {
  Execute(device,
          createTestModel_dynamic_output_shape_14,
          is_ignored_dynamic_output_shape_14,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_14(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_14) {
  const Model model = createTestModel_dynamic_output_shape_14();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_14());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_15();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_15();
bool is_ignored_15(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_15) {
  Execute(device,
          createTestModel_15,
          is_ignored_15,
          ::generated_tests::sub_quantized_different_scales::get_examples_15());
}

TEST_F(ValidationTest, sub_quantized_different_scales_15) {
  const Model model = createTestModel_15();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_15());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_15();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_15();
bool is_ignored_dynamic_output_shape_15(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_15) {
  Execute(device,
          createTestModel_dynamic_output_shape_15,
          is_ignored_dynamic_output_shape_15,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_15(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_15) {
  const Model model = createTestModel_dynamic_output_shape_15();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_15());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_16();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_16();
bool is_ignored_16(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_16) {
  Execute(device,
          createTestModel_16,
          is_ignored_16,
          ::generated_tests::sub_quantized_different_scales::get_examples_16());
}

TEST_F(ValidationTest, sub_quantized_different_scales_16) {
  const Model model = createTestModel_16();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_16();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_16();
bool is_ignored_dynamic_output_shape_16(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_16) {
  Execute(device,
          createTestModel_dynamic_output_shape_16,
          is_ignored_dynamic_output_shape_16,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_16(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_16) {
  const Model model = createTestModel_dynamic_output_shape_16();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_17();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_17();
bool is_ignored_17(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_17) {
  Execute(device,
          createTestModel_17,
          is_ignored_17,
          ::generated_tests::sub_quantized_different_scales::get_examples_17());
}

TEST_F(ValidationTest, sub_quantized_different_scales_17) {
  const Model model = createTestModel_17();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_17());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_17();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_17();
bool is_ignored_dynamic_output_shape_17(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_17) {
  Execute(device,
          createTestModel_dynamic_output_shape_17,
          is_ignored_dynamic_output_shape_17,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_17(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_17) {
  const Model model = createTestModel_dynamic_output_shape_17();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_17());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_18();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_18();
bool is_ignored_18(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_18) {
  Execute(device,
          createTestModel_18,
          is_ignored_18,
          ::generated_tests::sub_quantized_different_scales::get_examples_18());
}

TEST_F(ValidationTest, sub_quantized_different_scales_18) {
  const Model model = createTestModel_18();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_18());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_18();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_18();
bool is_ignored_dynamic_output_shape_18(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_18) {
  Execute(device,
          createTestModel_dynamic_output_shape_18,
          is_ignored_dynamic_output_shape_18,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_18(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_18) {
  const Model model = createTestModel_dynamic_output_shape_18();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_18());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_19();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_19();
bool is_ignored_19(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_19) {
  Execute(device,
          createTestModel_19,
          is_ignored_19,
          ::generated_tests::sub_quantized_different_scales::get_examples_19());
}

TEST_F(ValidationTest, sub_quantized_different_scales_19) {
  const Model model = createTestModel_19();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_19());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_19();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_19();
bool is_ignored_dynamic_output_shape_19(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_19) {
  Execute(device,
          createTestModel_dynamic_output_shape_19,
          is_ignored_dynamic_output_shape_19,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_19(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_19) {
  const Model model = createTestModel_dynamic_output_shape_19();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_19());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_20();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_20();
bool is_ignored_20(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_20) {
  Execute(device,
          createTestModel_20,
          is_ignored_20,
          ::generated_tests::sub_quantized_different_scales::get_examples_20());
}

TEST_F(ValidationTest, sub_quantized_different_scales_20) {
  const Model model = createTestModel_20();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_20());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_20();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_20();
bool is_ignored_dynamic_output_shape_20(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_20) {
  Execute(device,
          createTestModel_dynamic_output_shape_20,
          is_ignored_dynamic_output_shape_20,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_20(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_20) {
  const Model model = createTestModel_dynamic_output_shape_20();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_20());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_21();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_21();
bool is_ignored_21(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_21) {
  Execute(device,
          createTestModel_21,
          is_ignored_21,
          ::generated_tests::sub_quantized_different_scales::get_examples_21());
}

TEST_F(ValidationTest, sub_quantized_different_scales_21) {
  const Model model = createTestModel_21();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_21());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_21();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_21();
bool is_ignored_dynamic_output_shape_21(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_21) {
  Execute(device,
          createTestModel_dynamic_output_shape_21,
          is_ignored_dynamic_output_shape_21,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_21(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_21) {
  const Model model = createTestModel_dynamic_output_shape_21();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_21());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_22();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_22();
bool is_ignored_22(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_22) {
  Execute(device,
          createTestModel_22,
          is_ignored_22,
          ::generated_tests::sub_quantized_different_scales::get_examples_22());
}

TEST_F(ValidationTest, sub_quantized_different_scales_22) {
  const Model model = createTestModel_22();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_22());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_22();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_22();
bool is_ignored_dynamic_output_shape_22(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_22) {
  Execute(device,
          createTestModel_dynamic_output_shape_22,
          is_ignored_dynamic_output_shape_22,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_22(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_22) {
  const Model model = createTestModel_dynamic_output_shape_22();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_22());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_23();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_23();
bool is_ignored_23(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_23) {
  Execute(device,
          createTestModel_23,
          is_ignored_23,
          ::generated_tests::sub_quantized_different_scales::get_examples_23());
}

TEST_F(ValidationTest, sub_quantized_different_scales_23) {
  const Model model = createTestModel_23();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_23());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_23();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_23();
bool is_ignored_dynamic_output_shape_23(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_23) {
  Execute(device,
          createTestModel_dynamic_output_shape_23,
          is_ignored_dynamic_output_shape_23,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_23(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_23) {
  const Model model = createTestModel_dynamic_output_shape_23();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_23());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_24();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_24();
bool is_ignored_24(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_24) {
  Execute(device,
          createTestModel_24,
          is_ignored_24,
          ::generated_tests::sub_quantized_different_scales::get_examples_24());
}

TEST_F(ValidationTest, sub_quantized_different_scales_24) {
  const Model model = createTestModel_24();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_24());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_24();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_24();
bool is_ignored_dynamic_output_shape_24(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_24) {
  Execute(device,
          createTestModel_dynamic_output_shape_24,
          is_ignored_dynamic_output_shape_24,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_24(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_24) {
  const Model model = createTestModel_dynamic_output_shape_24();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_24());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_25();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_25();
bool is_ignored_25(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_25) {
  Execute(device,
          createTestModel_25,
          is_ignored_25,
          ::generated_tests::sub_quantized_different_scales::get_examples_25());
}

TEST_F(ValidationTest, sub_quantized_different_scales_25) {
  const Model model = createTestModel_25();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_25());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_25();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_25();
bool is_ignored_dynamic_output_shape_25(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_25) {
  Execute(device,
          createTestModel_dynamic_output_shape_25,
          is_ignored_dynamic_output_shape_25,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_25(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_25) {
  const Model model = createTestModel_dynamic_output_shape_25();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_25());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_26();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_26();
bool is_ignored_26(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_26) {
  Execute(device,
          createTestModel_26,
          is_ignored_26,
          ::generated_tests::sub_quantized_different_scales::get_examples_26());
}

TEST_F(ValidationTest, sub_quantized_different_scales_26) {
  const Model model = createTestModel_26();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_26());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_26();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_26();
bool is_ignored_dynamic_output_shape_26(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_26) {
  Execute(device,
          createTestModel_dynamic_output_shape_26,
          is_ignored_dynamic_output_shape_26,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_26(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_26) {
  const Model model = createTestModel_dynamic_output_shape_26();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_26());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_27();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_27();
bool is_ignored_27(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_27) {
  Execute(device,
          createTestModel_27,
          is_ignored_27,
          ::generated_tests::sub_quantized_different_scales::get_examples_27());
}

TEST_F(ValidationTest, sub_quantized_different_scales_27) {
  const Model model = createTestModel_27();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_27());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_27();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_27();
bool is_ignored_dynamic_output_shape_27(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_27) {
  Execute(device,
          createTestModel_dynamic_output_shape_27,
          is_ignored_dynamic_output_shape_27,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_27(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_27) {
  const Model model = createTestModel_dynamic_output_shape_27();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_27());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_28();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_28();
bool is_ignored_28(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_28) {
  Execute(device,
          createTestModel_28,
          is_ignored_28,
          ::generated_tests::sub_quantized_different_scales::get_examples_28());
}

TEST_F(ValidationTest, sub_quantized_different_scales_28) {
  const Model model = createTestModel_28();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_28());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_28();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_28();
bool is_ignored_dynamic_output_shape_28(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_28) {
  Execute(device,
          createTestModel_dynamic_output_shape_28,
          is_ignored_dynamic_output_shape_28,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_28(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_28) {
  const Model model = createTestModel_dynamic_output_shape_28();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_28());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_29();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_29();
bool is_ignored_29(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_29) {
  Execute(device,
          createTestModel_29,
          is_ignored_29,
          ::generated_tests::sub_quantized_different_scales::get_examples_29());
}

TEST_F(ValidationTest, sub_quantized_different_scales_29) {
  const Model model = createTestModel_29();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_29());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_29();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_29();
bool is_ignored_dynamic_output_shape_29(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_29) {
  Execute(device,
          createTestModel_dynamic_output_shape_29,
          is_ignored_dynamic_output_shape_29,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_29(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_29) {
  const Model model = createTestModel_dynamic_output_shape_29();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_29());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_30();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_30();
bool is_ignored_30(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_30) {
  Execute(device,
          createTestModel_30,
          is_ignored_30,
          ::generated_tests::sub_quantized_different_scales::get_examples_30());
}

TEST_F(ValidationTest, sub_quantized_different_scales_30) {
  const Model model = createTestModel_30();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_30());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_30();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_30();
bool is_ignored_dynamic_output_shape_30(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_30) {
  Execute(device,
          createTestModel_dynamic_output_shape_30,
          is_ignored_dynamic_output_shape_30,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_30(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_30) {
  const Model model = createTestModel_dynamic_output_shape_30();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_30());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_31();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_31();
bool is_ignored_31(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_31) {
  Execute(device,
          createTestModel_31,
          is_ignored_31,
          ::generated_tests::sub_quantized_different_scales::get_examples_31());
}

TEST_F(ValidationTest, sub_quantized_different_scales_31) {
  const Model model = createTestModel_31();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_31());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_31();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_31();
bool is_ignored_dynamic_output_shape_31(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_31) {
  Execute(device,
          createTestModel_dynamic_output_shape_31,
          is_ignored_dynamic_output_shape_31,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_31(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_31) {
  const Model model = createTestModel_dynamic_output_shape_31();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_31());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_32();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_32();
bool is_ignored_32(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_32) {
  Execute(device,
          createTestModel_32,
          is_ignored_32,
          ::generated_tests::sub_quantized_different_scales::get_examples_32());
}

TEST_F(ValidationTest, sub_quantized_different_scales_32) {
  const Model model = createTestModel_32();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_32();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_32();
bool is_ignored_dynamic_output_shape_32(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_32) {
  Execute(device,
          createTestModel_dynamic_output_shape_32,
          is_ignored_dynamic_output_shape_32,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_32(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_32) {
  const Model model = createTestModel_dynamic_output_shape_32();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_33();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_33();
bool is_ignored_33(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_33) {
  Execute(device,
          createTestModel_33,
          is_ignored_33,
          ::generated_tests::sub_quantized_different_scales::get_examples_33());
}

TEST_F(ValidationTest, sub_quantized_different_scales_33) {
  const Model model = createTestModel_33();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_33());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_33();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_33();
bool is_ignored_dynamic_output_shape_33(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_33) {
  Execute(device,
          createTestModel_dynamic_output_shape_33,
          is_ignored_dynamic_output_shape_33,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_33(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_33) {
  const Model model = createTestModel_dynamic_output_shape_33();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_33());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_34();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_34();
bool is_ignored_34(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_34) {
  Execute(device,
          createTestModel_34,
          is_ignored_34,
          ::generated_tests::sub_quantized_different_scales::get_examples_34());
}

TEST_F(ValidationTest, sub_quantized_different_scales_34) {
  const Model model = createTestModel_34();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_34());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_34();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_34();
bool is_ignored_dynamic_output_shape_34(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_34) {
  Execute(device,
          createTestModel_dynamic_output_shape_34,
          is_ignored_dynamic_output_shape_34,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_34(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_34) {
  const Model model = createTestModel_dynamic_output_shape_34();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_34());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_35();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_35();
bool is_ignored_35(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_35) {
  Execute(device,
          createTestModel_35,
          is_ignored_35,
          ::generated_tests::sub_quantized_different_scales::get_examples_35());
}

TEST_F(ValidationTest, sub_quantized_different_scales_35) {
  const Model model = createTestModel_35();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_35());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_35();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_35();
bool is_ignored_dynamic_output_shape_35(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_35) {
  Execute(device,
          createTestModel_dynamic_output_shape_35,
          is_ignored_dynamic_output_shape_35,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_35(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_35) {
  const Model model = createTestModel_dynamic_output_shape_35();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_35());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_36();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_36();
bool is_ignored_36(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_36) {
  Execute(device,
          createTestModel_36,
          is_ignored_36,
          ::generated_tests::sub_quantized_different_scales::get_examples_36());
}

TEST_F(ValidationTest, sub_quantized_different_scales_36) {
  const Model model = createTestModel_36();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_36());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_36();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_36();
bool is_ignored_dynamic_output_shape_36(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_36) {
  Execute(device,
          createTestModel_dynamic_output_shape_36,
          is_ignored_dynamic_output_shape_36,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_36(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_36) {
  const Model model = createTestModel_dynamic_output_shape_36();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_36());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_37();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_37();
bool is_ignored_37(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_37) {
  Execute(device,
          createTestModel_37,
          is_ignored_37,
          ::generated_tests::sub_quantized_different_scales::get_examples_37());
}

TEST_F(ValidationTest, sub_quantized_different_scales_37) {
  const Model model = createTestModel_37();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_37());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_37();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_37();
bool is_ignored_dynamic_output_shape_37(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_37) {
  Execute(device,
          createTestModel_dynamic_output_shape_37,
          is_ignored_dynamic_output_shape_37,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_37(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_37) {
  const Model model = createTestModel_dynamic_output_shape_37();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_37());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_38();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_38();
bool is_ignored_38(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_38) {
  Execute(device,
          createTestModel_38,
          is_ignored_38,
          ::generated_tests::sub_quantized_different_scales::get_examples_38());
}

TEST_F(ValidationTest, sub_quantized_different_scales_38) {
  const Model model = createTestModel_38();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_38());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_38();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_38();
bool is_ignored_dynamic_output_shape_38(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_38) {
  Execute(device,
          createTestModel_dynamic_output_shape_38,
          is_ignored_dynamic_output_shape_38,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_38(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_38) {
  const Model model = createTestModel_dynamic_output_shape_38();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_38());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_39();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_39();
bool is_ignored_39(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_39) {
  Execute(device,
          createTestModel_39,
          is_ignored_39,
          ::generated_tests::sub_quantized_different_scales::get_examples_39());
}

TEST_F(ValidationTest, sub_quantized_different_scales_39) {
  const Model model = createTestModel_39();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_39());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_39();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_39();
bool is_ignored_dynamic_output_shape_39(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_39) {
  Execute(device,
          createTestModel_dynamic_output_shape_39,
          is_ignored_dynamic_output_shape_39,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_39(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_39) {
  const Model model = createTestModel_dynamic_output_shape_39();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_39());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_40();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_40();
bool is_ignored_40(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_40) {
  Execute(device,
          createTestModel_40,
          is_ignored_40,
          ::generated_tests::sub_quantized_different_scales::get_examples_40());
}

TEST_F(ValidationTest, sub_quantized_different_scales_40) {
  const Model model = createTestModel_40();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_40());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_40();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_40();
bool is_ignored_dynamic_output_shape_40(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_40) {
  Execute(device,
          createTestModel_dynamic_output_shape_40,
          is_ignored_dynamic_output_shape_40,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_40(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_40) {
  const Model model = createTestModel_dynamic_output_shape_40();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_40());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_41();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_41();
bool is_ignored_41(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_41) {
  Execute(device,
          createTestModel_41,
          is_ignored_41,
          ::generated_tests::sub_quantized_different_scales::get_examples_41());
}

TEST_F(ValidationTest, sub_quantized_different_scales_41) {
  const Model model = createTestModel_41();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_41());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_41();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_41();
bool is_ignored_dynamic_output_shape_41(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_41) {
  Execute(device,
          createTestModel_dynamic_output_shape_41,
          is_ignored_dynamic_output_shape_41,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_41(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_41) {
  const Model model = createTestModel_dynamic_output_shape_41();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_41());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_42();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_42();
bool is_ignored_42(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_42) {
  Execute(device,
          createTestModel_42,
          is_ignored_42,
          ::generated_tests::sub_quantized_different_scales::get_examples_42());
}

TEST_F(ValidationTest, sub_quantized_different_scales_42) {
  const Model model = createTestModel_42();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_42());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_42();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_42();
bool is_ignored_dynamic_output_shape_42(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_42) {
  Execute(device,
          createTestModel_dynamic_output_shape_42,
          is_ignored_dynamic_output_shape_42,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_42(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_42) {
  const Model model = createTestModel_dynamic_output_shape_42();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_42());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_43();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_43();
bool is_ignored_43(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_43) {
  Execute(device,
          createTestModel_43,
          is_ignored_43,
          ::generated_tests::sub_quantized_different_scales::get_examples_43());
}

TEST_F(ValidationTest, sub_quantized_different_scales_43) {
  const Model model = createTestModel_43();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_43());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_43();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_43();
bool is_ignored_dynamic_output_shape_43(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_43) {
  Execute(device,
          createTestModel_dynamic_output_shape_43,
          is_ignored_dynamic_output_shape_43,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_43(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_43) {
  const Model model = createTestModel_dynamic_output_shape_43();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_43());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_44();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_44();
bool is_ignored_44(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_44) {
  Execute(device,
          createTestModel_44,
          is_ignored_44,
          ::generated_tests::sub_quantized_different_scales::get_examples_44());
}

TEST_F(ValidationTest, sub_quantized_different_scales_44) {
  const Model model = createTestModel_44();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_44());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_44();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_44();
bool is_ignored_dynamic_output_shape_44(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_44) {
  Execute(device,
          createTestModel_dynamic_output_shape_44,
          is_ignored_dynamic_output_shape_44,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_44(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_44) {
  const Model model = createTestModel_dynamic_output_shape_44();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_44());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_45();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_45();
bool is_ignored_45(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_45) {
  Execute(device,
          createTestModel_45,
          is_ignored_45,
          ::generated_tests::sub_quantized_different_scales::get_examples_45());
}

TEST_F(ValidationTest, sub_quantized_different_scales_45) {
  const Model model = createTestModel_45();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_45());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_45();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_45();
bool is_ignored_dynamic_output_shape_45(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_45) {
  Execute(device,
          createTestModel_dynamic_output_shape_45,
          is_ignored_dynamic_output_shape_45,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_45(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_45) {
  const Model model = createTestModel_dynamic_output_shape_45();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_45());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_46();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_46();
bool is_ignored_46(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_46) {
  Execute(device,
          createTestModel_46,
          is_ignored_46,
          ::generated_tests::sub_quantized_different_scales::get_examples_46());
}

TEST_F(ValidationTest, sub_quantized_different_scales_46) {
  const Model model = createTestModel_46();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_46());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_46();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_46();
bool is_ignored_dynamic_output_shape_46(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_46) {
  Execute(device,
          createTestModel_dynamic_output_shape_46,
          is_ignored_dynamic_output_shape_46,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_46(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_46) {
  const Model model = createTestModel_dynamic_output_shape_46();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_46());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_47();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_47();
bool is_ignored_47(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_47) {
  Execute(device,
          createTestModel_47,
          is_ignored_47,
          ::generated_tests::sub_quantized_different_scales::get_examples_47());
}

TEST_F(ValidationTest, sub_quantized_different_scales_47) {
  const Model model = createTestModel_47();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_47());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_47();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_47();
bool is_ignored_dynamic_output_shape_47(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_47) {
  Execute(device,
          createTestModel_dynamic_output_shape_47,
          is_ignored_dynamic_output_shape_47,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_47(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_47) {
  const Model model = createTestModel_dynamic_output_shape_47();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_47());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_48();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_48();
bool is_ignored_48(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_48) {
  Execute(device,
          createTestModel_48,
          is_ignored_48,
          ::generated_tests::sub_quantized_different_scales::get_examples_48());
}

TEST_F(ValidationTest, sub_quantized_different_scales_48) {
  const Model model = createTestModel_48();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_48());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_48();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_48();
bool is_ignored_dynamic_output_shape_48(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_48) {
  Execute(device,
          createTestModel_dynamic_output_shape_48,
          is_ignored_dynamic_output_shape_48,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_48(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_48) {
  const Model model = createTestModel_dynamic_output_shape_48();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_48());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_49();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_49();
bool is_ignored_49(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_49) {
  Execute(device,
          createTestModel_49,
          is_ignored_49,
          ::generated_tests::sub_quantized_different_scales::get_examples_49());
}

TEST_F(ValidationTest, sub_quantized_different_scales_49) {
  const Model model = createTestModel_49();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_49());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_49();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_49();
bool is_ignored_dynamic_output_shape_49(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_49) {
  Execute(device,
          createTestModel_dynamic_output_shape_49,
          is_ignored_dynamic_output_shape_49,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_49(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_49) {
  const Model model = createTestModel_dynamic_output_shape_49();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_49());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_50();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_50();
bool is_ignored_50(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_50) {
  Execute(device,
          createTestModel_50,
          is_ignored_50,
          ::generated_tests::sub_quantized_different_scales::get_examples_50());
}

TEST_F(ValidationTest, sub_quantized_different_scales_50) {
  const Model model = createTestModel_50();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_50());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_50();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_50();
bool is_ignored_dynamic_output_shape_50(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_50) {
  Execute(device,
          createTestModel_dynamic_output_shape_50,
          is_ignored_dynamic_output_shape_50,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_50(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_50) {
  const Model model = createTestModel_dynamic_output_shape_50();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_50());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_51();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_51();
bool is_ignored_51(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_51) {
  Execute(device,
          createTestModel_51,
          is_ignored_51,
          ::generated_tests::sub_quantized_different_scales::get_examples_51());
}

TEST_F(ValidationTest, sub_quantized_different_scales_51) {
  const Model model = createTestModel_51();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_51());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_51();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_51();
bool is_ignored_dynamic_output_shape_51(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_51) {
  Execute(device,
          createTestModel_dynamic_output_shape_51,
          is_ignored_dynamic_output_shape_51,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_51(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_51) {
  const Model model = createTestModel_dynamic_output_shape_51();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_51());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_52();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_52();
bool is_ignored_52(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_52) {
  Execute(device,
          createTestModel_52,
          is_ignored_52,
          ::generated_tests::sub_quantized_different_scales::get_examples_52());
}

TEST_F(ValidationTest, sub_quantized_different_scales_52) {
  const Model model = createTestModel_52();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_52());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_52();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_52();
bool is_ignored_dynamic_output_shape_52(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_52) {
  Execute(device,
          createTestModel_dynamic_output_shape_52,
          is_ignored_dynamic_output_shape_52,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_52(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_52) {
  const Model model = createTestModel_dynamic_output_shape_52();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_52());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_53();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_53();
bool is_ignored_53(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_53) {
  Execute(device,
          createTestModel_53,
          is_ignored_53,
          ::generated_tests::sub_quantized_different_scales::get_examples_53());
}

TEST_F(ValidationTest, sub_quantized_different_scales_53) {
  const Model model = createTestModel_53();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_53());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_53();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_53();
bool is_ignored_dynamic_output_shape_53(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_53) {
  Execute(device,
          createTestModel_dynamic_output_shape_53,
          is_ignored_dynamic_output_shape_53,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_53(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_53) {
  const Model model = createTestModel_dynamic_output_shape_53();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_53());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_54();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_54();
bool is_ignored_54(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_54) {
  Execute(device,
          createTestModel_54,
          is_ignored_54,
          ::generated_tests::sub_quantized_different_scales::get_examples_54());
}

TEST_F(ValidationTest, sub_quantized_different_scales_54) {
  const Model model = createTestModel_54();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_54());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_54();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_54();
bool is_ignored_dynamic_output_shape_54(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_54) {
  Execute(device,
          createTestModel_dynamic_output_shape_54,
          is_ignored_dynamic_output_shape_54,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_54(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_54) {
  const Model model = createTestModel_dynamic_output_shape_54();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_54());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_55();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_55();
bool is_ignored_55(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_55) {
  Execute(device,
          createTestModel_55,
          is_ignored_55,
          ::generated_tests::sub_quantized_different_scales::get_examples_55());
}

TEST_F(ValidationTest, sub_quantized_different_scales_55) {
  const Model model = createTestModel_55();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_55());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_55();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_55();
bool is_ignored_dynamic_output_shape_55(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_55) {
  Execute(device,
          createTestModel_dynamic_output_shape_55,
          is_ignored_dynamic_output_shape_55,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_55(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_55) {
  const Model model = createTestModel_dynamic_output_shape_55();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_55());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_56();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_56();
bool is_ignored_56(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_56) {
  Execute(device,
          createTestModel_56,
          is_ignored_56,
          ::generated_tests::sub_quantized_different_scales::get_examples_56());
}

TEST_F(ValidationTest, sub_quantized_different_scales_56) {
  const Model model = createTestModel_56();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_56());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_56();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_56();
bool is_ignored_dynamic_output_shape_56(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_56) {
  Execute(device,
          createTestModel_dynamic_output_shape_56,
          is_ignored_dynamic_output_shape_56,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_56(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_56) {
  const Model model = createTestModel_dynamic_output_shape_56();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_56());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_57();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_57();
bool is_ignored_57(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_57) {
  Execute(device,
          createTestModel_57,
          is_ignored_57,
          ::generated_tests::sub_quantized_different_scales::get_examples_57());
}

TEST_F(ValidationTest, sub_quantized_different_scales_57) {
  const Model model = createTestModel_57();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_57());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_57();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_57();
bool is_ignored_dynamic_output_shape_57(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_57) {
  Execute(device,
          createTestModel_dynamic_output_shape_57,
          is_ignored_dynamic_output_shape_57,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_57(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_57) {
  const Model model = createTestModel_dynamic_output_shape_57();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_57());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_58();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_58();
bool is_ignored_58(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_58) {
  Execute(device,
          createTestModel_58,
          is_ignored_58,
          ::generated_tests::sub_quantized_different_scales::get_examples_58());
}

TEST_F(ValidationTest, sub_quantized_different_scales_58) {
  const Model model = createTestModel_58();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_58());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_58();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_58();
bool is_ignored_dynamic_output_shape_58(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_58) {
  Execute(device,
          createTestModel_dynamic_output_shape_58,
          is_ignored_dynamic_output_shape_58,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_58(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_58) {
  const Model model = createTestModel_dynamic_output_shape_58();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_58());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_59();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_59();
bool is_ignored_59(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_59) {
  Execute(device,
          createTestModel_59,
          is_ignored_59,
          ::generated_tests::sub_quantized_different_scales::get_examples_59());
}

TEST_F(ValidationTest, sub_quantized_different_scales_59) {
  const Model model = createTestModel_59();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_59());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_59();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_59();
bool is_ignored_dynamic_output_shape_59(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_59) {
  Execute(device,
          createTestModel_dynamic_output_shape_59,
          is_ignored_dynamic_output_shape_59,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_59(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_59) {
  const Model model = createTestModel_dynamic_output_shape_59();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_59());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_60();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_60();
bool is_ignored_60(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_60) {
  Execute(device,
          createTestModel_60,
          is_ignored_60,
          ::generated_tests::sub_quantized_different_scales::get_examples_60());
}

TEST_F(ValidationTest, sub_quantized_different_scales_60) {
  const Model model = createTestModel_60();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_60());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_60();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_60();
bool is_ignored_dynamic_output_shape_60(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_60) {
  Execute(device,
          createTestModel_dynamic_output_shape_60,
          is_ignored_dynamic_output_shape_60,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_60(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_60) {
  const Model model = createTestModel_dynamic_output_shape_60();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_60());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_61();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_61();
bool is_ignored_61(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_61) {
  Execute(device,
          createTestModel_61,
          is_ignored_61,
          ::generated_tests::sub_quantized_different_scales::get_examples_61());
}

TEST_F(ValidationTest, sub_quantized_different_scales_61) {
  const Model model = createTestModel_61();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_61());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_61();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_61();
bool is_ignored_dynamic_output_shape_61(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_61) {
  Execute(device,
          createTestModel_dynamic_output_shape_61,
          is_ignored_dynamic_output_shape_61,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_61(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_61) {
  const Model model = createTestModel_dynamic_output_shape_61();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_61());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_62();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_62();
bool is_ignored_62(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_62) {
  Execute(device,
          createTestModel_62,
          is_ignored_62,
          ::generated_tests::sub_quantized_different_scales::get_examples_62());
}

TEST_F(ValidationTest, sub_quantized_different_scales_62) {
  const Model model = createTestModel_62();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_62());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_62();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_62();
bool is_ignored_dynamic_output_shape_62(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_62) {
  Execute(device,
          createTestModel_dynamic_output_shape_62,
          is_ignored_dynamic_output_shape_62,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_62(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_62) {
  const Model model = createTestModel_dynamic_output_shape_62();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_62());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_63();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_63();
bool is_ignored_63(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_63) {
  Execute(device,
          createTestModel_63,
          is_ignored_63,
          ::generated_tests::sub_quantized_different_scales::get_examples_63());
}

TEST_F(ValidationTest, sub_quantized_different_scales_63) {
  const Model model = createTestModel_63();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_63());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_63();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_63();
bool is_ignored_dynamic_output_shape_63(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_63) {
  Execute(device,
          createTestModel_dynamic_output_shape_63,
          is_ignored_dynamic_output_shape_63,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_63(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_63) {
  const Model model = createTestModel_dynamic_output_shape_63();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_63());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_64();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_64();
bool is_ignored_64(int);

TEST_F(NeuralnetworksHidlTest, sub_quantized_different_scales_64) {
  Execute(device,
          createTestModel_64,
          is_ignored_64,
          ::generated_tests::sub_quantized_different_scales::get_examples_64());
}

TEST_F(ValidationTest, sub_quantized_different_scales_64) {
  const Model model = createTestModel_64();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_64());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

namespace generated_tests::sub_quantized_different_scales {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_64();

} // namespace generated_tests::sub_quantized_different_scales

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales {

Model createTestModel_dynamic_output_shape_64();
bool is_ignored_dynamic_output_shape_64(int);

TEST_F(DynamicOutputShapeTest, sub_quantized_different_scales_dynamic_output_shape_64) {
  Execute(device,
          createTestModel_dynamic_output_shape_64,
          is_ignored_dynamic_output_shape_64,
          ::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_64(), true);
}

TEST_F(ValidationTest, sub_quantized_different_scales_dynamic_output_shape_64) {
  const Model model = createTestModel_dynamic_output_shape_64();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_quantized_different_scales::get_examples_dynamic_output_shape_64());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_quantized_different_scales

