// Generated from greater_equal.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_simple) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::greater_equal::get_examples_simple());
}

TEST_F(ValidationTest, greater_equal_simple) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_simple());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_int32();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_int32();
bool is_ignored_int32(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_simple_int32) {
  Execute(device,
          createTestModel_int32,
          is_ignored_int32,
          ::generated_tests::greater_equal::get_examples_simple_int32());
}

TEST_F(ValidationTest, greater_equal_simple_int32) {
  const Model model = createTestModel_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_simple_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_float16();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_simple_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::greater_equal::get_examples_simple_float16());
}

TEST_F(ValidationTest, greater_equal_simple_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_simple_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_relaxed();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_simple_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::greater_equal::get_examples_simple_relaxed());
}

TEST_F(ValidationTest, greater_equal_simple_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_simple_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_dynamic_output_shape();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, greater_equal_simple_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::greater_equal::get_examples_simple_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, greater_equal_simple_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_simple_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_dynamic_output_shape_int32();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_int32();
bool is_ignored_dynamic_output_shape_int32(int);

TEST_F(DynamicOutputShapeTest, greater_equal_simple_dynamic_output_shape_int32) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32,
          is_ignored_dynamic_output_shape_int32,
          ::generated_tests::greater_equal::get_examples_simple_dynamic_output_shape_int32(), true);
}

TEST_F(ValidationTest, greater_equal_simple_dynamic_output_shape_int32) {
  const Model model = createTestModel_dynamic_output_shape_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_simple_dynamic_output_shape_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_dynamic_output_shape_float16();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, greater_equal_simple_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::greater_equal::get_examples_simple_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, greater_equal_simple_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_simple_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_dynamic_output_shape_relaxed();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, greater_equal_simple_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::greater_equal::get_examples_simple_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, greater_equal_simple_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_simple_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_broadcast) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::greater_equal::get_examples_broadcast());
}

TEST_F(ValidationTest, greater_equal_broadcast) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_broadcast());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_int32();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_int32_2();
bool is_ignored_int32_2(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_broadcast_int32) {
  Execute(device,
          createTestModel_int32_2,
          is_ignored_int32_2,
          ::generated_tests::greater_equal::get_examples_broadcast_int32());
}

TEST_F(ValidationTest, greater_equal_broadcast_int32) {
  const Model model = createTestModel_int32_2();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_broadcast_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_float16();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_broadcast_float16) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::greater_equal::get_examples_broadcast_float16());
}

TEST_F(ValidationTest, greater_equal_broadcast_float16) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_broadcast_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_relaxed();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_broadcast_relaxed) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::greater_equal::get_examples_broadcast_relaxed());
}

TEST_F(ValidationTest, greater_equal_broadcast_relaxed) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_broadcast_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_dynamic_output_shape();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, greater_equal_broadcast_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::greater_equal::get_examples_broadcast_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, greater_equal_broadcast_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_broadcast_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_dynamic_output_shape_int32();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_int32_2();
bool is_ignored_dynamic_output_shape_int32_2(int);

TEST_F(DynamicOutputShapeTest, greater_equal_broadcast_dynamic_output_shape_int32) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_2,
          is_ignored_dynamic_output_shape_int32_2,
          ::generated_tests::greater_equal::get_examples_broadcast_dynamic_output_shape_int32(), true);
}

TEST_F(ValidationTest, greater_equal_broadcast_dynamic_output_shape_int32) {
  const Model model = createTestModel_dynamic_output_shape_int32_2();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_broadcast_dynamic_output_shape_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_dynamic_output_shape_float16();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_float16_2();
bool is_ignored_dynamic_output_shape_float16_2(int);

TEST_F(DynamicOutputShapeTest, greater_equal_broadcast_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_2,
          is_ignored_dynamic_output_shape_float16_2,
          ::generated_tests::greater_equal::get_examples_broadcast_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, greater_equal_broadcast_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_broadcast_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_dynamic_output_shape_relaxed();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, greater_equal_broadcast_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::greater_equal::get_examples_broadcast_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, greater_equal_broadcast_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_broadcast_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_scale();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_quantized_different_scale) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::greater_equal::get_examples_quantized_different_scale());
}

TEST_F(ValidationTest, greater_equal_quantized_different_scale) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_quantized_different_scale());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_scale_dynamic_output_shape();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, greater_equal_quantized_different_scale_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::greater_equal::get_examples_quantized_different_scale_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, greater_equal_quantized_different_scale_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_quantized_different_scale_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_zero_point();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_quantized_different_zero_point) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::greater_equal::get_examples_quantized_different_zero_point());
}

TEST_F(ValidationTest, greater_equal_quantized_different_zero_point) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_quantized_different_zero_point());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_zero_point_dynamic_output_shape();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, greater_equal_quantized_different_zero_point_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::greater_equal::get_examples_quantized_different_zero_point_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, greater_equal_quantized_different_zero_point_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_quantized_different_zero_point_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_second_input_if_requantized();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_5();
bool is_ignored_5(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_quantized_overflow_second_input_if_requantized) {
  Execute(device,
          createTestModel_5,
          is_ignored_5,
          ::generated_tests::greater_equal::get_examples_quantized_overflow_second_input_if_requantized());
}

TEST_F(ValidationTest, greater_equal_quantized_overflow_second_input_if_requantized) {
  const Model model = createTestModel_5();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_quantized_overflow_second_input_if_requantized());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_second_input_if_requantized_dynamic_output_shape();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_5();
bool is_ignored_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, greater_equal_quantized_overflow_second_input_if_requantized_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_5,
          is_ignored_dynamic_output_shape_5,
          ::generated_tests::greater_equal::get_examples_quantized_overflow_second_input_if_requantized_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, greater_equal_quantized_overflow_second_input_if_requantized_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_quantized_overflow_second_input_if_requantized_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_first_input_if_requantized();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_6();
bool is_ignored_6(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_quantized_overflow_first_input_if_requantized) {
  Execute(device,
          createTestModel_6,
          is_ignored_6,
          ::generated_tests::greater_equal::get_examples_quantized_overflow_first_input_if_requantized());
}

TEST_F(ValidationTest, greater_equal_quantized_overflow_first_input_if_requantized) {
  const Model model = createTestModel_6();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_quantized_overflow_first_input_if_requantized());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_first_input_if_requantized_dynamic_output_shape();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_6();
bool is_ignored_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, greater_equal_quantized_overflow_first_input_if_requantized_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_6,
          is_ignored_dynamic_output_shape_6,
          ::generated_tests::greater_equal::get_examples_quantized_overflow_first_input_if_requantized_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, greater_equal_quantized_overflow_first_input_if_requantized_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_quantized_overflow_first_input_if_requantized_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_boolean();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_7();
bool is_ignored_7(int);

TEST_F(NeuralnetworksHidlTest, greater_equal_boolean) {
  Execute(device,
          createTestModel_7,
          is_ignored_7,
          ::generated_tests::greater_equal::get_examples_boolean());
}

TEST_F(ValidationTest, greater_equal_boolean) {
  const Model model = createTestModel_7();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_boolean());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

namespace generated_tests::greater_equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_boolean_dynamic_output_shape();

} // namespace generated_tests::greater_equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal {

Model createTestModel_dynamic_output_shape_7();
bool is_ignored_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, greater_equal_boolean_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_7,
          is_ignored_dynamic_output_shape_7,
          ::generated_tests::greater_equal::get_examples_boolean_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, greater_equal_boolean_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::greater_equal::get_examples_boolean_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::greater_equal

