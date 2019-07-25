// Generated from mul_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, mul_v1_2) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::mul_v1_2::get_examples());
}

TEST_F(ValidationTest, mul_v1_2) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, mul_v1_2_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::mul_v1_2::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, mul_v1_2_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, mul_v1_2_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::mul_v1_2::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, mul_v1_2_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, mul_v1_2_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::mul_v1_2::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, mul_v1_2_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, mul_v1_2_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::mul_v1_2::get_examples_2());
}

TEST_F(ValidationTest, mul_v1_2_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, mul_v1_2_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::mul_v1_2::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, mul_v1_2_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_2();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, mul_v1_2_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::mul_v1_2::get_examples_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, mul_v1_2_all_inputs_as_internal_2) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, mul_v1_2_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::mul_v1_2::get_examples_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, mul_v1_2_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_zero_sized();
bool is_ignored_zero_sized(int);

TEST_F(NeuralnetworksHidlTest, mul_v1_2_zero_sized) {
  Execute(device,
          createTestModel_zero_sized,
          is_ignored_zero_sized,
          ::generated_tests::mul_v1_2::get_examples_zero_sized());
}

TEST_F(ValidationTest, mul_v1_2_zero_sized) {
  const Model model = createTestModel_zero_sized();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_zero_sized());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_dynamic_output_shape();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_zero_sized_dynamic_output_shape();
bool is_ignored_zero_sized_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, mul_v1_2_zero_sized_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_dynamic_output_shape,
          is_ignored_zero_sized_dynamic_output_shape,
          ::generated_tests::mul_v1_2::get_examples_zero_sized_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, mul_v1_2_zero_sized_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_zero_sized_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_zero_sized_relaxed();
bool is_ignored_zero_sized_relaxed(int);

TEST_F(NeuralnetworksHidlTest, mul_v1_2_zero_sized_relaxed) {
  Execute(device,
          createTestModel_zero_sized_relaxed,
          is_ignored_zero_sized_relaxed,
          ::generated_tests::mul_v1_2::get_examples_zero_sized_relaxed());
}

TEST_F(ValidationTest, mul_v1_2_zero_sized_relaxed) {
  const Model model = createTestModel_zero_sized_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_zero_sized_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_relaxed_dynamic_output_shape();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_zero_sized_relaxed_dynamic_output_shape();
bool is_ignored_zero_sized_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, mul_v1_2_zero_sized_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_relaxed_dynamic_output_shape,
          is_ignored_zero_sized_relaxed_dynamic_output_shape,
          ::generated_tests::mul_v1_2::get_examples_zero_sized_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, mul_v1_2_zero_sized_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_zero_sized_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_quant8();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_zero_sized_quant8();
bool is_ignored_zero_sized_quant8(int);

TEST_F(NeuralnetworksHidlTest, mul_v1_2_zero_sized_quant8) {
  Execute(device,
          createTestModel_zero_sized_quant8,
          is_ignored_zero_sized_quant8,
          ::generated_tests::mul_v1_2::get_examples_zero_sized_quant8());
}

TEST_F(ValidationTest, mul_v1_2_zero_sized_quant8) {
  const Model model = createTestModel_zero_sized_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_zero_sized_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_quant8_dynamic_output_shape();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_zero_sized_quant8_dynamic_output_shape();
bool is_ignored_zero_sized_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, mul_v1_2_zero_sized_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_quant8_dynamic_output_shape,
          is_ignored_zero_sized_quant8_dynamic_output_shape,
          ::generated_tests::mul_v1_2::get_examples_zero_sized_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, mul_v1_2_zero_sized_quant8_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_zero_sized_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_zero_sized_float16();
bool is_ignored_zero_sized_float16(int);

TEST_F(NeuralnetworksHidlTest, mul_v1_2_zero_sized_float16) {
  Execute(device,
          createTestModel_zero_sized_float16,
          is_ignored_zero_sized_float16,
          ::generated_tests::mul_v1_2::get_examples_zero_sized_float16());
}

TEST_F(ValidationTest, mul_v1_2_zero_sized_float16) {
  const Model model = createTestModel_zero_sized_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_zero_sized_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

namespace generated_tests::mul_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_zero_sized_float16_dynamic_output_shape();

} // namespace generated_tests::mul_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2 {

Model createTestModel_zero_sized_float16_dynamic_output_shape();
bool is_ignored_zero_sized_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, mul_v1_2_zero_sized_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_zero_sized_float16_dynamic_output_shape,
          is_ignored_zero_sized_float16_dynamic_output_shape,
          ::generated_tests::mul_v1_2::get_examples_zero_sized_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, mul_v1_2_zero_sized_float16_dynamic_output_shape) {
  const Model model = createTestModel_zero_sized_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::mul_v1_2::get_examples_zero_sized_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::mul_v1_2

