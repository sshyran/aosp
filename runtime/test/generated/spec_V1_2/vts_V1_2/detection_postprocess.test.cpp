// Generated from detection_postprocess.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_regular();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_regular();
bool is_ignored_regular(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_regular) {
  Execute(device,
          createTestModel_regular,
          is_ignored_regular,
          ::generated_tests::detection_postprocess::get_examples_regular());
}

TEST_F(ValidationTest, detection_postprocess_regular) {
  const Model model = createTestModel_regular();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_regular());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_regular_relaxed();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_regular_relaxed();
bool is_ignored_regular_relaxed(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_regular_relaxed) {
  Execute(device,
          createTestModel_regular_relaxed,
          is_ignored_regular_relaxed,
          ::generated_tests::detection_postprocess::get_examples_regular_relaxed());
}

TEST_F(ValidationTest, detection_postprocess_regular_relaxed) {
  const Model model = createTestModel_regular_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_regular_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_regular_float16();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_regular_float16();
bool is_ignored_regular_float16(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_regular_float16) {
  Execute(device,
          createTestModel_regular_float16,
          is_ignored_regular_float16,
          ::generated_tests::detection_postprocess::get_examples_regular_float16());
}

TEST_F(ValidationTest, detection_postprocess_regular_float16) {
  const Model model = createTestModel_regular_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_regular_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_regular_dynamic_output_shape();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_regular_dynamic_output_shape();
bool is_ignored_regular_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_regular_dynamic_output_shape) {
  Execute(device,
          createTestModel_regular_dynamic_output_shape,
          is_ignored_regular_dynamic_output_shape,
          ::generated_tests::detection_postprocess::get_examples_regular_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, detection_postprocess_regular_dynamic_output_shape) {
  const Model model = createTestModel_regular_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_regular_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_regular_dynamic_output_shape_relaxed();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_regular_dynamic_output_shape_relaxed();
bool is_ignored_regular_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_regular_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_regular_dynamic_output_shape_relaxed,
          is_ignored_regular_dynamic_output_shape_relaxed,
          ::generated_tests::detection_postprocess::get_examples_regular_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, detection_postprocess_regular_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_regular_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_regular_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_regular_dynamic_output_shape_float16();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_regular_dynamic_output_shape_float16();
bool is_ignored_regular_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_regular_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_regular_dynamic_output_shape_float16,
          is_ignored_regular_dynamic_output_shape_float16,
          ::generated_tests::detection_postprocess::get_examples_regular_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, detection_postprocess_regular_dynamic_output_shape_float16) {
  const Model model = createTestModel_regular_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_regular_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel();
bool is_ignored(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess) {
  Execute(device,
          createTestModel,
          is_ignored,
          ::generated_tests::detection_postprocess::get_examples());
}

TEST_F(ValidationTest, detection_postprocess) {
  const Model model = createTestModel();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_relaxed();
bool is_ignored_relaxed(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_relaxed) {
  Execute(device,
          createTestModel_relaxed,
          is_ignored_relaxed,
          ::generated_tests::detection_postprocess::get_examples_relaxed());
}

TEST_F(ValidationTest, detection_postprocess_relaxed) {
  const Model model = createTestModel_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_float16();
bool is_ignored_float16(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_float16) {
  Execute(device,
          createTestModel_float16,
          is_ignored_float16,
          ::generated_tests::detection_postprocess::get_examples_float16());
}

TEST_F(ValidationTest, detection_postprocess_float16) {
  const Model model = createTestModel_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_dynamic_output_shape();
bool is_ignored_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_dynamic_output_shape) {
  Execute(device,
          createTestModel_dynamic_output_shape,
          is_ignored_dynamic_output_shape,
          ::generated_tests::detection_postprocess::get_examples_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, detection_postprocess_dynamic_output_shape) {
  const Model model = createTestModel_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_dynamic_output_shape_relaxed();
bool is_ignored_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed,
          is_ignored_dynamic_output_shape_relaxed,
          ::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, detection_postprocess_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_dynamic_output_shape_float16();
bool is_ignored_dynamic_output_shape_float16(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_dynamic_output_shape_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16,
          is_ignored_dynamic_output_shape_float16,
          ::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_float16(), true);
}

TEST_F(ValidationTest, detection_postprocess_dynamic_output_shape_float16) {
  const Model model = createTestModel_dynamic_output_shape_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_2();
bool is_ignored_2(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_2) {
  Execute(device,
          createTestModel_2,
          is_ignored_2,
          ::generated_tests::detection_postprocess::get_examples_2());
}

TEST_F(ValidationTest, detection_postprocess_2) {
  const Model model = createTestModel_2();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_relaxed_2();
bool is_ignored_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_relaxed_2) {
  Execute(device,
          createTestModel_relaxed_2,
          is_ignored_relaxed_2,
          ::generated_tests::detection_postprocess::get_examples_relaxed_2());
}

TEST_F(ValidationTest, detection_postprocess_relaxed_2) {
  const Model model = createTestModel_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_float16_2();
bool is_ignored_float16_2(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_float16_2) {
  Execute(device,
          createTestModel_float16_2,
          is_ignored_float16_2,
          ::generated_tests::detection_postprocess::get_examples_float16_2());
}

TEST_F(ValidationTest, detection_postprocess_float16_2) {
  const Model model = createTestModel_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_dynamic_output_shape_2();
bool is_ignored_dynamic_output_shape_2(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_dynamic_output_shape_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_2,
          is_ignored_dynamic_output_shape_2,
          ::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_2(), true);
}

TEST_F(ValidationTest, detection_postprocess_dynamic_output_shape_2) {
  const Model model = createTestModel_dynamic_output_shape_2();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_dynamic_output_shape_relaxed_2();
bool is_ignored_dynamic_output_shape_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_dynamic_output_shape_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_2,
          is_ignored_dynamic_output_shape_relaxed_2,
          ::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_relaxed_2(), true);
}

TEST_F(ValidationTest, detection_postprocess_dynamic_output_shape_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_2();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_dynamic_output_shape_float16_2();
bool is_ignored_dynamic_output_shape_float16_2(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_dynamic_output_shape_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_2,
          is_ignored_dynamic_output_shape_float16_2,
          ::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_float16_2(), true);
}

TEST_F(ValidationTest, detection_postprocess_dynamic_output_shape_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_3();
bool is_ignored_3(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_3) {
  Execute(device,
          createTestModel_3,
          is_ignored_3,
          ::generated_tests::detection_postprocess::get_examples_3());
}

TEST_F(ValidationTest, detection_postprocess_3) {
  const Model model = createTestModel_3();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_relaxed_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_relaxed_3();
bool is_ignored_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_relaxed_3) {
  Execute(device,
          createTestModel_relaxed_3,
          is_ignored_relaxed_3,
          ::generated_tests::detection_postprocess::get_examples_relaxed_3());
}

TEST_F(ValidationTest, detection_postprocess_relaxed_3) {
  const Model model = createTestModel_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_float16_3();
bool is_ignored_float16_3(int);

TEST_F(NeuralnetworksHidlTest, detection_postprocess_float16_3) {
  Execute(device,
          createTestModel_float16_3,
          is_ignored_float16_3,
          ::generated_tests::detection_postprocess::get_examples_float16_3());
}

TEST_F(ValidationTest, detection_postprocess_float16_3) {
  const Model model = createTestModel_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_dynamic_output_shape_3();
bool is_ignored_dynamic_output_shape_3(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_dynamic_output_shape_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_3,
          is_ignored_dynamic_output_shape_3,
          ::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_3(), true);
}

TEST_F(ValidationTest, detection_postprocess_dynamic_output_shape_3) {
  const Model model = createTestModel_dynamic_output_shape_3();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relaxed_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_dynamic_output_shape_relaxed_3();
bool is_ignored_dynamic_output_shape_relaxed_3(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_dynamic_output_shape_relaxed_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_relaxed_3,
          is_ignored_dynamic_output_shape_relaxed_3,
          ::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_relaxed_3(), true);
}

TEST_F(ValidationTest, detection_postprocess_dynamic_output_shape_relaxed_3) {
  const Model model = createTestModel_dynamic_output_shape_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

namespace generated_tests::detection_postprocess {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_3();

} // namespace generated_tests::detection_postprocess

namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess {

Model createTestModel_dynamic_output_shape_float16_3();
bool is_ignored_dynamic_output_shape_float16_3(int);

TEST_F(DynamicOutputShapeTest, detection_postprocess_dynamic_output_shape_float16_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_3,
          is_ignored_dynamic_output_shape_float16_3,
          ::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_float16_3(), true);
}

TEST_F(ValidationTest, detection_postprocess_dynamic_output_shape_float16_3) {
  const Model model = createTestModel_dynamic_output_shape_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::detection_postprocess::get_examples_dynamic_output_shape_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::detection_postprocess

