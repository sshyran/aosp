// Generated from minimum.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, minimum_simple) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::minimum::get_examples_simple());
}

TEST_F(ValidationTest, minimum_simple) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, minimum_simple_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::minimum::get_examples_simple_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_simple_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_all_inputs_as_internal();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, minimum_simple_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::minimum::get_examples_simple_all_inputs_as_internal());
}

TEST_F(ValidationTest, minimum_simple_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, minimum_simple_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::minimum::get_examples_simple_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_simple_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_relaxed();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, minimum_simple_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::minimum::get_examples_simple_relaxed());
}

TEST_F(ValidationTest, minimum_simple_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_relaxed_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, minimum_simple_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::minimum::get_examples_simple_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_simple_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_relaxed_all_inputs_as_internal();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, minimum_simple_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::minimum::get_examples_simple_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, minimum_simple_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, minimum_simple_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::minimum::get_examples_simple_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_simple_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_float16();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, minimum_simple_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::minimum::get_examples_simple_float16());
}

TEST_F(ValidationTest, minimum_simple_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_float16_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, minimum_simple_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::minimum::get_examples_simple_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_simple_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_float16_all_inputs_as_internal();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, minimum_simple_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::minimum::get_examples_simple_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, minimum_simple_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, minimum_simple_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::minimum::get_examples_simple_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_simple_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_int32();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_int32();
bool is_ignored_int32(int);

TEST_F(NeuralnetworksHidlTest, minimum_simple_int32) {
  Execute(device,
          createTestModel_int32,
          is_ignored_int32,
          ::generated_tests::minimum::get_examples_simple_int32());
}

TEST_F(ValidationTest, minimum_simple_int32) {
  const Model model = createTestModel_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_int32_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_int32_dynamic_output_shape();
bool is_ignored_int32_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, minimum_simple_int32_dynamic_output_shape) {
  Execute(device,
          createTestModel_int32_dynamic_output_shape,
          is_ignored_int32_dynamic_output_shape,
          ::generated_tests::minimum::get_examples_simple_int32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_simple_int32_dynamic_output_shape) {
  const Model model = createTestModel_int32_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_int32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_quant8();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, minimum_simple_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::minimum::get_examples_simple_quant8());
}

TEST_F(ValidationTest, minimum_simple_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_quant8_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_dynamic_output_shape();
bool is_ignored_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, minimum_simple_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape,
          is_ignored_quant8_dynamic_output_shape,
          ::generated_tests::minimum::get_examples_simple_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_simple_quant8_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_quant8_all_inputs_as_internal();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_all_inputs_as_internal();
bool is_ignored_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, minimum_simple_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal,
          is_ignored_quant8_all_inputs_as_internal,
          ::generated_tests::minimum::get_examples_simple_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, minimum_simple_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, minimum_simple_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::minimum::get_examples_simple_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_simple_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_simple_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, minimum_broadcast) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::minimum::get_examples_broadcast());
}

TEST_F(ValidationTest, minimum_broadcast) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, minimum_broadcast_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::minimum::get_examples_broadcast_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_broadcast_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_all_inputs_as_internal();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, minimum_broadcast_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::minimum::get_examples_broadcast_all_inputs_as_internal());
}

TEST_F(ValidationTest, minimum_broadcast_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, minimum_broadcast_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::minimum::get_examples_broadcast_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_broadcast_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_relaxed();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, minimum_broadcast_relaxed) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::minimum::get_examples_broadcast_relaxed());
}

TEST_F(ValidationTest, minimum_broadcast_relaxed) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_relaxed_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, minimum_broadcast_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::minimum::get_examples_broadcast_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_broadcast_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_relaxed_all_inputs_as_internal();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_all_inputs_as_internal_2();
bool is_ignored_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, minimum_broadcast_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_2,
          is_ignored_relaxed_all_inputs_as_internal_2,
          ::generated_tests::minimum::get_examples_broadcast_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, minimum_broadcast_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, minimum_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::minimum::get_examples_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_float16();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, minimum_broadcast_float16) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::minimum::get_examples_broadcast_float16());
}

TEST_F(ValidationTest, minimum_broadcast_float16) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_float16_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_dynamic_output_shape_2();
bool is_ignored_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, minimum_broadcast_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_2,
          is_ignored_float16_dynamic_output_shape_2,
          ::generated_tests::minimum::get_examples_broadcast_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_broadcast_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_float16_all_inputs_as_internal();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_all_inputs_as_internal_2();
bool is_ignored_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, minimum_broadcast_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_2,
          is_ignored_float16_all_inputs_as_internal_2,
          ::generated_tests::minimum::get_examples_broadcast_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, minimum_broadcast_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, minimum_broadcast_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::minimum::get_examples_broadcast_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_broadcast_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_int32();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_int32_2();
bool is_ignored_int32_2(int);

TEST_F(NeuralnetworksHidlTest, minimum_broadcast_int32) {
  Execute(device,
          createTestModel_int32_2,
          is_ignored_int32_2,
          ::generated_tests::minimum::get_examples_broadcast_int32());
}

TEST_F(ValidationTest, minimum_broadcast_int32) {
  const Model model = createTestModel_int32_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_int32_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_int32_dynamic_output_shape_2();
bool is_ignored_int32_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, minimum_broadcast_int32_dynamic_output_shape) {
  Execute(device,
          createTestModel_int32_dynamic_output_shape_2,
          is_ignored_int32_dynamic_output_shape_2,
          ::generated_tests::minimum::get_examples_broadcast_int32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_broadcast_int32_dynamic_output_shape) {
  const Model model = createTestModel_int32_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_int32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_quant8();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, minimum_broadcast_quant8) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::minimum::get_examples_broadcast_quant8());
}

TEST_F(ValidationTest, minimum_broadcast_quant8) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_quant8_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_dynamic_output_shape_2();
bool is_ignored_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, minimum_broadcast_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape_2,
          is_ignored_quant8_dynamic_output_shape_2,
          ::generated_tests::minimum::get_examples_broadcast_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_broadcast_quant8_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_quant8_all_inputs_as_internal();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_all_inputs_as_internal_2();
bool is_ignored_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, minimum_broadcast_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_2,
          is_ignored_quant8_all_inputs_as_internal_2,
          ::generated_tests::minimum::get_examples_broadcast_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, minimum_broadcast_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, minimum_broadcast_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::minimum::get_examples_broadcast_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_broadcast_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_broadcast_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_overflow();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, minimum_overflow) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::minimum::get_examples_overflow());
}

TEST_F(ValidationTest, minimum_overflow) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_overflow());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_overflow_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, minimum_overflow_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::minimum::get_examples_overflow_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_overflow_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_overflow_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_overflow_all_inputs_as_internal();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_3();
bool is_ignored_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, minimum_overflow_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_3,
          is_ignored_all_inputs_as_internal_3,
          ::generated_tests::minimum::get_examples_overflow_all_inputs_as_internal());
}

TEST_F(ValidationTest, minimum_overflow_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_overflow_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

namespace generated_tests::minimum {

std::vector<::test_helper::MixedTypedExample>& get_examples_overflow_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::minimum

namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, minimum_overflow_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::minimum::get_examples_overflow_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, minimum_overflow_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::minimum::get_examples_overflow_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::minimum

