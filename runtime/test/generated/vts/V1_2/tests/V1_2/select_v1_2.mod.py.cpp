// Generated from select_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_one_dim) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::select_v1_2::get_examples_one_dim());
}

TEST_F(ValidationTest, select_v1_2_one_dim) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim_int32();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_int32();
bool is_ignored_int32(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_one_dim_int32) {
  Execute(device,
          createTestModel_int32,
          is_ignored_int32,
          ::generated_tests::select_v1_2::get_examples_one_dim_int32());
}

TEST_F(ValidationTest, select_v1_2_one_dim_int32) {
  const Model model = createTestModel_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim_float16();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_one_dim_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::select_v1_2::get_examples_one_dim_float16());
}

TEST_F(ValidationTest, select_v1_2_one_dim_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim_relaxed();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_one_dim_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::select_v1_2::get_examples_one_dim_relaxed());
}

TEST_F(ValidationTest, select_v1_2_one_dim_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim_quant8();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_one_dim_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::select_v1_2::get_examples_one_dim_quant8());
}

TEST_F(ValidationTest, select_v1_2_one_dim_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim_dynamic_output_shape();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim_dynamic_output_shape_int32();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_int32();
bool is_ignored_dynamic_output_shape_int32(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_dynamic_output_shape_int32) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32,
          is_ignored_dynamic_output_shape_int32,
          ::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape_int32(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_dynamic_output_shape_int32) {
  const Model model = createTestModel_dynamic_output_shape_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim_dynamic_output_shape_float16();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim_dynamic_output_shape_relaxed();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_one_dim_dynamic_output_shape_quant8();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_one_dim_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, select_v1_2_one_dim_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_one_dim_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_two_dim) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::select_v1_2::get_examples_two_dim());
}

TEST_F(ValidationTest, select_v1_2_two_dim) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim_int32();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_int32_2();
bool is_ignored_int32_2(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_two_dim_int32) {
  Execute(device,
          createTestModel_int32_2,
          is_ignored_int32_2,
          ::generated_tests::select_v1_2::get_examples_two_dim_int32());
}

TEST_F(ValidationTest, select_v1_2_two_dim_int32) {
  const Model model = createTestModel_int32_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim_float16();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_two_dim_float16) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::select_v1_2::get_examples_two_dim_float16());
}

TEST_F(ValidationTest, select_v1_2_two_dim_float16) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim_relaxed();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_two_dim_relaxed) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::select_v1_2::get_examples_two_dim_relaxed());
}

TEST_F(ValidationTest, select_v1_2_two_dim_relaxed) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim_quant8();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_two_dim_quant8) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::select_v1_2::get_examples_two_dim_quant8());
}

TEST_F(ValidationTest, select_v1_2_two_dim_quant8) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim_dynamic_output_shape();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim_dynamic_output_shape_int32();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_int32_2();
bool is_ignored_dynamic_output_shape_int32_2(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_dynamic_output_shape_int32) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_2,
          is_ignored_dynamic_output_shape_int32_2,
          ::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape_int32(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_dynamic_output_shape_int32) {
  const Model model = createTestModel_dynamic_output_shape_int32_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim_dynamic_output_shape_float16();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_float16_2();
bool is_ignored_dynamic_output_shape_float16_2(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_2,
          is_ignored_dynamic_output_shape_float16_2,
          ::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim_dynamic_output_shape_relaxed();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_two_dim_dynamic_output_shape_quant8();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_quant8_2();
bool is_ignored_dynamic_output_shape_quant8_2(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_two_dim_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_2,
          is_ignored_dynamic_output_shape_quant8_2,
          ::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, select_v1_2_two_dim_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_two_dim_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_five_dim) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::select_v1_2::get_examples_five_dim());
}

TEST_F(ValidationTest, select_v1_2_five_dim) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim_int32();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_int32_3();
bool is_ignored_int32_3(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_five_dim_int32) {
  Execute(device,
          createTestModel_int32_3,
          is_ignored_int32_3,
          ::generated_tests::select_v1_2::get_examples_five_dim_int32());
}

TEST_F(ValidationTest, select_v1_2_five_dim_int32) {
  const Model model = createTestModel_int32_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim_float16();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_float16_3();
bool is_ignored_float16_3(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_five_dim_float16) {
  Execute(device,
          createTestModel_float16_3,
          is_ignored_float16_3,
          ::generated_tests::select_v1_2::get_examples_five_dim_float16());
}

TEST_F(ValidationTest, select_v1_2_five_dim_float16) {
  const Model model = createTestModel_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim_relaxed();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_relaxed_3();
bool is_ignored_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_five_dim_relaxed) {
  Execute(device,
          createTestModel_relaxed_3,
          is_ignored_relaxed_3,
          ::generated_tests::select_v1_2::get_examples_five_dim_relaxed());
}

TEST_F(ValidationTest, select_v1_2_five_dim_relaxed) {
  const Model model = createTestModel_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim_quant8();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_quant8_3();
bool is_ignored_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, select_v1_2_five_dim_quant8) {
  Execute(device,
          createTestModel_quant8_3,
          is_ignored_quant8_3,
          ::generated_tests::select_v1_2::get_examples_five_dim_quant8());
}

TEST_F(ValidationTest, select_v1_2_five_dim_quant8) {
  const Model model = createTestModel_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim_dynamic_output_shape();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim_dynamic_output_shape_int32();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_int32_3();
bool is_ignored_dynamic_output_shape_int32_3(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim_dynamic_output_shape_int32) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_3,
          is_ignored_dynamic_output_shape_int32_3,
          ::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape_int32(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim_dynamic_output_shape_int32) {
  const Model model = createTestModel_dynamic_output_shape_int32_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim_dynamic_output_shape_float16();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_float16_3();
bool is_ignored_dynamic_output_shape_float16_3(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_3,
          is_ignored_dynamic_output_shape_float16_3,
          ::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim_dynamic_output_shape_relaxed();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_relaxed_3();
bool is_ignored_dynamic_output_shape_relaxed_3(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_3,
          is_ignored_dynamic_output_shape_relaxed_3,
          ::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

namespace generated_tests::select_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_five_dim_dynamic_output_shape_quant8();

} // namespace generated_tests::select_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2 {

Model createTestModel_dynamic_output_shape_quant8_3();
bool is_ignored_dynamic_output_shape_quant8_3(int);

TEST_F(DynamicOutputShapeTest, select_v1_2_five_dim_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_3,
          is_ignored_dynamic_output_shape_quant8_3,
          ::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, select_v1_2_five_dim_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::select_v1_2::get_examples_five_dim_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::select_v1_2

