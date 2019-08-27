// Generated from hashtable_lookup_float.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::hashtable_lookup_float {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::hashtable_lookup_float

namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, hashtable_lookup_float) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::hashtable_lookup_float::get_examples());
}

TEST_F(ValidationTest, hashtable_lookup_float) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::hashtable_lookup_float::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float

namespace generated_tests::hashtable_lookup_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::hashtable_lookup_float

namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, hashtable_lookup_float_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::hashtable_lookup_float::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, hashtable_lookup_float_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::hashtable_lookup_float::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float

namespace generated_tests::hashtable_lookup_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal();

} // namespace generated_tests::hashtable_lookup_float

namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float {

Model createTestModel_all_inputs_as_internal();
bool is_ignored_all_inputs_as_internal(int);

TEST_F(NeuralnetworksHidlTest, hashtable_lookup_float_all_inputs_as_internal) {
  Execute(device,
          createTestModel_all_inputs_as_internal,
          is_ignored_all_inputs_as_internal,
          ::generated_tests::hashtable_lookup_float::get_examples_all_inputs_as_internal());
}

TEST_F(ValidationTest, hashtable_lookup_float_all_inputs_as_internal) {
  const Model model = createTestModel_all_inputs_as_internal();
  const std::vector<Request> requests = createRequests(::generated_tests::hashtable_lookup_float::get_examples_all_inputs_as_internal());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float

namespace generated_tests::hashtable_lookup_float {

std::vector<::test_helper::MixedTypedExample>& get_examples_all_inputs_as_internal_dynamic_output_shape();

} // namespace generated_tests::hashtable_lookup_float

namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float {

Model createTestModel_all_inputs_as_internal_dynamic_output_shape();
bool is_ignored_all_inputs_as_internal_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, hashtable_lookup_float_all_inputs_as_internal_dynamic_output_shape) {
  Execute(device,
          createTestModel_all_inputs_as_internal_dynamic_output_shape,
          is_ignored_all_inputs_as_internal_dynamic_output_shape,
          ::generated_tests::hashtable_lookup_float::get_examples_all_inputs_as_internal_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, hashtable_lookup_float_all_inputs_as_internal_dynamic_output_shape) {
  const Model model = createTestModel_all_inputs_as_internal_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::hashtable_lookup_float::get_examples_all_inputs_as_internal_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::hashtable_lookup_float

