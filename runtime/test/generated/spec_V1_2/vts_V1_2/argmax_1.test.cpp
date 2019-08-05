// Generated from argmax_1.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, argmax_1) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::argmax_1::get_examples());
}

TEST_F(ValidationTest, argmax_1) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, argmax_1_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::argmax_1::get_examples_relaxed());
}

TEST_F(ValidationTest, argmax_1_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, argmax_1_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::argmax_1::get_examples_float16());
}

TEST_F(ValidationTest, argmax_1_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel_int32();
bool is_ignored_int32(int);

TEST_F(NeuralnetworksHidlTest, argmax_1_int32) {
  Execute(device,
          createTestModel_int32,
          is_ignored_int32,
          ::generated_tests::argmax_1::get_examples_int32());
}

TEST_F(ValidationTest, argmax_1_int32) {
  const Model model = createTestModel_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, argmax_1_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::argmax_1::get_examples_quant8());
}

TEST_F(ValidationTest, argmax_1_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, argmax_1_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::argmax_1::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, argmax_1_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, argmax_1_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::argmax_1::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, argmax_1_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, argmax_1_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::argmax_1::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, argmax_1_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel_dynamic_output_shape_int32();
bool is_ignored_dynamic_output_shape_int32(int);

TEST_F(DynamicOutputShapeTest, argmax_1_dynamic_output_shape_int32) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32,
          is_ignored_dynamic_output_shape_int32,
          ::generated_tests::argmax_1::get_examples_dynamic_output_shape_int32(), true);
}

TEST_F(ValidationTest, argmax_1_dynamic_output_shape_int32) {
  const Model model = createTestModel_dynamic_output_shape_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples_dynamic_output_shape_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

namespace generated_tests::argmax_1 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

} // namespace generated_tests::argmax_1

namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1 {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, argmax_1_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::argmax_1::get_examples_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, argmax_1_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::argmax_1::get_examples_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::argmax_1

