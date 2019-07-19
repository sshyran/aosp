// Generated from gather.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, gather) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::gather::get_examples());
}

TEST_F(ValidationTest, gather) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, gather_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::gather::get_examples_relaxed());
}

TEST_F(ValidationTest, gather_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, gather_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::gather::get_examples_quant8());
}

TEST_F(ValidationTest, gather_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_int32();
bool is_ignored_int32(int);

TEST_F(NeuralnetworksHidlTest, gather_int32) {
  Execute(device,
          createTestModel_int32,
          is_ignored_int32,
          ::generated_tests::gather::get_examples_int32());
}

TEST_F(ValidationTest, gather_int32) {
  const Model model = createTestModel_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, gather_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::gather::get_examples_float16());
}

TEST_F(ValidationTest, gather_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::gather::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::gather::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::gather::get_examples_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_int32();
bool is_ignored_dynamic_output_shape_int32(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32,
          is_ignored_dynamic_output_shape_int32,
          ::generated_tests::gather::get_examples_dynamic_output_shape_int32(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_int32) {
  const Model model = createTestModel_dynamic_output_shape_int32();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_int32());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::gather::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, gather_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::gather::get_examples_2());
}

TEST_F(ValidationTest, gather_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, gather_relaxed_2) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::gather::get_examples_relaxed_2());
}

TEST_F(ValidationTest, gather_relaxed_2) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, gather_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::gather::get_examples_quant8_2());
}

TEST_F(ValidationTest, gather_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_int32_2();
bool is_ignored_int32_2(int);

TEST_F(NeuralnetworksHidlTest, gather_int32_2) {
  Execute(device,
          createTestModel_int32_2,
          is_ignored_int32_2,
          ::generated_tests::gather::get_examples_int32_2());
}

TEST_F(ValidationTest, gather_int32_2) {
  const Model model = createTestModel_int32_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_int32_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, gather_float16_2) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::gather::get_examples_float16_2());
}

TEST_F(ValidationTest, gather_float16_2) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::gather::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_2(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_quant8_2();
bool is_ignored_dynamic_output_shape_quant8_2(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_2,
          is_ignored_dynamic_output_shape_quant8_2,
          ::generated_tests::gather::get_examples_dynamic_output_shape_quant8_2(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_int32_2();
bool is_ignored_dynamic_output_shape_int32_2(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_2,
          is_ignored_dynamic_output_shape_int32_2,
          ::generated_tests::gather::get_examples_dynamic_output_shape_int32_2(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_int32_2) {
  const Model model = createTestModel_dynamic_output_shape_int32_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_int32_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_2();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_float16_2();
bool is_ignored_dynamic_output_shape_float16_2(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_2,
          is_ignored_dynamic_output_shape_float16_2,
          ::generated_tests::gather::get_examples_dynamic_output_shape_float16_2(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, gather_3) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::gather::get_examples_3());
}

TEST_F(ValidationTest, gather_3) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_relaxed_3();
bool is_ignored_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, gather_relaxed_3) {
  Execute(device,
          createTestModel_relaxed_3,
          is_ignored_relaxed_3,
          ::generated_tests::gather::get_examples_relaxed_3());
}

TEST_F(ValidationTest, gather_relaxed_3) {
  const Model model = createTestModel_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_quant8_3();
bool is_ignored_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, gather_quant8_3) {
  Execute(device,
          createTestModel_quant8_3,
          is_ignored_quant8_3,
          ::generated_tests::gather::get_examples_quant8_3());
}

TEST_F(ValidationTest, gather_quant8_3) {
  const Model model = createTestModel_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_int32_3();
bool is_ignored_int32_3(int);

TEST_F(NeuralnetworksHidlTest, gather_int32_3) {
  Execute(device,
          createTestModel_int32_3,
          is_ignored_int32_3,
          ::generated_tests::gather::get_examples_int32_3());
}

TEST_F(ValidationTest, gather_int32_3) {
  const Model model = createTestModel_int32_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_int32_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_float16_3();
bool is_ignored_float16_3(int);

TEST_F(NeuralnetworksHidlTest, gather_float16_3) {
  Execute(device,
          createTestModel_float16_3,
          is_ignored_float16_3,
          ::generated_tests::gather::get_examples_float16_3());
}

TEST_F(ValidationTest, gather_float16_3) {
  const Model model = createTestModel_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::gather::get_examples_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_3) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_relaxed_3();
bool is_ignored_dynamic_output_shape_relaxed_3(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_3,
          is_ignored_dynamic_output_shape_relaxed_3,
          ::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_3(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_relaxed_3) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_quant8_3();
bool is_ignored_dynamic_output_shape_quant8_3(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_3,
          is_ignored_dynamic_output_shape_quant8_3,
          ::generated_tests::gather::get_examples_dynamic_output_shape_quant8_3(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_quant8_3) {
  const Model model = createTestModel_dynamic_output_shape_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_int32_3();
bool is_ignored_dynamic_output_shape_int32_3(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_3,
          is_ignored_dynamic_output_shape_int32_3,
          ::generated_tests::gather::get_examples_dynamic_output_shape_int32_3(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_int32_3) {
  const Model model = createTestModel_dynamic_output_shape_int32_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_int32_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_3();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_float16_3();
bool is_ignored_dynamic_output_shape_float16_3(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_3,
          is_ignored_dynamic_output_shape_float16_3,
          ::generated_tests::gather::get_examples_dynamic_output_shape_float16_3(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_float16_3) {
  const Model model = createTestModel_dynamic_output_shape_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_4();
bool is_ignored_4(int);

TEST_F(NeuralnetworksHidlTest, gather_4) {
  Execute(device,
          createTestModel_4,
          is_ignored_4,
          ::generated_tests::gather::get_examples_4());
}

TEST_F(ValidationTest, gather_4) {
  const Model model = createTestModel_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_relaxed_4();
bool is_ignored_relaxed_4(int);

TEST_F(NeuralnetworksHidlTest, gather_relaxed_4) {
  Execute(device,
          createTestModel_relaxed_4,
          is_ignored_relaxed_4,
          ::generated_tests::gather::get_examples_relaxed_4());
}

TEST_F(ValidationTest, gather_relaxed_4) {
  const Model model = createTestModel_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_relaxed_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_quant8_4();
bool is_ignored_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, gather_quant8_4) {
  Execute(device,
          createTestModel_quant8_4,
          is_ignored_quant8_4,
          ::generated_tests::gather::get_examples_quant8_4());
}

TEST_F(ValidationTest, gather_quant8_4) {
  const Model model = createTestModel_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_int32_4();
bool is_ignored_int32_4(int);

TEST_F(NeuralnetworksHidlTest, gather_int32_4) {
  Execute(device,
          createTestModel_int32_4,
          is_ignored_int32_4,
          ::generated_tests::gather::get_examples_int32_4());
}

TEST_F(ValidationTest, gather_int32_4) {
  const Model model = createTestModel_int32_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_int32_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_float16_4();
bool is_ignored_float16_4(int);

TEST_F(NeuralnetworksHidlTest, gather_float16_4) {
  Execute(device,
          createTestModel_float16_4,
          is_ignored_float16_4,
          ::generated_tests::gather::get_examples_float16_4());
}

TEST_F(ValidationTest, gather_float16_4) {
  const Model model = createTestModel_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_float16_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_4();
bool is_ignored_dynamic_output_shape_4(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_4,
          is_ignored_dynamic_output_shape_4,
          ::generated_tests::gather::get_examples_dynamic_output_shape_4(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_4) {
  const Model model = createTestModel_dynamic_output_shape_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_relaxed_4();
bool is_ignored_dynamic_output_shape_relaxed_4(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_4,
          is_ignored_dynamic_output_shape_relaxed_4,
          ::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_4(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_relaxed_4) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_quant8_4();
bool is_ignored_dynamic_output_shape_quant8_4(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_4,
          is_ignored_dynamic_output_shape_quant8_4,
          ::generated_tests::gather::get_examples_dynamic_output_shape_quant8_4(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_quant8_4) {
  const Model model = createTestModel_dynamic_output_shape_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_int32_4();
bool is_ignored_dynamic_output_shape_int32_4(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_4,
          is_ignored_dynamic_output_shape_int32_4,
          ::generated_tests::gather::get_examples_dynamic_output_shape_int32_4(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_int32_4) {
  const Model model = createTestModel_dynamic_output_shape_int32_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_int32_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_4();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_float16_4();
bool is_ignored_dynamic_output_shape_float16_4(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_4,
          is_ignored_dynamic_output_shape_float16_4,
          ::generated_tests::gather::get_examples_dynamic_output_shape_float16_4(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_float16_4) {
  const Model model = createTestModel_dynamic_output_shape_float16_4();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_float16_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_5();
bool is_ignored_5(int);

TEST_F(NeuralnetworksHidlTest, gather_5) {
  Execute(device,
          createTestModel_5,
          is_ignored_5,
          ::generated_tests::gather::get_examples_5());
}

TEST_F(ValidationTest, gather_5) {
  const Model model = createTestModel_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_relaxed_5();
bool is_ignored_relaxed_5(int);

TEST_F(NeuralnetworksHidlTest, gather_relaxed_5) {
  Execute(device,
          createTestModel_relaxed_5,
          is_ignored_relaxed_5,
          ::generated_tests::gather::get_examples_relaxed_5());
}

TEST_F(ValidationTest, gather_relaxed_5) {
  const Model model = createTestModel_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_relaxed_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_quant8_5();
bool is_ignored_quant8_5(int);

TEST_F(NeuralnetworksHidlTest, gather_quant8_5) {
  Execute(device,
          createTestModel_quant8_5,
          is_ignored_quant8_5,
          ::generated_tests::gather::get_examples_quant8_5());
}

TEST_F(ValidationTest, gather_quant8_5) {
  const Model model = createTestModel_quant8_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_quant8_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_int32_5();
bool is_ignored_int32_5(int);

TEST_F(NeuralnetworksHidlTest, gather_int32_5) {
  Execute(device,
          createTestModel_int32_5,
          is_ignored_int32_5,
          ::generated_tests::gather::get_examples_int32_5());
}

TEST_F(ValidationTest, gather_int32_5) {
  const Model model = createTestModel_int32_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_int32_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_float16_5();
bool is_ignored_float16_5(int);

TEST_F(NeuralnetworksHidlTest, gather_float16_5) {
  Execute(device,
          createTestModel_float16_5,
          is_ignored_float16_5,
          ::generated_tests::gather::get_examples_float16_5());
}

TEST_F(ValidationTest, gather_float16_5) {
  const Model model = createTestModel_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_float16_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_5();
bool is_ignored_dynamic_output_shape_5(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_5) {
  Execute(device,
          createTestModel_dynamic_output_shape_5,
          is_ignored_dynamic_output_shape_5,
          ::generated_tests::gather::get_examples_dynamic_output_shape_5(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_5) {
  const Model model = createTestModel_dynamic_output_shape_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_relaxed_5();
bool is_ignored_dynamic_output_shape_relaxed_5(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_5) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_5,
          is_ignored_dynamic_output_shape_relaxed_5,
          ::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_5(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_relaxed_5) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_quant8_5();
bool is_ignored_dynamic_output_shape_quant8_5(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_5) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_5,
          is_ignored_dynamic_output_shape_quant8_5,
          ::generated_tests::gather::get_examples_dynamic_output_shape_quant8_5(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_quant8_5) {
  const Model model = createTestModel_dynamic_output_shape_quant8_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_quant8_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_int32_5();
bool is_ignored_dynamic_output_shape_int32_5(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_5) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_5,
          is_ignored_dynamic_output_shape_int32_5,
          ::generated_tests::gather::get_examples_dynamic_output_shape_int32_5(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_int32_5) {
  const Model model = createTestModel_dynamic_output_shape_int32_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_int32_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_5();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_float16_5();
bool is_ignored_dynamic_output_shape_float16_5(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_5) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_5,
          is_ignored_dynamic_output_shape_float16_5,
          ::generated_tests::gather::get_examples_dynamic_output_shape_float16_5(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_float16_5) {
  const Model model = createTestModel_dynamic_output_shape_float16_5();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_float16_5());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_6();
bool is_ignored_6(int);

TEST_F(NeuralnetworksHidlTest, gather_6) {
  Execute(device,
          createTestModel_6,
          is_ignored_6,
          ::generated_tests::gather::get_examples_6());
}

TEST_F(ValidationTest, gather_6) {
  const Model model = createTestModel_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_relaxed_6();
bool is_ignored_relaxed_6(int);

TEST_F(NeuralnetworksHidlTest, gather_relaxed_6) {
  Execute(device,
          createTestModel_relaxed_6,
          is_ignored_relaxed_6,
          ::generated_tests::gather::get_examples_relaxed_6());
}

TEST_F(ValidationTest, gather_relaxed_6) {
  const Model model = createTestModel_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_relaxed_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_quant8_6();
bool is_ignored_quant8_6(int);

TEST_F(NeuralnetworksHidlTest, gather_quant8_6) {
  Execute(device,
          createTestModel_quant8_6,
          is_ignored_quant8_6,
          ::generated_tests::gather::get_examples_quant8_6());
}

TEST_F(ValidationTest, gather_quant8_6) {
  const Model model = createTestModel_quant8_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_quant8_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_int32_6();
bool is_ignored_int32_6(int);

TEST_F(NeuralnetworksHidlTest, gather_int32_6) {
  Execute(device,
          createTestModel_int32_6,
          is_ignored_int32_6,
          ::generated_tests::gather::get_examples_int32_6());
}

TEST_F(ValidationTest, gather_int32_6) {
  const Model model = createTestModel_int32_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_int32_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_float16_6();
bool is_ignored_float16_6(int);

TEST_F(NeuralnetworksHidlTest, gather_float16_6) {
  Execute(device,
          createTestModel_float16_6,
          is_ignored_float16_6,
          ::generated_tests::gather::get_examples_float16_6());
}

TEST_F(ValidationTest, gather_float16_6) {
  const Model model = createTestModel_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_float16_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_6();
bool is_ignored_dynamic_output_shape_6(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_6) {
  Execute(device,
          createTestModel_dynamic_output_shape_6,
          is_ignored_dynamic_output_shape_6,
          ::generated_tests::gather::get_examples_dynamic_output_shape_6(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_6) {
  const Model model = createTestModel_dynamic_output_shape_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_relaxed_6();
bool is_ignored_dynamic_output_shape_relaxed_6(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_6) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_6,
          is_ignored_dynamic_output_shape_relaxed_6,
          ::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_6(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_relaxed_6) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_quant8_6();
bool is_ignored_dynamic_output_shape_quant8_6(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_6) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_6,
          is_ignored_dynamic_output_shape_quant8_6,
          ::generated_tests::gather::get_examples_dynamic_output_shape_quant8_6(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_quant8_6) {
  const Model model = createTestModel_dynamic_output_shape_quant8_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_quant8_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_int32_6();
bool is_ignored_dynamic_output_shape_int32_6(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_6) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_6,
          is_ignored_dynamic_output_shape_int32_6,
          ::generated_tests::gather::get_examples_dynamic_output_shape_int32_6(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_int32_6) {
  const Model model = createTestModel_dynamic_output_shape_int32_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_int32_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_6();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_float16_6();
bool is_ignored_dynamic_output_shape_float16_6(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_6) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_6,
          is_ignored_dynamic_output_shape_float16_6,
          ::generated_tests::gather::get_examples_dynamic_output_shape_float16_6(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_float16_6) {
  const Model model = createTestModel_dynamic_output_shape_float16_6();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_float16_6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_7();
bool is_ignored_7(int);

TEST_F(NeuralnetworksHidlTest, gather_7) {
  Execute(device,
          createTestModel_7,
          is_ignored_7,
          ::generated_tests::gather::get_examples_7());
}

TEST_F(ValidationTest, gather_7) {
  const Model model = createTestModel_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_relaxed_7();
bool is_ignored_relaxed_7(int);

TEST_F(NeuralnetworksHidlTest, gather_relaxed_7) {
  Execute(device,
          createTestModel_relaxed_7,
          is_ignored_relaxed_7,
          ::generated_tests::gather::get_examples_relaxed_7());
}

TEST_F(ValidationTest, gather_relaxed_7) {
  const Model model = createTestModel_relaxed_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_relaxed_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_quant8_7();
bool is_ignored_quant8_7(int);

TEST_F(NeuralnetworksHidlTest, gather_quant8_7) {
  Execute(device,
          createTestModel_quant8_7,
          is_ignored_quant8_7,
          ::generated_tests::gather::get_examples_quant8_7());
}

TEST_F(ValidationTest, gather_quant8_7) {
  const Model model = createTestModel_quant8_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_quant8_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_int32_7();
bool is_ignored_int32_7(int);

TEST_F(NeuralnetworksHidlTest, gather_int32_7) {
  Execute(device,
          createTestModel_int32_7,
          is_ignored_int32_7,
          ::generated_tests::gather::get_examples_int32_7());
}

TEST_F(ValidationTest, gather_int32_7) {
  const Model model = createTestModel_int32_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_int32_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_float16_7();
bool is_ignored_float16_7(int);

TEST_F(NeuralnetworksHidlTest, gather_float16_7) {
  Execute(device,
          createTestModel_float16_7,
          is_ignored_float16_7,
          ::generated_tests::gather::get_examples_float16_7());
}

TEST_F(ValidationTest, gather_float16_7) {
  const Model model = createTestModel_float16_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_float16_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_7();
bool is_ignored_dynamic_output_shape_7(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_7) {
  Execute(device,
          createTestModel_dynamic_output_shape_7,
          is_ignored_dynamic_output_shape_7,
          ::generated_tests::gather::get_examples_dynamic_output_shape_7(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_7) {
  const Model model = createTestModel_dynamic_output_shape_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_relaxed_7();
bool is_ignored_dynamic_output_shape_relaxed_7(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_7) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_7,
          is_ignored_dynamic_output_shape_relaxed_7,
          ::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_7(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_relaxed_7) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_quant8_7();
bool is_ignored_dynamic_output_shape_quant8_7(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_7) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_7,
          is_ignored_dynamic_output_shape_quant8_7,
          ::generated_tests::gather::get_examples_dynamic_output_shape_quant8_7(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_quant8_7) {
  const Model model = createTestModel_dynamic_output_shape_quant8_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_quant8_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_int32_7();
bool is_ignored_dynamic_output_shape_int32_7(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_7) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_7,
          is_ignored_dynamic_output_shape_int32_7,
          ::generated_tests::gather::get_examples_dynamic_output_shape_int32_7(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_int32_7) {
  const Model model = createTestModel_dynamic_output_shape_int32_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_int32_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_7();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_float16_7();
bool is_ignored_dynamic_output_shape_float16_7(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_7) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_7,
          is_ignored_dynamic_output_shape_float16_7,
          ::generated_tests::gather::get_examples_dynamic_output_shape_float16_7(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_float16_7) {
  const Model model = createTestModel_dynamic_output_shape_float16_7();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_float16_7());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_8();
bool is_ignored_8(int);

TEST_F(NeuralnetworksHidlTest, gather_8) {
  Execute(device,
          createTestModel_8,
          is_ignored_8,
          ::generated_tests::gather::get_examples_8());
}

TEST_F(ValidationTest, gather_8) {
  const Model model = createTestModel_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_relaxed_8();
bool is_ignored_relaxed_8(int);

TEST_F(NeuralnetworksHidlTest, gather_relaxed_8) {
  Execute(device,
          createTestModel_relaxed_8,
          is_ignored_relaxed_8,
          ::generated_tests::gather::get_examples_relaxed_8());
}

TEST_F(ValidationTest, gather_relaxed_8) {
  const Model model = createTestModel_relaxed_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_relaxed_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_quant8_8();
bool is_ignored_quant8_8(int);

TEST_F(NeuralnetworksHidlTest, gather_quant8_8) {
  Execute(device,
          createTestModel_quant8_8,
          is_ignored_quant8_8,
          ::generated_tests::gather::get_examples_quant8_8());
}

TEST_F(ValidationTest, gather_quant8_8) {
  const Model model = createTestModel_quant8_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_quant8_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_int32_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_int32_8();
bool is_ignored_int32_8(int);

TEST_F(NeuralnetworksHidlTest, gather_int32_8) {
  Execute(device,
          createTestModel_int32_8,
          is_ignored_int32_8,
          ::generated_tests::gather::get_examples_int32_8());
}

TEST_F(ValidationTest, gather_int32_8) {
  const Model model = createTestModel_int32_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_int32_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_float16_8();
bool is_ignored_float16_8(int);

TEST_F(NeuralnetworksHidlTest, gather_float16_8) {
  Execute(device,
          createTestModel_float16_8,
          is_ignored_float16_8,
          ::generated_tests::gather::get_examples_float16_8());
}

TEST_F(ValidationTest, gather_float16_8) {
  const Model model = createTestModel_float16_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_float16_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_8();
bool is_ignored_dynamic_output_shape_8(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_8) {
  Execute(device,
          createTestModel_dynamic_output_shape_8,
          is_ignored_dynamic_output_shape_8,
          ::generated_tests::gather::get_examples_dynamic_output_shape_8(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_8) {
  const Model model = createTestModel_dynamic_output_shape_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_relaxed_8();
bool is_ignored_dynamic_output_shape_relaxed_8(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_relaxed_8) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_8,
          is_ignored_dynamic_output_shape_relaxed_8,
          ::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_8(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_relaxed_8) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_relaxed_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_quant8_8();
bool is_ignored_dynamic_output_shape_quant8_8(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_quant8_8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_8,
          is_ignored_dynamic_output_shape_quant8_8,
          ::generated_tests::gather::get_examples_dynamic_output_shape_quant8_8(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_quant8_8) {
  const Model model = createTestModel_dynamic_output_shape_quant8_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_quant8_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_int32_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_int32_8();
bool is_ignored_dynamic_output_shape_int32_8(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_int32_8) {
  Execute(device,
          createTestModel_dynamic_output_shape_int32_8,
          is_ignored_dynamic_output_shape_int32_8,
          ::generated_tests::gather::get_examples_dynamic_output_shape_int32_8(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_int32_8) {
  const Model model = createTestModel_dynamic_output_shape_int32_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_int32_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

namespace generated_tests::gather {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_8();

} // namespace generated_tests::gather

namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather {

Model createTestModel_dynamic_output_shape_float16_8();
bool is_ignored_dynamic_output_shape_float16_8(int);

TEST_F(DynamicOutputShapeTest, gather_dynamic_output_shape_float16_8) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_8,
          is_ignored_dynamic_output_shape_float16_8,
          ::generated_tests::gather::get_examples_dynamic_output_shape_float16_8(), true);
}

TEST_F(ValidationTest, gather_dynamic_output_shape_float16_8) {
  const Model model = createTestModel_dynamic_output_shape_float16_8();
  const std::vector<Request> requests = createRequests(::generated_tests::gather::get_examples_dynamic_output_shape_float16_8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::gather

