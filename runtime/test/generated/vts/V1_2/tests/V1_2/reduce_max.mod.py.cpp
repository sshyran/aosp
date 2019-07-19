// Generated from reduce_max.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, reduce_max) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::reduce_max::get_examples());
}

TEST_F(ValidationTest, reduce_max) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::reduce_max::get_examples_relaxed());
}

TEST_F(ValidationTest, reduce_max_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::reduce_max::get_examples_float16());
}

TEST_F(ValidationTest, reduce_max_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::reduce_max::get_examples_quant8());
}

TEST_F(ValidationTest, reduce_max_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::reduce_max::get_examples_2());
}

TEST_F(ValidationTest, reduce_max_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_relaxed_2) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::reduce_max::get_examples_relaxed_2());
}

TEST_F(ValidationTest, reduce_max_relaxed_2) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_float16_2) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::reduce_max::get_examples_float16_2());
}

TEST_F(ValidationTest, reduce_max_float16_2) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::reduce_max::get_examples_quant8_2());
}

TEST_F(ValidationTest, reduce_max_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_2();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_relaxed_2(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_2();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_float16_2();
bool is_ignored_dynamic_output_shape_float16_2(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_2,
          is_ignored_dynamic_output_shape_float16_2,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_float16_2(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_2();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_quant8_2();
bool is_ignored_dynamic_output_shape_quant8_2(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_2,
          is_ignored_dynamic_output_shape_quant8_2,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_quant8_2(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_3();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_3) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::reduce_max::get_examples_3());
}

TEST_F(ValidationTest, reduce_max_3) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_3();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_relaxed_3();
bool is_ignored_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_relaxed_3) {
  Execute(device,
          createTestModel_relaxed_3,
          is_ignored_relaxed_3,
          ::generated_tests::reduce_max::get_examples_relaxed_3());
}

TEST_F(ValidationTest, reduce_max_relaxed_3) {
  const Model model = createTestModel_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_3();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_float16_3();
bool is_ignored_float16_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_float16_3) {
  Execute(device,
          createTestModel_float16_3,
          is_ignored_float16_3,
          ::generated_tests::reduce_max::get_examples_float16_3());
}

TEST_F(ValidationTest, reduce_max_float16_3) {
  const Model model = createTestModel_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_3();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_quant8_3();
bool is_ignored_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_quant8_3) {
  Execute(device,
          createTestModel_quant8_3,
          is_ignored_quant8_3,
          ::generated_tests::reduce_max::get_examples_quant8_3());
}

TEST_F(ValidationTest, reduce_max_quant8_3) {
  const Model model = createTestModel_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_3();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_3) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_3();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_relaxed_3();
bool is_ignored_dynamic_output_shape_relaxed_3(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_relaxed_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_3,
          is_ignored_dynamic_output_shape_relaxed_3,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_relaxed_3(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_relaxed_3) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_3();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_float16_3();
bool is_ignored_dynamic_output_shape_float16_3(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_float16_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_3,
          is_ignored_dynamic_output_shape_float16_3,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_float16_3(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_float16_3) {
  const Model model = createTestModel_dynamic_output_shape_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_3();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_quant8_3();
bool is_ignored_dynamic_output_shape_quant8_3(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_quant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_3,
          is_ignored_dynamic_output_shape_quant8_3,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_quant8_3(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_quant8_3) {
  const Model model = createTestModel_dynamic_output_shape_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_4();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_4) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::reduce_max::get_examples_4());
}

TEST_F(ValidationTest, reduce_max_4) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_4();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_relaxed_4();
bool is_ignored_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_relaxed_4) {
  Execute(device,
          createTestModel_relaxed_4,
          is_ignored_relaxed_4,
          ::generated_tests::reduce_max::get_examples_relaxed_4());
}

TEST_F(ValidationTest, reduce_max_relaxed_4) {
  const Model model = createTestModel_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_relaxed_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_4();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_float16_4();
bool is_ignored_float16_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_float16_4) {
  Execute(device,
          createTestModel_float16_4,
          is_ignored_float16_4,
          ::generated_tests::reduce_max::get_examples_float16_4());
}

TEST_F(ValidationTest, reduce_max_float16_4) {
  const Model model = createTestModel_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_float16_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_4();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_quant8_4();
bool is_ignored_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, reduce_max_quant8_4) {
  Execute(device,
          createTestModel_quant8_4,
          is_ignored_quant8_4,
          ::generated_tests::reduce_max::get_examples_quant8_4());
}

TEST_F(ValidationTest, reduce_max_quant8_4) {
  const Model model = createTestModel_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_4();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_4) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_4();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_relaxed_4();
bool is_ignored_dynamic_output_shape_relaxed_4(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_relaxed_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_4,
          is_ignored_dynamic_output_shape_relaxed_4,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_relaxed_4(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_relaxed_4) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_relaxed_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_4();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_float16_4();
bool is_ignored_dynamic_output_shape_float16_4(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_float16_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_4,
          is_ignored_dynamic_output_shape_float16_4,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_float16_4(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_float16_4) {
  const Model model = createTestModel_dynamic_output_shape_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_float16_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

namespace generated_tests::reduce_max {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_4();

} // namespace generated_tests::reduce_max

namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max {

Model createTestModel_dynamic_output_shape_quant8_4();
bool is_ignored_dynamic_output_shape_quant8_4(int);

TEST_F(DynamicOutputShapeTest, reduce_max_dynamic_output_shape_quant8_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_4,
          is_ignored_dynamic_output_shape_quant8_4,
          ::generated_tests::reduce_max::get_examples_dynamic_output_shape_quant8_4(), true);
}

TEST_F(ValidationTest, reduce_max_dynamic_output_shape_quant8_4) {
  const Model model = createTestModel_dynamic_output_shape_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::reduce_max::get_examples_dynamic_output_shape_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::reduce_max

