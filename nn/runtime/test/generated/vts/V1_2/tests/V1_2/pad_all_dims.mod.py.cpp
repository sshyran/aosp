// Generated from pad_all_dims.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::pad_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::pad_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, pad_all_dims) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::pad_all_dims::get_examples());
}

TEST_F(ValidationTest, pad_all_dims) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_all_dims::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::pad_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, pad_all_dims_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::pad_all_dims::get_examples_float16());
}

TEST_F(ValidationTest, pad_all_dims_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_all_dims::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::pad_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, pad_all_dims_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::pad_all_dims::get_examples_relaxed());
}

TEST_F(ValidationTest, pad_all_dims_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_all_dims::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::pad_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, pad_all_dims_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::pad_all_dims::get_examples_quant8());
}

TEST_F(ValidationTest, pad_all_dims_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_all_dims::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::pad_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, pad_all_dims_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::pad_all_dims::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, pad_all_dims_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_all_dims::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::pad_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, pad_all_dims_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::pad_all_dims::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, pad_all_dims_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_all_dims::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::pad_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, pad_all_dims_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::pad_all_dims::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, pad_all_dims_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_all_dims::get_examples_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims

namespace generated_tests::pad_all_dims {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

} // namespace generated_tests::pad_all_dims

namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, pad_all_dims_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::pad_all_dims::get_examples_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, pad_all_dims_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::pad_all_dims::get_examples_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::pad_all_dims

