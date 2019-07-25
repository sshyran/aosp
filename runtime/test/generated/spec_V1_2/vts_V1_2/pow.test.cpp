// Generated from pow.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, pow) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::pow::get_examples());
}

TEST_F(ValidationTest, pow) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pow_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::pow::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pow_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, pow_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::pow::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, pow_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pow_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::pow::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pow_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, pow_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::pow::get_examples_relaxed());
}

TEST_F(ValidationTest, pow_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pow_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::pow::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pow_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, pow_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, pow_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pow_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pow_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, pow_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::pow::get_examples_float16());
}

TEST_F(ValidationTest, pow_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pow_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::pow::get_examples_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pow_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, pow_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::pow::get_examples_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, pow_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pow_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::pow::get_examples_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pow_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, pow_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::pow::get_examples_2());
}

TEST_F(ValidationTest, pow_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, pow_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::pow::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, pow_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, pow_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::pow::get_examples_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, pow_all_inputs_as_internal_2) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, pow_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::pow::get_examples_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, pow_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, pow_relaxed_2) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::pow::get_examples_relaxed_2());
}

TEST_F(ValidationTest, pow_relaxed_2) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, pow_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::pow::get_examples_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, pow_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_all_inputs_as_internal_2();
bool is_ignored_relaxed_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, pow_relaxed_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_2,
          is_ignored_relaxed_all_inputs_as_internal_2,
          ::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, pow_relaxed_all_inputs_as_internal_2) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, pow_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, pow_relaxed_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, pow_float16_2) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::pow::get_examples_float16_2());
}

TEST_F(ValidationTest, pow_float16_2) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_dynamic_output_shape_2();
bool is_ignored_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, pow_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_2,
          is_ignored_float16_dynamic_output_shape_2,
          ::generated_tests::pow::get_examples_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, pow_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_all_inputs_as_internal_2();
bool is_ignored_float16_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, pow_float16_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_2,
          is_ignored_float16_all_inputs_as_internal_2,
          ::generated_tests::pow::get_examples_float16_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, pow_float16_all_inputs_as_internal_2) {
  const Model model = createTestModel_float16_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, pow_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::pow::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, pow_float16_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, pow_3) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::pow::get_examples_3());
}

TEST_F(ValidationTest, pow_3) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, pow_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::pow::get_examples_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, pow_dynamic_output_shape_3) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_all_inputs_as_internal_3();
bool is_ignored_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, pow_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_all_inputs_as_internal_3,
          is_ignored_all_inputs_as_internal_3,
          ::generated_tests::pow::get_examples_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, pow_all_inputs_as_internal_3) {
  const Model model = createTestModel_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, pow_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::pow::get_examples_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, pow_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_3();
bool is_ignored_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, pow_relaxed_3) {
  Execute(device,
          createTestModel_relaxed_3,
          is_ignored_relaxed_3,
          ::generated_tests::pow::get_examples_relaxed_3());
}

TEST_F(ValidationTest, pow_relaxed_3) {
  const Model model = createTestModel_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_dynamic_output_shape_3();
bool is_ignored_relaxed_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, pow_relaxed_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_3,
          is_ignored_relaxed_dynamic_output_shape_3,
          ::generated_tests::pow::get_examples_relaxed_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, pow_relaxed_dynamic_output_shape_3) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_all_inputs_as_internal_3();
bool is_ignored_relaxed_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, pow_relaxed_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_3,
          is_ignored_relaxed_all_inputs_as_internal_3,
          ::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, pow_relaxed_all_inputs_as_internal_3) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, pow_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, pow_relaxed_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_3();
bool is_ignored_float16_3(int);

TEST_F(NeuralnetworksHidlTest, pow_float16_3) {
  Execute(device,
          createTestModel_float16_3,
          is_ignored_float16_3,
          ::generated_tests::pow::get_examples_float16_3());
}

TEST_F(ValidationTest, pow_float16_3) {
  const Model model = createTestModel_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_dynamic_output_shape_3();
bool is_ignored_float16_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, pow_float16_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_3,
          is_ignored_float16_dynamic_output_shape_3,
          ::generated_tests::pow::get_examples_float16_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, pow_float16_dynamic_output_shape_3) {
  const Model model = createTestModel_float16_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_all_inputs_as_internal_3();
bool is_ignored_float16_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, pow_float16_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_3,
          is_ignored_float16_all_inputs_as_internal_3,
          ::generated_tests::pow::get_examples_float16_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, pow_float16_all_inputs_as_internal_3) {
  const Model model = createTestModel_float16_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

namespace generated_tests::pow {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::pow

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, pow_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::pow::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, pow_float16_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::pow::get_examples_float16_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pow

