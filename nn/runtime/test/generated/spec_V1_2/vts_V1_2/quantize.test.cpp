// Generated from quantize.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, quantize_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::quantize::get_examples_quant8());
}

TEST_F(ValidationTest, quantize_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, quantize_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::quantize::get_examples_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, quantize_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, quantize_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::quantize::get_examples_quant8_2());
}

TEST_F(ValidationTest, quantize_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_2();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_dynamic_output_shape_quant8_2();
bool is_ignored_dynamic_output_shape_quant8_2(int);

TEST_F(DynamicOutputShapeTest, quantize_dynamic_output_shape_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_2,
          is_ignored_dynamic_output_shape_quant8_2,
          ::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_2(), true);
}

TEST_F(ValidationTest, quantize_dynamic_output_shape_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_3();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_quant8_3();
bool is_ignored_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, quantize_quant8_3) {
  Execute(device,
          createTestModel_quant8_3,
          is_ignored_quant8_3,
          ::generated_tests::quantize::get_examples_quant8_3());
}

TEST_F(ValidationTest, quantize_quant8_3) {
  const Model model = createTestModel_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_3();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_dynamic_output_shape_quant8_3();
bool is_ignored_dynamic_output_shape_quant8_3(int);

TEST_F(DynamicOutputShapeTest, quantize_dynamic_output_shape_quant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_3,
          is_ignored_dynamic_output_shape_quant8_3,
          ::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_3(), true);
}

TEST_F(ValidationTest, quantize_dynamic_output_shape_quant8_3) {
  const Model model = createTestModel_dynamic_output_shape_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_4();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_quant8_4();
bool is_ignored_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, quantize_quant8_4) {
  Execute(device,
          createTestModel_quant8_4,
          is_ignored_quant8_4,
          ::generated_tests::quantize::get_examples_quant8_4());
}

TEST_F(ValidationTest, quantize_quant8_4) {
  const Model model = createTestModel_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_4();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_dynamic_output_shape_quant8_4();
bool is_ignored_dynamic_output_shape_quant8_4(int);

TEST_F(DynamicOutputShapeTest, quantize_dynamic_output_shape_quant8_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_4,
          is_ignored_dynamic_output_shape_quant8_4,
          ::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_4(), true);
}

TEST_F(ValidationTest, quantize_dynamic_output_shape_quant8_4) {
  const Model model = createTestModel_dynamic_output_shape_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_5();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_quant8_5();
bool is_ignored_quant8_5(int);

TEST_F(NeuralnetworksHidlTest, quantize_quant8_5) {
  Execute(device,
          createTestModel_quant8_5,
          is_ignored_quant8_5,
          ::generated_tests::quantize::get_examples_quant8_5());
}

TEST_F(ValidationTest, quantize_quant8_5) {
  const Model model = createTestModel_quant8_5();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_quant8_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_5();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_dynamic_output_shape_quant8_5();
bool is_ignored_dynamic_output_shape_quant8_5(int);

TEST_F(DynamicOutputShapeTest, quantize_dynamic_output_shape_quant8_5) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_5,
          is_ignored_dynamic_output_shape_quant8_5,
          ::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_5(), true);
}

TEST_F(ValidationTest, quantize_dynamic_output_shape_quant8_5) {
  const Model model = createTestModel_dynamic_output_shape_quant8_5();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_6();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_quant8_6();
bool is_ignored_quant8_6(int);

TEST_F(NeuralnetworksHidlTest, quantize_quant8_6) {
  Execute(device,
          createTestModel_quant8_6,
          is_ignored_quant8_6,
          ::generated_tests::quantize::get_examples_quant8_6());
}

TEST_F(ValidationTest, quantize_quant8_6) {
  const Model model = createTestModel_quant8_6();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_quant8_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_6();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_dynamic_output_shape_quant8_6();
bool is_ignored_dynamic_output_shape_quant8_6(int);

TEST_F(DynamicOutputShapeTest, quantize_dynamic_output_shape_quant8_6) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_6,
          is_ignored_dynamic_output_shape_quant8_6,
          ::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_6(), true);
}

TEST_F(ValidationTest, quantize_dynamic_output_shape_quant8_6) {
  const Model model = createTestModel_dynamic_output_shape_quant8_6();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_7();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_quant8_7();
bool is_ignored_quant8_7(int);

TEST_F(NeuralnetworksHidlTest, quantize_quant8_7) {
  Execute(device,
          createTestModel_quant8_7,
          is_ignored_quant8_7,
          ::generated_tests::quantize::get_examples_quant8_7());
}

TEST_F(ValidationTest, quantize_quant8_7) {
  const Model model = createTestModel_quant8_7();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_quant8_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_7();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_dynamic_output_shape_quant8_7();
bool is_ignored_dynamic_output_shape_quant8_7(int);

TEST_F(DynamicOutputShapeTest, quantize_dynamic_output_shape_quant8_7) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_7,
          is_ignored_dynamic_output_shape_quant8_7,
          ::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_7(), true);
}

TEST_F(ValidationTest, quantize_dynamic_output_shape_quant8_7) {
  const Model model = createTestModel_dynamic_output_shape_quant8_7();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_8();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_quant8_8();
bool is_ignored_quant8_8(int);

TEST_F(NeuralnetworksHidlTest, quantize_quant8_8) {
  Execute(device,
          createTestModel_quant8_8,
          is_ignored_quant8_8,
          ::generated_tests::quantize::get_examples_quant8_8());
}

TEST_F(ValidationTest, quantize_quant8_8) {
  const Model model = createTestModel_quant8_8();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_quant8_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_8();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_dynamic_output_shape_quant8_8();
bool is_ignored_dynamic_output_shape_quant8_8(int);

TEST_F(DynamicOutputShapeTest, quantize_dynamic_output_shape_quant8_8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_8,
          is_ignored_dynamic_output_shape_quant8_8,
          ::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_8(), true);
}

TEST_F(ValidationTest, quantize_dynamic_output_shape_quant8_8) {
  const Model model = createTestModel_dynamic_output_shape_quant8_8();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_dynamic_output_shape_quant8_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_zero_sized();
bool is_ignored_zero_sized(int);

TEST_F(NeuralnetworksHidlTest, quantize_zero_sized) {
  Execute(device,
          createTestModel_zero_sized,
          is_ignored_zero_sized,
          ::generated_tests::quantize::get_examples_zero_sized());
}

TEST_F(ValidationTest, quantize_zero_sized) {
  const Model model = createTestModel_zero_sized();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_zero_sized());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_zero_sized_relaxed();
bool is_ignored_zero_sized_relaxed(int);

TEST_F(NeuralnetworksHidlTest, quantize_zero_sized_relaxed) {
  Execute(device,
          createTestModel_zero_sized_relaxed,
          is_ignored_zero_sized_relaxed,
          ::generated_tests::quantize::get_examples_zero_sized_relaxed());
}

TEST_F(ValidationTest, quantize_zero_sized_relaxed) {
  const Model model = createTestModel_zero_sized_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_zero_sized_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_zero_sized_float16();
bool is_ignored_zero_sized_float16(int);

TEST_F(NeuralnetworksHidlTest, quantize_zero_sized_float16) {
  Execute(device,
          createTestModel_zero_sized_float16,
          is_ignored_zero_sized_float16,
          ::generated_tests::quantize::get_examples_zero_sized_float16());
}

TEST_F(ValidationTest, quantize_zero_sized_float16) {
  const Model model = createTestModel_zero_sized_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_zero_sized_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_zero_sized_dynamic_output_shape();
bool is_ignored_zero_sized_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, quantize_zero_sized_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape,
          is_ignored_zero_sized_dynamic_output_shape,
          ::generated_tests::quantize::get_examples_zero_sized_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, quantize_zero_sized_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_zero_sized_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_relaxed();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_zero_sized_dynamic_output_shape_relaxed();
bool is_ignored_zero_sized_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, quantize_zero_sized_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_relaxed,
          is_ignored_zero_sized_dynamic_output_shape_relaxed,
          ::generated_tests::quantize::get_examples_zero_sized_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, quantize_zero_sized_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_zero_sized_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

namespace generated_tests::quantize {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape_float16();

} // namespace generated_tests::quantize

namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize {

Model createTestModel_zero_sized_dynamic_output_shape_float16();
bool is_ignored_zero_sized_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, quantize_zero_sized_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape_float16,
          is_ignored_zero_sized_dynamic_output_shape_float16,
          ::generated_tests::quantize::get_examples_zero_sized_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, quantize_zero_sized_dynamic_output_shape_float16) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::quantize::get_examples_zero_sized_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::quantize

