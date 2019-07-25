// Generated from equal.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, equal_simple) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::equal::get_examples_simple());
}

TEST_F(ValidationTest, equal_simple) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, equal_simple_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::equal::get_examples_simple_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_simple_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, equal_simple_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::equal::get_examples_simple_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_simple_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, equal_simple_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::equal::get_examples_simple_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_simple_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_int32();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_int32();
bool is_ignored_int32(int);

TEST_F(NeuralnetworksHidlTest, equal_simple_int32) {
  Execute(device,
          createTestModel_int32,
          is_ignored_int32,
          ::generated_tests::equal::get_examples_simple_int32());
}

TEST_F(ValidationTest, equal_simple_int32) {
  const Model model = createTestModel_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_int32_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_int32_dynamic_output_shape();
bool is_ignored_int32_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, equal_simple_int32_dynamic_output_shape) {
  Execute(device,
          createTestModel_int32_dynamic_output_shape,
          is_ignored_int32_dynamic_output_shape,
          ::generated_tests::equal::get_examples_simple_int32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_simple_int32_dynamic_output_shape) {
  const Model model = createTestModel_int32_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_int32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_float16();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, equal_simple_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::equal::get_examples_simple_float16());
}

TEST_F(ValidationTest, equal_simple_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_float16_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, equal_simple_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::equal::get_examples_simple_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_simple_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_float16_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, equal_simple_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::equal::get_examples_simple_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_simple_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, equal_simple_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::equal::get_examples_simple_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_simple_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_relaxed();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, equal_simple_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::equal::get_examples_simple_relaxed());
}

TEST_F(ValidationTest, equal_simple_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_relaxed_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, equal_simple_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::equal::get_examples_simple_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_simple_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_relaxed_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, equal_simple_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::equal::get_examples_simple_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_simple_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, equal_simple_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::equal::get_examples_simple_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_simple_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_simple_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, equal_broadcast) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::equal::get_examples_broadcast());
}

TEST_F(ValidationTest, equal_broadcast) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, equal_broadcast_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::equal::get_examples_broadcast_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_broadcast_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, equal_broadcast_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::equal::get_examples_broadcast_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_broadcast_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, equal_broadcast_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::equal::get_examples_broadcast_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_broadcast_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_int32();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_int32_2();
bool is_ignored_int32_2(int);

TEST_F(NeuralnetworksHidlTest, equal_broadcast_int32) {
  Execute(device,
          createTestModel_int32_2,
          is_ignored_int32_2,
          ::generated_tests::equal::get_examples_broadcast_int32());
}

TEST_F(ValidationTest, equal_broadcast_int32) {
  const Model model = createTestModel_int32_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_int32_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_int32_dynamic_output_shape_2();
bool is_ignored_int32_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, equal_broadcast_int32_dynamic_output_shape) {
  Execute(device,
          createTestModel_int32_dynamic_output_shape_2,
          is_ignored_int32_dynamic_output_shape_2,
          ::generated_tests::equal::get_examples_broadcast_int32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_broadcast_int32_dynamic_output_shape) {
  const Model model = createTestModel_int32_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_int32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_float16();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, equal_broadcast_float16) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::equal::get_examples_broadcast_float16());
}

TEST_F(ValidationTest, equal_broadcast_float16) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_float16_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_float16_dynamic_output_shape_2();
bool is_ignored_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, equal_broadcast_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_2,
          is_ignored_float16_dynamic_output_shape_2,
          ::generated_tests::equal::get_examples_broadcast_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_broadcast_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_float16_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_float16_all_inputs_as_internal_2();
bool is_ignored_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, equal_broadcast_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_2,
          is_ignored_float16_all_inputs_as_internal_2,
          ::generated_tests::equal::get_examples_broadcast_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_broadcast_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, equal_broadcast_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::equal::get_examples_broadcast_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_broadcast_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_relaxed();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, equal_broadcast_relaxed) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::equal::get_examples_broadcast_relaxed());
}

TEST_F(ValidationTest, equal_broadcast_relaxed) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_relaxed_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, equal_broadcast_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::equal::get_examples_broadcast_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_broadcast_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_relaxed_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_relaxed_all_inputs_as_internal_2();
bool is_ignored_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, equal_broadcast_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_2,
          is_ignored_relaxed_all_inputs_as_internal_2,
          ::generated_tests::equal::get_examples_broadcast_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_broadcast_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, equal_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::equal::get_examples_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_scale();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, equal_quantized_different_scale) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::equal::get_examples_quantized_different_scale());
}

TEST_F(ValidationTest, equal_quantized_different_scale) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_different_scale());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_scale_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, equal_quantized_different_scale_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::equal::get_examples_quantized_different_scale_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_quantized_different_scale_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_different_scale_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_scale_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_3();
bool is_ignored_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, equal_quantized_different_scale_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_3,
          is_ignored_all_inputs_as_internal_3,
          ::generated_tests::equal::get_examples_quantized_different_scale_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_quantized_different_scale_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_different_scale_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_scale_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, equal_quantized_different_scale_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::equal::get_examples_quantized_different_scale_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_quantized_different_scale_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_different_scale_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_zero_point();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, equal_quantized_different_zero_point) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::equal::get_examples_quantized_different_zero_point());
}

TEST_F(ValidationTest, equal_quantized_different_zero_point) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_different_zero_point());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_zero_point_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, equal_quantized_different_zero_point_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::equal::get_examples_quantized_different_zero_point_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_quantized_different_zero_point_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_different_zero_point_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_zero_point_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_4();
bool is_ignored_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, equal_quantized_different_zero_point_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_4,
          is_ignored_all_inputs_as_internal_4,
          ::generated_tests::equal::get_examples_quantized_different_zero_point_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_quantized_different_zero_point_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_different_zero_point_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_different_zero_point_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, equal_quantized_different_zero_point_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::equal::get_examples_quantized_different_zero_point_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_quantized_different_zero_point_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_different_zero_point_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_second_input_if_requantized();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_5();
bool is_ignored_5(int);

TEST_F(NeuralnetworksHidlTest, equal_quantized_overflow_second_input_if_requantized) {
  Execute(device,
          createTestModel_5,
          is_ignored_5,
          ::generated_tests::equal::get_examples_quantized_overflow_second_input_if_requantized());
}

TEST_F(ValidationTest, equal_quantized_overflow_second_input_if_requantized) {
  const Model model = createTestModel_5();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_overflow_second_input_if_requantized());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_second_input_if_requantized_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_dynamic_output_shape_5();
bool is_ignored_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, equal_quantized_overflow_second_input_if_requantized_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_5,
          is_ignored_dynamic_output_shape_5,
          ::generated_tests::equal::get_examples_quantized_overflow_second_input_if_requantized_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_quantized_overflow_second_input_if_requantized_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_overflow_second_input_if_requantized_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_second_input_if_requantized_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_5();
bool is_ignored_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, equal_quantized_overflow_second_input_if_requantized_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_5,
          is_ignored_all_inputs_as_internal_5,
          ::generated_tests::equal::get_examples_quantized_overflow_second_input_if_requantized_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_quantized_overflow_second_input_if_requantized_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_overflow_second_input_if_requantized_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_second_input_if_requantized_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, equal_quantized_overflow_second_input_if_requantized_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::equal::get_examples_quantized_overflow_second_input_if_requantized_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_quantized_overflow_second_input_if_requantized_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_overflow_second_input_if_requantized_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_first_input_if_requantized();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_6();
bool is_ignored_6(int);

TEST_F(NeuralnetworksHidlTest, equal_quantized_overflow_first_input_if_requantized) {
  Execute(device,
          createTestModel_6,
          is_ignored_6,
          ::generated_tests::equal::get_examples_quantized_overflow_first_input_if_requantized());
}

TEST_F(ValidationTest, equal_quantized_overflow_first_input_if_requantized) {
  const Model model = createTestModel_6();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_overflow_first_input_if_requantized());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_first_input_if_requantized_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_dynamic_output_shape_6();
bool is_ignored_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, equal_quantized_overflow_first_input_if_requantized_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_6,
          is_ignored_dynamic_output_shape_6,
          ::generated_tests::equal::get_examples_quantized_overflow_first_input_if_requantized_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_quantized_overflow_first_input_if_requantized_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_overflow_first_input_if_requantized_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_first_input_if_requantized_all_inputs_as_internal();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_6();
bool is_ignored_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, equal_quantized_overflow_first_input_if_requantized_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_6,
          is_ignored_all_inputs_as_internal_6,
          ::generated_tests::equal::get_examples_quantized_overflow_first_input_if_requantized_all_inputs_as_internal());
}

TEST_F(ValidationTest, equal_quantized_overflow_first_input_if_requantized_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_overflow_first_input_if_requantized_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_quantized_overflow_first_input_if_requantized_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, equal_quantized_overflow_first_input_if_requantized_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::equal::get_examples_quantized_overflow_first_input_if_requantized_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_quantized_overflow_first_input_if_requantized_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_quantized_overflow_first_input_if_requantized_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_boolean();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_7();
bool is_ignored_7(int);

TEST_F(NeuralnetworksHidlTest, equal_boolean) {
  Execute(device,
          createTestModel_7,
          is_ignored_7,
          ::generated_tests::equal::get_examples_boolean());
}

TEST_F(ValidationTest, equal_boolean) {
  const Model model = createTestModel_7();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_boolean());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

namespace generated_tests::equal {

std::vector<::test_helper::MixedTypedExample>& get_examples_boolean_dynamic_output_shape();

} // namespace generated_tests::equal

namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal {

Model createTestModel_dynamic_output_shape_7();
bool is_ignored_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, equal_boolean_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_7,
          is_ignored_dynamic_output_shape_7,
          ::generated_tests::equal::get_examples_boolean_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, equal_boolean_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::equal::get_examples_boolean_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::equal

