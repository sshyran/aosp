// Generated from prelu.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, prelu) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::prelu::get_examples());
}

TEST_F(ValidationTest, prelu) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, prelu_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::prelu::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, prelu_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_all_tensors_as_inputs();
bool is_ignored_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, prelu_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_all_tensors_as_inputs,
          is_ignored_all_tensors_as_inputs,
          ::generated_tests::prelu::get_examples_all_tensors_as_inputs());
}

TEST_F(ValidationTest, prelu_all_tensors_as_inputs) {
  const Model model = createTestModel_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, prelu_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::prelu::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, prelu_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, prelu_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::prelu::get_examples_relaxed());
}

TEST_F(ValidationTest, prelu_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_relaxed_all_inputs_as_internal();
bool is_ignored_relaxed_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, prelu_relaxed_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal,
          is_ignored_relaxed_all_inputs_as_internal,
          ::generated_tests::prelu::get_examples_relaxed_all_inputs_as_internal());
}

TEST_F(ValidationTest, prelu_relaxed_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_relaxed_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_relaxed_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_relaxed_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_relaxed_all_tensors_as_inputs();
bool is_ignored_relaxed_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, prelu_relaxed_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs,
          is_ignored_relaxed_all_tensors_as_inputs,
          ::generated_tests::prelu::get_examples_relaxed_all_tensors_as_inputs());
}

TEST_F(ValidationTest, prelu_relaxed_all_tensors_as_inputs) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_relaxed_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_relaxed_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_relaxed_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_relaxed_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_relaxed_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_relaxed_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, prelu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::prelu::get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, prelu_relaxed_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_relaxed_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::prelu::get_examples_quant8());
}

TEST_F(ValidationTest, prelu_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_dynamic_output_shape();
bool is_ignored_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape,
          is_ignored_quant8_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_quant8_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_inputs_as_internal();
bool is_ignored_quant8_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal,
          is_ignored_quant8_all_inputs_as_internal,
          ::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal());
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs();
bool is_ignored_quant8_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs,
          is_ignored_quant8_all_tensors_as_inputs,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs());
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::prelu::get_examples_quant8_2());
}

TEST_F(ValidationTest, prelu_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_dynamic_output_shape_2();
bool is_ignored_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape_2,
          is_ignored_quant8_dynamic_output_shape_2,
          ::generated_tests::prelu::get_examples_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, prelu_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_inputs_as_internal_2();
bool is_ignored_quant8_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_2,
          is_ignored_quant8_all_inputs_as_internal_2,
          ::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_2) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_2();
bool is_ignored_quant8_all_tensors_as_inputs_2(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_tensors_as_inputs_2) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_2,
          is_ignored_quant8_all_tensors_as_inputs_2,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_2());
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_2) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_2,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_2(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_2,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_2) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_3();
bool is_ignored_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_3) {
  Execute(device,
          createTestModel_quant8_3,
          is_ignored_quant8_3,
          ::generated_tests::prelu::get_examples_quant8_3());
}

TEST_F(ValidationTest, prelu_quant8_3) {
  const Model model = createTestModel_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_dynamic_output_shape_3();
bool is_ignored_quant8_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape_3,
          is_ignored_quant8_dynamic_output_shape_3,
          ::generated_tests::prelu::get_examples_quant8_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, prelu_quant8_dynamic_output_shape_3) {
  const Model model = createTestModel_quant8_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_inputs_as_internal_3();
bool is_ignored_quant8_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_3,
          is_ignored_quant8_all_inputs_as_internal_3,
          ::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_3) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_3();
bool is_ignored_quant8_all_tensors_as_inputs_3(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_tensors_as_inputs_3) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_3,
          is_ignored_quant8_all_tensors_as_inputs_3,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_3());
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_3) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape_3();
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape_3,
          is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_3,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape_3) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_3();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_3(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_3,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_3,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_3) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_4();
bool is_ignored_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_4) {
  Execute(device,
          createTestModel_quant8_4,
          is_ignored_quant8_4,
          ::generated_tests::prelu::get_examples_quant8_4());
}

TEST_F(ValidationTest, prelu_quant8_4) {
  const Model model = createTestModel_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_dynamic_output_shape_4();
bool is_ignored_quant8_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape_4,
          is_ignored_quant8_dynamic_output_shape_4,
          ::generated_tests::prelu::get_examples_quant8_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, prelu_quant8_dynamic_output_shape_4) {
  const Model model = createTestModel_quant8_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_inputs_as_internal_4();
bool is_ignored_quant8_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_4,
          is_ignored_quant8_all_inputs_as_internal_4,
          ::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_4) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_quant8_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_quant8_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_4();
bool is_ignored_quant8_all_tensors_as_inputs_4(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_tensors_as_inputs_4) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_4,
          is_ignored_quant8_all_tensors_as_inputs_4,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_4());
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_4) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape_4();
bool is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape_4,
          is_ignored_quant8_all_tensors_as_inputs_dynamic_output_shape_4,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_dynamic_output_shape_4) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_4();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_4(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_4,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_4,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_4) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4();
bool is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4,
          is_ignored_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4,
          ::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, prelu_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4) {
  const Model model = createTestModel_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, prelu_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::prelu::get_examples_float16());
}

TEST_F(ValidationTest, prelu_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_float16_all_inputs_as_internal();
bool is_ignored_float16_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, prelu_float16_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal,
          is_ignored_float16_all_inputs_as_internal,
          ::generated_tests::prelu::get_examples_float16_all_inputs_as_internal());
}

TEST_F(ValidationTest, prelu_float16_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_float16_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_float16_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_float16_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_float16_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_float16_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_float16_all_tensors_as_inputs();
bool is_ignored_float16_all_tensors_as_inputs(int);

TEST_F(NeuralnetworksHidlTest, prelu_float16_all_tensors_as_inputs) {
  Execute(device,
          createTestModel_float16_all_tensors_as_inputs,
          is_ignored_float16_all_tensors_as_inputs,
          ::generated_tests::prelu::get_examples_float16_all_tensors_as_inputs());
}

TEST_F(ValidationTest, prelu_float16_all_tensors_as_inputs) {
  const Model model = createTestModel_float16_all_tensors_as_inputs();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_float16_all_tensors_as_inputs());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_float16_all_tensors_as_inputs_dynamic_output_shape();
bool is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_float16_all_tensors_as_inputs_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_tensors_as_inputs_dynamic_output_shape,
          is_ignored_float16_all_tensors_as_inputs_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_float16_all_tensors_as_inputs_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_float16_all_tensors_as_inputs_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_tensors_as_inputs_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_float16_all_tensors_as_inputs_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal();
bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  Execute(device,
          createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal,
          is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal,
          ::generated_tests::prelu::get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal());
}

TEST_F(ValidationTest, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal) {
  const Model model = createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_float16_all_tensors_as_inputs_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

