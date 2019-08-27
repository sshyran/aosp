// Generated from concat_zero_sized.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, concat_zero_sized) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::concat_zero_sized::get_examples());
}

TEST_F(ValidationTest, concat_zero_sized) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, concat_zero_sized_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::concat_zero_sized::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, concat_zero_sized_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, concat_zero_sized_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::concat_zero_sized::get_examples_relaxed());
}

TEST_F(ValidationTest, concat_zero_sized_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_relaxed_dynamic_output_shape();
bool is_ignored_relaxed_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, concat_zero_sized_relaxed_dynamic_output_shape) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape,
          is_ignored_relaxed_dynamic_output_shape,
          ::generated_tests::concat_zero_sized::get_examples_relaxed_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, concat_zero_sized_relaxed_dynamic_output_shape) {
  const Model model = createTestModel_relaxed_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_relaxed_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, concat_zero_sized_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::concat_zero_sized::get_examples_quant8());
}

TEST_F(ValidationTest, concat_zero_sized_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_quant8_dynamic_output_shape();
bool is_ignored_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, concat_zero_sized_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape,
          is_ignored_quant8_dynamic_output_shape,
          ::generated_tests::concat_zero_sized::get_examples_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, concat_zero_sized_quant8_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, concat_zero_sized_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::concat_zero_sized::get_examples_float16());
}

TEST_F(ValidationTest, concat_zero_sized_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_float16_dynamic_output_shape();
bool is_ignored_float16_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, concat_zero_sized_float16_dynamic_output_shape) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape,
          is_ignored_float16_dynamic_output_shape,
          ::generated_tests::concat_zero_sized::get_examples_float16_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, concat_zero_sized_float16_dynamic_output_shape) {
  const Model model = createTestModel_float16_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_float16_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, concat_zero_sized_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::concat_zero_sized::get_examples_2());
}

TEST_F(ValidationTest, concat_zero_sized_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, concat_zero_sized_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::concat_zero_sized::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, concat_zero_sized_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, concat_zero_sized_relaxed_2) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::concat_zero_sized::get_examples_relaxed_2());
}

TEST_F(ValidationTest, concat_zero_sized_relaxed_2) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_dynamic_output_shape_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_relaxed_dynamic_output_shape_2();
bool is_ignored_relaxed_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, concat_zero_sized_relaxed_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_relaxed_dynamic_output_shape_2,
          is_ignored_relaxed_dynamic_output_shape_2,
          ::generated_tests::concat_zero_sized::get_examples_relaxed_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, concat_zero_sized_relaxed_dynamic_output_shape_2) {
  const Model model = createTestModel_relaxed_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_relaxed_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, concat_zero_sized_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::concat_zero_sized::get_examples_quant8_2());
}

TEST_F(ValidationTest, concat_zero_sized_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_quant8_dynamic_output_shape_2();
bool is_ignored_quant8_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, concat_zero_sized_quant8_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape_2,
          is_ignored_quant8_dynamic_output_shape_2,
          ::generated_tests::concat_zero_sized::get_examples_quant8_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, concat_zero_sized_quant8_dynamic_output_shape_2) {
  const Model model = createTestModel_quant8_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_quant8_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, concat_zero_sized_float16_2) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::concat_zero_sized::get_examples_float16_2());
}

TEST_F(ValidationTest, concat_zero_sized_float16_2) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

namespace generated_tests::concat_zero_sized {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_dynamic_output_shape_2();

} // namespace generated_tests::concat_zero_sized

namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized {

Model createTestModel_float16_dynamic_output_shape_2();
bool is_ignored_float16_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, concat_zero_sized_float16_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_float16_dynamic_output_shape_2,
          is_ignored_float16_dynamic_output_shape_2,
          ::generated_tests::concat_zero_sized::get_examples_float16_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, concat_zero_sized_float16_dynamic_output_shape_2) {
  const Model model = createTestModel_float16_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::concat_zero_sized::get_examples_float16_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::concat_zero_sized

