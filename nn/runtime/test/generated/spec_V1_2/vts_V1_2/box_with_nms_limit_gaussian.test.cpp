// Generated from box_with_nms_limit_gaussian.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_float16());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_quant8_dynamic_output_shape();
bool is_ignored_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape,
          is_ignored_quant8_dynamic_output_shape,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_quant8_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_quant8_all_inputs_as_internal();
bool is_ignored_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal,
          is_ignored_quant8_all_inputs_as_internal,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_2());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_all_inputs_as_internal_2) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_relaxed_2) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_2());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_relaxed_2) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_relaxed_all_inputs_as_internal_2();
bool is_ignored_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_2,
          is_ignored_relaxed_all_inputs_as_internal_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_float16_2) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_2());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_float16_2) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_float16_dynamic_output_shape_2();
bool is_ignored_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_2,
          is_ignored_float16_dynamic_output_shape_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_float16_all_inputs_as_internal_2();
bool is_ignored_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_2,
          is_ignored_float16_all_inputs_as_internal_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_2());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_quant8_dynamic_output_shape_2();
bool is_ignored_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape_2,
          is_ignored_quant8_dynamic_output_shape_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_quant8_all_inputs_as_internal_2();
bool is_ignored_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, box_with_nms_limit_gaussian_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_2,
          is_ignored_quant8_all_inputs_as_internal_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

namespace generated_tests::box_with_nms_limit_gaussian {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::box_with_nms_limit_gaussian

namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, box_with_nms_limit_gaussian_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, box_with_nms_limit_gaussian_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::box_with_nms_limit_gaussian::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::box_with_nms_limit_gaussian

