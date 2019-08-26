// Generated from relu1_quant8_1.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::relu1_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::relu1_quant8_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, relu1_quant8_1) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::relu1_quant8_1::get_examples());
}

TEST_F(ValidationTest, relu1_quant8_1) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::relu1_quant8_1::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1

namespace generated_tests::relu1_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::relu1_quant8_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, relu1_quant8_1_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::relu1_quant8_1::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, relu1_quant8_1_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::relu1_quant8_1::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1

namespace generated_tests::relu1_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::relu1_quant8_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1 {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, relu1_quant8_1_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::relu1_quant8_1::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, relu1_quant8_1_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::relu1_quant8_1::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1

namespace generated_tests::relu1_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::relu1_quant8_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1 {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, relu1_quant8_1_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::relu1_quant8_1::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, relu1_quant8_1_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::relu1_quant8_1::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1

namespace generated_tests::relu1_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::relu1_quant8_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1 {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, relu1_quant8_1_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::relu1_quant8_1::get_examples_2());
}

TEST_F(ValidationTest, relu1_quant8_1_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::relu1_quant8_1::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1

namespace generated_tests::relu1_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::relu1_quant8_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1 {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, relu1_quant8_1_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::relu1_quant8_1::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, relu1_quant8_1_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::relu1_quant8_1::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1

namespace generated_tests::relu1_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_2();

} // namespace generated_tests::relu1_quant8_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1 {

Model createTestModel_all_inputs_as_internal_2();
bool is_ignored_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, relu1_quant8_1_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_2,
          is_ignored_all_inputs_as_internal_2,
          ::generated_tests::relu1_quant8_1::get_examples_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, relu1_quant8_1_all_inputs_as_internal_2) {
  const Model model = createTestModel_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::relu1_quant8_1::get_examples_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1

namespace generated_tests::relu1_quant8_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::relu1_quant8_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1 {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, relu1_quant8_1_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::relu1_quant8_1::get_examples_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, relu1_quant8_1_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::relu1_quant8_1::get_examples_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::relu1_quant8_1

