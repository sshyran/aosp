// Generated from abs.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::abs {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::abs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, abs) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::abs::get_examples());
}

TEST_F(ValidationTest, abs) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::abs::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs

namespace generated_tests::abs {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::abs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, abs_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::abs::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, abs_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::abs::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs

namespace generated_tests::abs {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::abs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, abs_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::abs::get_examples_relaxed());
}

TEST_F(ValidationTest, abs_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::abs::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs

namespace generated_tests::abs {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::abs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, abs_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::abs::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, abs_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::abs::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs

namespace generated_tests::abs {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::abs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, abs_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::abs::get_examples_float16());
}

TEST_F(ValidationTest, abs_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::abs::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs

namespace generated_tests::abs {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

} // namespace generated_tests::abs

namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, abs_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::abs::get_examples_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, abs_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::abs::get_examples_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::abs

