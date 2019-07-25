// Generated from concat_mixed_quant.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::concat_mixed_quant {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, concat_mixed_quant_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::concat_mixed_quant::get_examples_quant8());
}

TEST_F(ValidationTest, concat_mixed_quant_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

namespace generated_tests::concat_mixed_quant {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_quant8_dynamic_output_shape();
bool is_ignored_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape,
          is_ignored_quant8_dynamic_output_shape,
          ::generated_tests::concat_mixed_quant::get_examples_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

namespace generated_tests::concat_mixed_quant {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_quant8_all_inputs_as_internal();
bool is_ignored_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, concat_mixed_quant_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal,
          is_ignored_quant8_all_inputs_as_internal,
          ::generated_tests::concat_mixed_quant::get_examples_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

namespace generated_tests::concat_mixed_quant {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::concat_mixed_quant::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

namespace generated_tests::concat_mixed_quant {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, concat_mixed_quant_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::concat_mixed_quant::get_examples_quant8_2());
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

namespace generated_tests::concat_mixed_quant {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_2();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_quant8_dynamic_output_shape_2();
bool is_ignored_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape_2,
          is_ignored_quant8_dynamic_output_shape_2,
          ::generated_tests::concat_mixed_quant::get_examples_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

namespace generated_tests::concat_mixed_quant {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_quant8_all_inputs_as_internal_2();
bool is_ignored_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, concat_mixed_quant_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_2,
          is_ignored_quant8_all_inputs_as_internal_2,
          ::generated_tests::concat_mixed_quant::get_examples_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

namespace generated_tests::concat_mixed_quant {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::concat_mixed_quant::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

