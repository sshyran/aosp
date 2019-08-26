// Generated from prelu.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, prelu) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::prelu::get_examples());
}

TEST_F(ValidationTest, prelu) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, prelu_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::prelu::get_examples_relaxed());
}

TEST_F(ValidationTest, prelu_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::prelu::get_examples_quant8());
}

TEST_F(ValidationTest, prelu_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_2();
bool is_ignored_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_2) {
  Execute(device,
          createTestModel_quant8_2,
          is_ignored_quant8_2,
          ::generated_tests::prelu::get_examples_quant8_2());
}

TEST_F(ValidationTest, prelu_quant8_2) {
  const Model model = createTestModel_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_3();
bool is_ignored_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_3) {
  Execute(device,
          createTestModel_quant8_3,
          is_ignored_quant8_3,
          ::generated_tests::prelu::get_examples_quant8_3());
}

TEST_F(ValidationTest, prelu_quant8_3) {
  const Model model = createTestModel_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_quant8_4();
bool is_ignored_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, prelu_quant8_4) {
  Execute(device,
          createTestModel_quant8_4,
          is_ignored_quant8_4,
          ::generated_tests::prelu::get_examples_quant8_4());
}

TEST_F(ValidationTest, prelu_quant8_4) {
  const Model model = createTestModel_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, prelu_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::prelu::get_examples_float16());
}

TEST_F(ValidationTest, prelu_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_weight_as_input();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_weight_as_input();
bool is_ignored_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, prelu_weight_as_input) {
  Execute(device,
          createTestModel_weight_as_input,
          is_ignored_weight_as_input,
          ::generated_tests::prelu::get_examples_weight_as_input());
}

TEST_F(ValidationTest, prelu_weight_as_input) {
  const Model model = createTestModel_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_weight_as_input_relaxed();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_weight_as_input_relaxed();
bool is_ignored_weight_as_input_relaxed(int);

TEST_F(NeuralnetworksHidlTest, prelu_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_weight_as_input_relaxed,
          is_ignored_weight_as_input_relaxed,
          ::generated_tests::prelu::get_examples_weight_as_input_relaxed());
}

TEST_F(ValidationTest, prelu_weight_as_input_relaxed) {
  const Model model = createTestModel_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_weight_as_input_quant8();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_weight_as_input_quant8();
bool is_ignored_weight_as_input_quant8(int);

TEST_F(NeuralnetworksHidlTest, prelu_weight_as_input_quant8) {
  Execute(device,
          createTestModel_weight_as_input_quant8,
          is_ignored_weight_as_input_quant8,
          ::generated_tests::prelu::get_examples_weight_as_input_quant8());
}

TEST_F(ValidationTest, prelu_weight_as_input_quant8) {
  const Model model = createTestModel_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_weight_as_input_quant8_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_weight_as_input_quant8_2();
bool is_ignored_weight_as_input_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, prelu_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_weight_as_input_quant8_2,
          is_ignored_weight_as_input_quant8_2,
          ::generated_tests::prelu::get_examples_weight_as_input_quant8_2());
}

TEST_F(ValidationTest, prelu_weight_as_input_quant8_2) {
  const Model model = createTestModel_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_weight_as_input_quant8_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_weight_as_input_quant8_3();
bool is_ignored_weight_as_input_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, prelu_weight_as_input_quant8_3) {
  Execute(device,
          createTestModel_weight_as_input_quant8_3,
          is_ignored_weight_as_input_quant8_3,
          ::generated_tests::prelu::get_examples_weight_as_input_quant8_3());
}

TEST_F(ValidationTest, prelu_weight_as_input_quant8_3) {
  const Model model = createTestModel_weight_as_input_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_weight_as_input_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_weight_as_input_quant8_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_weight_as_input_quant8_4();
bool is_ignored_weight_as_input_quant8_4(int);

TEST_F(NeuralnetworksHidlTest, prelu_weight_as_input_quant8_4) {
  Execute(device,
          createTestModel_weight_as_input_quant8_4,
          is_ignored_weight_as_input_quant8_4,
          ::generated_tests::prelu::get_examples_weight_as_input_quant8_4());
}

TEST_F(ValidationTest, prelu_weight_as_input_quant8_4) {
  const Model model = createTestModel_weight_as_input_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_weight_as_input_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_weight_as_input_float16();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_weight_as_input_float16();
bool is_ignored_weight_as_input_float16(int);

TEST_F(NeuralnetworksHidlTest, prelu_weight_as_input_float16) {
  Execute(device,
          createTestModel_weight_as_input_float16,
          is_ignored_weight_as_input_float16,
          ::generated_tests::prelu::get_examples_weight_as_input_float16());
}

TEST_F(ValidationTest, prelu_weight_as_input_float16) {
  const Model model = createTestModel_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::prelu::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_quant8_2();
bool is_ignored_dynamic_output_shape_quant8_2(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_2,
          is_ignored_dynamic_output_shape_quant8_2,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_quant8_2(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_quant8_3();
bool is_ignored_dynamic_output_shape_quant8_3(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_quant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_3,
          is_ignored_dynamic_output_shape_quant8_3,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_quant8_3(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_quant8_3) {
  const Model model = createTestModel_dynamic_output_shape_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_quant8_4();
bool is_ignored_dynamic_output_shape_quant8_4(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_quant8_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8_4,
          is_ignored_dynamic_output_shape_quant8_4,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_quant8_4(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_quant8_4) {
  const Model model = createTestModel_dynamic_output_shape_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_weight_as_input();
bool is_ignored_dynamic_output_shape_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_weight_as_input,
          is_ignored_dynamic_output_shape_weight_as_input,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input_relaxed();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_weight_as_input_relaxed();
bool is_ignored_dynamic_output_shape_weight_as_input_relaxed(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_weight_as_input_relaxed,
          is_ignored_dynamic_output_shape_weight_as_input_relaxed,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_relaxed(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_weight_as_input_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input_quant8();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_weight_as_input_quant8();
bool is_ignored_dynamic_output_shape_weight_as_input_quant8(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_weight_as_input_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_weight_as_input_quant8,
          is_ignored_dynamic_output_shape_weight_as_input_quant8,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_quant8(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_weight_as_input_quant8) {
  const Model model = createTestModel_dynamic_output_shape_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input_quant8_2();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_weight_as_input_quant8_2();
bool is_ignored_dynamic_output_shape_weight_as_input_quant8_2(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_weight_as_input_quant8_2,
          is_ignored_dynamic_output_shape_weight_as_input_quant8_2,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_quant8_2(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_weight_as_input_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input_quant8_3();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_weight_as_input_quant8_3();
bool is_ignored_dynamic_output_shape_weight_as_input_quant8_3(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_weight_as_input_quant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_weight_as_input_quant8_3,
          is_ignored_dynamic_output_shape_weight_as_input_quant8_3,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_quant8_3(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_weight_as_input_quant8_3) {
  const Model model = createTestModel_dynamic_output_shape_weight_as_input_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input_quant8_4();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_weight_as_input_quant8_4();
bool is_ignored_dynamic_output_shape_weight_as_input_quant8_4(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_weight_as_input_quant8_4) {
  Execute(device,
          createTestModel_dynamic_output_shape_weight_as_input_quant8_4,
          is_ignored_dynamic_output_shape_weight_as_input_quant8_4,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_quant8_4(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_weight_as_input_quant8_4) {
  const Model model = createTestModel_dynamic_output_shape_weight_as_input_quant8_4();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_quant8_4());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

namespace generated_tests::prelu {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_weight_as_input_float16();

} // namespace generated_tests::prelu

namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu {

Model createTestModel_dynamic_output_shape_weight_as_input_float16();
bool is_ignored_dynamic_output_shape_weight_as_input_float16(int);

TEST_F(DynamicOutputShapeTest, prelu_dynamic_output_shape_weight_as_input_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_weight_as_input_float16,
          is_ignored_dynamic_output_shape_weight_as_input_float16,
          ::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_float16(), true);
}

TEST_F(ValidationTest, prelu_dynamic_output_shape_weight_as_input_float16) {
  const Model model = createTestModel_dynamic_output_shape_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::prelu::get_examples_dynamic_output_shape_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::prelu

