// Generated from logical_and.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::logical_and {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple();

} // namespace generated_tests::logical_and

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, logical_and_simple) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::logical_and::get_examples_simple());
}

TEST_F(ValidationTest, logical_and_simple) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::logical_and::get_examples_simple());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and

namespace generated_tests::logical_and {

std::vector<::test_helper::MixedTypedExample>& get_examples_simple_dynamic_output_shape();

} // namespace generated_tests::logical_and

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, logical_and_simple_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::logical_and::get_examples_simple_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, logical_and_simple_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::logical_and::get_examples_simple_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and

namespace generated_tests::logical_and {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast();

} // namespace generated_tests::logical_and

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, logical_and_broadcast) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::logical_and::get_examples_broadcast());
}

TEST_F(ValidationTest, logical_and_broadcast) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::logical_and::get_examples_broadcast());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and

namespace generated_tests::logical_and {

std::vector<::test_helper::MixedTypedExample>& get_examples_broadcast_dynamic_output_shape();

} // namespace generated_tests::logical_and

namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, logical_and_broadcast_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::logical_and::get_examples_broadcast_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, logical_and_broadcast_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::logical_and::get_examples_broadcast_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::logical_and

