// Generated from log.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::log {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::log

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, log) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::log::get_examples());
}

TEST_F(ValidationTest, log) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::log::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log

namespace generated_tests::log {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::log

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, log_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::log::get_examples_relaxed());
}

TEST_F(ValidationTest, log_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::log::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log

namespace generated_tests::log {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::log

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, log_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::log::get_examples_float16());
}

TEST_F(ValidationTest, log_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::log::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log

namespace generated_tests::log {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::log

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, log_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::log::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, log_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::log::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log

namespace generated_tests::log {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::log

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, log_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::log::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, log_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::log::get_examples_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log

namespace generated_tests::log {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::log

namespace android::hardware::neuralnetworks::V1_2::generated_tests::log {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, log_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::log::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, log_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::log::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::log

