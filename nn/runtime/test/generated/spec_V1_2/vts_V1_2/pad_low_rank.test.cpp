// Generated from pad_low_rank.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::pad_low_rank {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, pad_low_rank) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::pad_low_rank::get_examples());
}

TEST_F(ValidationTest, pad_low_rank) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_low_rank::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank

namespace generated_tests::pad_low_rank {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, pad_low_rank_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::pad_low_rank::get_examples_float16());
}

TEST_F(ValidationTest, pad_low_rank_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_low_rank::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank

namespace generated_tests::pad_low_rank {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_low_rank_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::pad_low_rank::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_low_rank_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_low_rank::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank

namespace generated_tests::pad_low_rank {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::pad_low_rank

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, pad_low_rank_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::pad_low_rank::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, pad_low_rank_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_low_rank::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_low_rank

