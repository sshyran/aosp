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

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::concat_mixed_quant::get_examples_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_dynamic_output_shape_quant8());
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

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_2();

} // namespace generated_tests::concat_mixed_quant

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant {

Model createTestModel_dynamic_output_shape_quant8_2();
bool is_ignored_dynamic_output_shape_quant8_2(int);

TEST_F(DynamicOutputShapeTest, concat_mixed_quant_dynamic_output_shape_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_2,
          is_ignored_dynamic_output_shape_quant8_2,
          ::generated_tests::concat_mixed_quant::get_examples_dynamic_output_shape_quant8_2(), true);
}

TEST_F(ValidationTest, concat_mixed_quant_dynamic_output_shape_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_mixed_quant::get_examples_dynamic_output_shape_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_mixed_quant

