// Generated from cast.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float16();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_float16) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::cast::get_examples_float16_to_float16());
}

TEST_F(ValidationTest, cast_float16_to_float16) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float16_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::cast::get_examples_float16_to_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_float16_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float16_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::cast::get_examples_float16_to_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float16_to_float16_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::cast::get_examples_float16_to_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_float32) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::cast::get_examples_float16_to_float32());
}

TEST_F(ValidationTest, cast_float16_to_float32) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float32_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_float32_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::cast::get_examples_float16_to_float32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_float32_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_float32_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::cast::get_examples_float16_to_float32_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float16_to_float32_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float32_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float32_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_float32_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::cast::get_examples_float16_to_float32_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_float32_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float32_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_float32_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::cast::get_examples_float16_to_float32_relaxed());
}

TEST_F(ValidationTest, cast_float16_to_float32_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float32_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float32_relaxed_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_float32_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::cast::get_examples_float16_to_float32_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_float32_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float32_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float32_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_float32_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::cast::get_examples_float16_to_float32_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float16_to_float32_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float32_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::cast::get_examples_float16_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_int32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_int32) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::cast::get_examples_float16_to_int32());
}

TEST_F(ValidationTest, cast_float16_to_int32) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_int32_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_int32_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::cast::get_examples_float16_to_int32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_int32_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_int32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_int32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_3();
bool is_ignored_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_int32_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_3,
          is_ignored_all_inputs_as_internal_3,
          ::generated_tests::cast::get_examples_float16_to_int32_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float16_to_int32_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_int32_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_int32_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_int32_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::cast::get_examples_float16_to_int32_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_int32_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_int32_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_quant8();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_quant8) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::cast::get_examples_float16_to_quant8());
}

TEST_F(ValidationTest, cast_float16_to_quant8) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_quant8_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::cast::get_examples_float16_to_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_quant8_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_4();
bool is_ignored_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_4,
          is_ignored_all_inputs_as_internal_4,
          ::generated_tests::cast::get_examples_float16_to_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float16_to_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::cast::get_examples_float16_to_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float16();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_5();
bool is_ignored_5(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_float16) {
  Execute(device,
          createTestModel_5,
          is_ignored_5,
          ::generated_tests::cast::get_examples_float32_to_float16());
}

TEST_F(ValidationTest, cast_float32_to_float16) {
  const Model model = createTestModel_5();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float16_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_5();
bool is_ignored_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_5,
          is_ignored_dynamic_output_shape_5,
          ::generated_tests::cast::get_examples_float32_to_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_float16_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float16_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_5();
bool is_ignored_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_5,
          is_ignored_all_inputs_as_internal_5,
          ::generated_tests::cast::get_examples_float32_to_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_float16_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::cast::get_examples_float32_to_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float16_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_float16_relaxed) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::cast::get_examples_float32_to_float16_relaxed());
}

TEST_F(ValidationTest, cast_float32_to_float16_relaxed) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float16_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float16_relaxed_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_float16_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::cast::get_examples_float32_to_float16_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_float16_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float16_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float16_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_2();
bool is_ignored_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_float16_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_2,
          is_ignored_relaxed_all_inputs_as_internal_2,
          ::generated_tests::cast::get_examples_float32_to_float16_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_float16_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float16_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float16_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_float16_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::cast::get_examples_float32_to_float16_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_float16_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float16_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_6();
bool is_ignored_6(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_float32) {
  Execute(device,
          createTestModel_6,
          is_ignored_6,
          ::generated_tests::cast::get_examples_float32_to_float32());
}

TEST_F(ValidationTest, cast_float32_to_float32) {
  const Model model = createTestModel_6();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float32_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_6();
bool is_ignored_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_float32_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_6,
          is_ignored_dynamic_output_shape_6,
          ::generated_tests::cast::get_examples_float32_to_float32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_float32_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_6();
bool is_ignored_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_float32_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_6,
          is_ignored_all_inputs_as_internal_6,
          ::generated_tests::cast::get_examples_float32_to_float32_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_float32_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float32_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float32_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_float32_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::cast::get_examples_float32_to_float32_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_float32_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float32_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_3();
bool is_ignored_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_float32_relaxed) {
  Execute(device,
          createTestModel_relaxed_3,
          is_ignored_relaxed_3,
          ::generated_tests::cast::get_examples_float32_to_float32_relaxed());
}

TEST_F(ValidationTest, cast_float32_to_float32_relaxed) {
  const Model model = createTestModel_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float32_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float32_relaxed_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_3();
bool is_ignored_relaxed_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_float32_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_3,
          is_ignored_relaxed_dynamic_output_shape_3,
          ::generated_tests::cast::get_examples_float32_to_float32_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_float32_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float32_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float32_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_3();
bool is_ignored_relaxed_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_float32_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_3,
          is_ignored_relaxed_all_inputs_as_internal_3,
          ::generated_tests::cast::get_examples_float32_to_float32_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_float32_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float32_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::cast::get_examples_float32_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_int32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_7();
bool is_ignored_7(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_int32) {
  Execute(device,
          createTestModel_7,
          is_ignored_7,
          ::generated_tests::cast::get_examples_float32_to_int32());
}

TEST_F(ValidationTest, cast_float32_to_int32) {
  const Model model = createTestModel_7();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_int32_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_7();
bool is_ignored_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_int32_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_7,
          is_ignored_dynamic_output_shape_7,
          ::generated_tests::cast::get_examples_float32_to_int32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_int32_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_int32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_int32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_7();
bool is_ignored_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_int32_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_7,
          is_ignored_all_inputs_as_internal_7,
          ::generated_tests::cast::get_examples_float32_to_int32_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_int32_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_int32_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_int32_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_int32_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::cast::get_examples_float32_to_int32_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_int32_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_int32_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_int32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_4();
bool is_ignored_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_int32_relaxed) {
  Execute(device,
          createTestModel_relaxed_4,
          is_ignored_relaxed_4,
          ::generated_tests::cast::get_examples_float32_to_int32_relaxed());
}

TEST_F(ValidationTest, cast_float32_to_int32_relaxed) {
  const Model model = createTestModel_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_int32_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_int32_relaxed_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_4();
bool is_ignored_relaxed_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_int32_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_4,
          is_ignored_relaxed_dynamic_output_shape_4,
          ::generated_tests::cast::get_examples_float32_to_int32_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_int32_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_int32_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_int32_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_4();
bool is_ignored_relaxed_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_int32_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_4,
          is_ignored_relaxed_all_inputs_as_internal_4,
          ::generated_tests::cast::get_examples_float32_to_int32_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_int32_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_int32_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_int32_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_int32_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::cast::get_examples_float32_to_int32_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_int32_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_int32_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_8();
bool is_ignored_8(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_quant8) {
  Execute(device,
          createTestModel_8,
          is_ignored_8,
          ::generated_tests::cast::get_examples_float32_to_quant8());
}

TEST_F(ValidationTest, cast_float32_to_quant8) {
  const Model model = createTestModel_8();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_8();
bool is_ignored_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_8,
          is_ignored_dynamic_output_shape_8,
          ::generated_tests::cast::get_examples_float32_to_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_8();
bool is_ignored_all_inputs_as_internal_8(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_8,
          is_ignored_all_inputs_as_internal_8,
          ::generated_tests::cast::get_examples_float32_to_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_8();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_8();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_8,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_8,
          ::generated_tests::cast::get_examples_float32_to_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_5();
bool is_ignored_relaxed_5(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_quant8_relaxed) {
  Execute(device,
          createTestModel_relaxed_5,
          is_ignored_relaxed_5,
          ::generated_tests::cast::get_examples_float32_to_quant8_relaxed());
}

TEST_F(ValidationTest, cast_float32_to_quant8_relaxed) {
  const Model model = createTestModel_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_relaxed_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_5();
bool is_ignored_relaxed_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_5,
          is_ignored_relaxed_dynamic_output_shape_5,
          ::generated_tests::cast::get_examples_float32_to_quant8_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_5();
bool is_ignored_relaxed_all_inputs_as_internal_5(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_quant8_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_5,
          is_ignored_relaxed_all_inputs_as_internal_5,
          ::generated_tests::cast::get_examples_float32_to_quant8_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_quant8_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_5();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_5,
          ::generated_tests::cast::get_examples_float32_to_quant8_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_float16();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_9();
bool is_ignored_9(int);

TEST_F(NeuralnetworksHidlTest, cast_int32_to_float16) {
  Execute(device,
          createTestModel_9,
          is_ignored_9,
          ::generated_tests::cast::get_examples_int32_to_float16());
}

TEST_F(ValidationTest, cast_int32_to_float16) {
  const Model model = createTestModel_9();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_float16_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_9();
bool is_ignored_dynamic_output_shape_9(int);

TEST_F(DynamicOutputShapeTest, cast_int32_to_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_9,
          is_ignored_dynamic_output_shape_9,
          ::generated_tests::cast::get_examples_int32_to_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_int32_to_float16_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_9();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_float32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_10();
bool is_ignored_10(int);

TEST_F(NeuralnetworksHidlTest, cast_int32_to_float32) {
  Execute(device,
          createTestModel_10,
          is_ignored_10,
          ::generated_tests::cast::get_examples_int32_to_float32());
}

TEST_F(ValidationTest, cast_int32_to_float32) {
  const Model model = createTestModel_10();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_float32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_float32_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_10();
bool is_ignored_dynamic_output_shape_10(int);

TEST_F(DynamicOutputShapeTest, cast_int32_to_float32_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_10,
          is_ignored_dynamic_output_shape_10,
          ::generated_tests::cast::get_examples_int32_to_float32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_int32_to_float32_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_10();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_float32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_float32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_6();
bool is_ignored_relaxed_6(int);

TEST_F(NeuralnetworksHidlTest, cast_int32_to_float32_relaxed) {
  Execute(device,
          createTestModel_relaxed_6,
          is_ignored_relaxed_6,
          ::generated_tests::cast::get_examples_int32_to_float32_relaxed());
}

TEST_F(ValidationTest, cast_int32_to_float32_relaxed) {
  const Model model = createTestModel_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_float32_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_float32_relaxed_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_6();
bool is_ignored_relaxed_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, cast_int32_to_float32_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_6,
          is_ignored_relaxed_dynamic_output_shape_6,
          ::generated_tests::cast::get_examples_int32_to_float32_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_int32_to_float32_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_float32_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_int32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_11();
bool is_ignored_11(int);

TEST_F(NeuralnetworksHidlTest, cast_int32_to_int32) {
  Execute(device,
          createTestModel_11,
          is_ignored_11,
          ::generated_tests::cast::get_examples_int32_to_int32());
}

TEST_F(ValidationTest, cast_int32_to_int32) {
  const Model model = createTestModel_11();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_int32_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_11();
bool is_ignored_dynamic_output_shape_11(int);

TEST_F(DynamicOutputShapeTest, cast_int32_to_int32_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_11,
          is_ignored_dynamic_output_shape_11,
          ::generated_tests::cast::get_examples_int32_to_int32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_int32_to_int32_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_11();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_int32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_quant8();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_12();
bool is_ignored_12(int);

TEST_F(NeuralnetworksHidlTest, cast_int32_to_quant8) {
  Execute(device,
          createTestModel_12,
          is_ignored_12,
          ::generated_tests::cast::get_examples_int32_to_quant8());
}

TEST_F(ValidationTest, cast_int32_to_quant8) {
  const Model model = createTestModel_12();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_quant8_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_12();
bool is_ignored_dynamic_output_shape_12(int);

TEST_F(DynamicOutputShapeTest, cast_int32_to_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_12,
          is_ignored_dynamic_output_shape_12,
          ::generated_tests::cast::get_examples_int32_to_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_int32_to_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_12();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float16();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_13();
bool is_ignored_13(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_float16) {
  Execute(device,
          createTestModel_13,
          is_ignored_13,
          ::generated_tests::cast::get_examples_quant8_to_float16());
}

TEST_F(ValidationTest, cast_quant8_to_float16) {
  const Model model = createTestModel_13();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float16_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_13();
bool is_ignored_dynamic_output_shape_13(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_13,
          is_ignored_dynamic_output_shape_13,
          ::generated_tests::cast::get_examples_quant8_to_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float16_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_13();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float16_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_9();
bool is_ignored_all_inputs_as_internal_9(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_9,
          is_ignored_all_inputs_as_internal_9,
          ::generated_tests::cast::get_examples_quant8_to_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_quant8_to_float16_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_9();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_9();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_9(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_9,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_9,
          ::generated_tests::cast::get_examples_quant8_to_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_9();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_14();
bool is_ignored_14(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_float32) {
  Execute(device,
          createTestModel_14,
          is_ignored_14,
          ::generated_tests::cast::get_examples_quant8_to_float32());
}

TEST_F(ValidationTest, cast_quant8_to_float32) {
  const Model model = createTestModel_14();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float32_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_14();
bool is_ignored_dynamic_output_shape_14(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float32_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_14,
          is_ignored_dynamic_output_shape_14,
          ::generated_tests::cast::get_examples_quant8_to_float32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float32_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_14();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_10();
bool is_ignored_all_inputs_as_internal_10(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_float32_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_10,
          is_ignored_all_inputs_as_internal_10,
          ::generated_tests::cast::get_examples_quant8_to_float32_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_quant8_to_float32_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_10();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float32_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float32_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_10();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_10(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float32_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_10,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_10,
          ::generated_tests::cast::get_examples_quant8_to_float32_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float32_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_10();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float32_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float32_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_7();
bool is_ignored_relaxed_7(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_float32_relaxed) {
  Execute(device,
          createTestModel_relaxed_7,
          is_ignored_relaxed_7,
          ::generated_tests::cast::get_examples_quant8_to_float32_relaxed());
}

TEST_F(ValidationTest, cast_quant8_to_float32_relaxed) {
  const Model model = createTestModel_relaxed_7();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float32_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float32_relaxed_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_7();
bool is_ignored_relaxed_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float32_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_7,
          is_ignored_relaxed_dynamic_output_shape_7,
          ::generated_tests::cast::get_examples_quant8_to_float32_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float32_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float32_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float32_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_6();
bool is_ignored_relaxed_all_inputs_as_internal_6(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_float32_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_6,
          is_ignored_relaxed_all_inputs_as_internal_6,
          ::generated_tests::cast::get_examples_quant8_to_float32_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_quant8_to_float32_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_6();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float32_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_6,
          ::generated_tests::cast::get_examples_quant8_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_float32_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_int32();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_15();
bool is_ignored_15(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_int32) {
  Execute(device,
          createTestModel_15,
          is_ignored_15,
          ::generated_tests::cast::get_examples_quant8_to_int32());
}

TEST_F(ValidationTest, cast_quant8_to_int32) {
  const Model model = createTestModel_15();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_int32_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_15();
bool is_ignored_dynamic_output_shape_15(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_int32_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_15,
          is_ignored_dynamic_output_shape_15,
          ::generated_tests::cast::get_examples_quant8_to_int32_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_int32_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_15();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_int32_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_int32_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_11();
bool is_ignored_all_inputs_as_internal_11(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_int32_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_11,
          is_ignored_all_inputs_as_internal_11,
          ::generated_tests::cast::get_examples_quant8_to_int32_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_quant8_to_int32_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_11();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_int32_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_int32_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_11();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_11(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_int32_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_11,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_11,
          ::generated_tests::cast::get_examples_quant8_to_int32_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_int32_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_11();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_int32_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_quant8();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_16();
bool is_ignored_16(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_quant8) {
  Execute(device,
          createTestModel_16,
          is_ignored_16,
          ::generated_tests::cast::get_examples_quant8_to_quant8());
}

TEST_F(ValidationTest, cast_quant8_to_quant8) {
  const Model model = createTestModel_16();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_quant8_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_16();
bool is_ignored_dynamic_output_shape_16(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_16,
          is_ignored_dynamic_output_shape_16,
          ::generated_tests::cast::get_examples_quant8_to_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_quant8_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_16();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_quant8_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_12();
bool is_ignored_all_inputs_as_internal_12(int);

TEST_F(NeuralnetworksHidlTest, cast_quant8_to_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_12,
          is_ignored_all_inputs_as_internal_12,
          ::generated_tests::cast::get_examples_quant8_to_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_quant8_to_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_12();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_to_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_12();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_12(int);

TEST_F(DynamicOutputShapeTest, cast_quant8_to_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_12,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_12,
          ::generated_tests::cast::get_examples_quant8_to_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_quant8_to_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_12();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_quant8_to_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_quant8_overflow();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_17();
bool is_ignored_17(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_quant8_overflow) {
  Execute(device,
          createTestModel_17,
          is_ignored_17,
          ::generated_tests::cast::get_examples_float16_to_quant8_overflow());
}

TEST_F(ValidationTest, cast_float16_to_quant8_overflow) {
  const Model model = createTestModel_17();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_quant8_overflow());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_quant8_overflow_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_17();
bool is_ignored_dynamic_output_shape_17(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_quant8_overflow_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_17,
          is_ignored_dynamic_output_shape_17,
          ::generated_tests::cast::get_examples_float16_to_quant8_overflow_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_quant8_overflow_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_17();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_quant8_overflow_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_quant8_overflow_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_13();
bool is_ignored_all_inputs_as_internal_13(int);

TEST_F(NeuralnetworksHidlTest, cast_float16_to_quant8_overflow_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_13,
          is_ignored_all_inputs_as_internal_13,
          ::generated_tests::cast::get_examples_float16_to_quant8_overflow_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float16_to_quant8_overflow_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_13();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_quant8_overflow_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_13();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_13(int);

TEST_F(DynamicOutputShapeTest, cast_float16_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_13,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_13,
          ::generated_tests::cast::get_examples_float16_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float16_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_13();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float16_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_overflow();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_18();
bool is_ignored_18(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_quant8_overflow) {
  Execute(device,
          createTestModel_18,
          is_ignored_18,
          ::generated_tests::cast::get_examples_float32_to_quant8_overflow());
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow) {
  const Model model = createTestModel_18();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_overflow());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_overflow_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_18();
bool is_ignored_dynamic_output_shape_18(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_overflow_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_18,
          is_ignored_dynamic_output_shape_18,
          ::generated_tests::cast::get_examples_float32_to_quant8_overflow_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_18();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_overflow_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_overflow_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_14();
bool is_ignored_all_inputs_as_internal_14(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_quant8_overflow_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal_14,
          is_ignored_all_inputs_as_internal_14,
          ::generated_tests::cast::get_examples_float32_to_quant8_overflow_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal_14();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_overflow_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_14();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_14(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_14,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_14,
          ::generated_tests::cast::get_examples_float32_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_14();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_overflow_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_overflow_relaxed();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_8();
bool is_ignored_relaxed_8(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_quant8_overflow_relaxed) {
  Execute(device,
          createTestModel_relaxed_8,
          is_ignored_relaxed_8,
          ::generated_tests::cast::get_examples_float32_to_quant8_overflow_relaxed());
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_relaxed) {
  const Model model = createTestModel_relaxed_8();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_overflow_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_overflow_relaxed_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_dynamic_output_shape_8();
bool is_ignored_relaxed_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_overflow_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_8,
          is_ignored_relaxed_dynamic_output_shape_8,
          ::generated_tests::cast::get_examples_float32_to_quant8_overflow_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_overflow_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_overflow_relaxed_all_inputs_as_internal();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_7();
bool is_ignored_relaxed_all_inputs_as_internal_7(int);

TEST_F(NeuralnetworksHidlTest, cast_float32_to_quant8_overflow_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_7,
          is_ignored_relaxed_all_inputs_as_internal_7,
          ::generated_tests::cast::get_examples_float32_to_quant8_overflow_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_7();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_overflow_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float32_to_quant8_overflow_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, cast_float32_to_quant8_overflow_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_7,
          ::generated_tests::cast::get_examples_float32_to_quant8_overflow_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_float32_to_quant8_overflow_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_float32_to_quant8_overflow_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_quant8_overflow();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_19();
bool is_ignored_19(int);

TEST_F(NeuralnetworksHidlTest, cast_int32_to_quant8_overflow) {
  Execute(device,
          createTestModel_19,
          is_ignored_19,
          ::generated_tests::cast::get_examples_int32_to_quant8_overflow());
}

TEST_F(ValidationTest, cast_int32_to_quant8_overflow) {
  const Model model = createTestModel_19();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_quant8_overflow());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

namespace generated_tests::cast {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_to_quant8_overflow_dynamic_output_shape();

} // namespace generated_tests::cast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast {

Model createTestModel_dynamic_output_shape_19();
bool is_ignored_dynamic_output_shape_19(int);

TEST_F(DynamicOutputShapeTest, cast_int32_to_quant8_overflow_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_19,
          is_ignored_dynamic_output_shape_19,
          ::generated_tests::cast::get_examples_int32_to_quant8_overflow_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, cast_int32_to_quant8_overflow_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_19();
  const std::vector<Request> requests = createRequests(::generated_tests::cast::get_examples_int32_to_quant8_overflow_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::cast

