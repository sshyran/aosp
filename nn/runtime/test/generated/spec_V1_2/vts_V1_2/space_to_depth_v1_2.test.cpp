// Generated from space_to_depth_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc();
bool is_ignored_nhwc(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc) {
  Execute(device,
          createTestModel_nhwc,
          is_ignored_nhwc,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc) {
  const Model model = createTestModel_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_relaxed();
bool is_ignored_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_relaxed) {
  Execute(device,
          createTestModel_nhwc_relaxed,
          is_ignored_nhwc_relaxed,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_relaxed());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_relaxed) {
  const Model model = createTestModel_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_float16();
bool is_ignored_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_float16) {
  Execute(device,
          createTestModel_nhwc_float16,
          is_ignored_nhwc_float16,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_float16());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_float16) {
  const Model model = createTestModel_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_quant8();
bool is_ignored_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_quant8) {
  Execute(device,
          createTestModel_nhwc_quant8,
          is_ignored_nhwc_quant8,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_quant8());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_quant8) {
  const Model model = createTestModel_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw();
bool is_ignored_nchw(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw) {
  Execute(device,
          createTestModel_nchw,
          is_ignored_nchw,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw) {
  const Model model = createTestModel_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_relaxed();
bool is_ignored_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_relaxed) {
  Execute(device,
          createTestModel_nchw_relaxed,
          is_ignored_nchw_relaxed,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_relaxed());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_relaxed) {
  const Model model = createTestModel_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_float16();
bool is_ignored_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_float16) {
  Execute(device,
          createTestModel_nchw_float16,
          is_ignored_nchw_float16,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_float16());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_float16) {
  const Model model = createTestModel_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_quant8();
bool is_ignored_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_quant8) {
  Execute(device,
          createTestModel_nchw_quant8,
          is_ignored_nchw_quant8,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_quant8());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_quant8) {
  const Model model = createTestModel_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc();
bool is_ignored_dynamic_output_shape_nhwc(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc,
          is_ignored_dynamic_output_shape_nhwc,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc) {
  const Model model = createTestModel_dynamic_output_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_relaxed();
bool is_ignored_dynamic_output_shape_nhwc_relaxed(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relaxed,
          is_ignored_dynamic_output_shape_nhwc_relaxed,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_float16();
bool is_ignored_dynamic_output_shape_nhwc_float16(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_float16,
          is_ignored_dynamic_output_shape_nhwc_float16,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_float16) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_quant8();
bool is_ignored_dynamic_output_shape_nhwc_quant8(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_quant8,
          is_ignored_dynamic_output_shape_nhwc_quant8,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_quant8(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw();
bool is_ignored_dynamic_output_shape_nchw(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw,
          is_ignored_dynamic_output_shape_nchw,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw) {
  const Model model = createTestModel_dynamic_output_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_relaxed();
bool is_ignored_dynamic_output_shape_nchw_relaxed(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relaxed,
          is_ignored_dynamic_output_shape_nchw_relaxed,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_float16();
bool is_ignored_dynamic_output_shape_nchw_float16(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_float16,
          is_ignored_dynamic_output_shape_nchw_float16,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_float16) {
  const Model model = createTestModel_dynamic_output_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_quant8();
bool is_ignored_dynamic_output_shape_nchw_quant8(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_quant8,
          is_ignored_dynamic_output_shape_nchw_quant8,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_quant8(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_2();
bool is_ignored_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_2) {
  Execute(device,
          createTestModel_nhwc_2,
          is_ignored_nhwc_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_2());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_2) {
  const Model model = createTestModel_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_relaxed_2();
bool is_ignored_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_2,
          is_ignored_nhwc_relaxed_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_relaxed_2());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_relaxed_2) {
  const Model model = createTestModel_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_float16_2();
bool is_ignored_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_float16_2) {
  Execute(device,
          createTestModel_nhwc_float16_2,
          is_ignored_nhwc_float16_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_float16_2());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_float16_2) {
  const Model model = createTestModel_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_quant8_2();
bool is_ignored_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_quant8_2) {
  Execute(device,
          createTestModel_nhwc_quant8_2,
          is_ignored_nhwc_quant8_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_quant8_2());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_quant8_2) {
  const Model model = createTestModel_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_2();
bool is_ignored_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_2) {
  Execute(device,
          createTestModel_nchw_2,
          is_ignored_nchw_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_2());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_2) {
  const Model model = createTestModel_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_relaxed_2();
bool is_ignored_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_relaxed_2) {
  Execute(device,
          createTestModel_nchw_relaxed_2,
          is_ignored_nchw_relaxed_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_relaxed_2());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_relaxed_2) {
  const Model model = createTestModel_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_float16_2();
bool is_ignored_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_float16_2) {
  Execute(device,
          createTestModel_nchw_float16_2,
          is_ignored_nchw_float16_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_float16_2());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_float16_2) {
  const Model model = createTestModel_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_quant8_2();
bool is_ignored_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_quant8_2) {
  Execute(device,
          createTestModel_nchw_quant8_2,
          is_ignored_nchw_quant8_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_quant8_2());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_quant8_2) {
  const Model model = createTestModel_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_2();
bool is_ignored_dynamic_output_shape_nhwc_2(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_2,
          is_ignored_dynamic_output_shape_nhwc_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_2(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_relaxed_2();
bool is_ignored_dynamic_output_shape_nhwc_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relaxed_2,
          is_ignored_dynamic_output_shape_nhwc_relaxed_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_float16_2();
bool is_ignored_dynamic_output_shape_nhwc_float16_2(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_float16_2,
          is_ignored_dynamic_output_shape_nhwc_float16_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_quant8_2();
bool is_ignored_dynamic_output_shape_nhwc_quant8_2(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_quant8_2,
          is_ignored_dynamic_output_shape_nhwc_quant8_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_2();
bool is_ignored_dynamic_output_shape_nchw_2(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_2,
          is_ignored_dynamic_output_shape_nchw_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_2(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_relaxed_2();
bool is_ignored_dynamic_output_shape_nchw_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relaxed_2,
          is_ignored_dynamic_output_shape_nchw_relaxed_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_float16_2();
bool is_ignored_dynamic_output_shape_nchw_float16_2(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_float16_2,
          is_ignored_dynamic_output_shape_nchw_float16_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_float16_2(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8_2();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_quant8_2();
bool is_ignored_dynamic_output_shape_nchw_quant8_2(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_quant8_2,
          is_ignored_dynamic_output_shape_nchw_quant8_2,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_3();
bool is_ignored_nhwc_3(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_3) {
  Execute(device,
          createTestModel_nhwc_3,
          is_ignored_nhwc_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_3());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_3) {
  const Model model = createTestModel_nhwc_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_relaxed_3();
bool is_ignored_nhwc_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_relaxed_3) {
  Execute(device,
          createTestModel_nhwc_relaxed_3,
          is_ignored_nhwc_relaxed_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_relaxed_3());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_relaxed_3) {
  const Model model = createTestModel_nhwc_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_float16_3();
bool is_ignored_nhwc_float16_3(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_float16_3) {
  Execute(device,
          createTestModel_nhwc_float16_3,
          is_ignored_nhwc_float16_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_float16_3());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_float16_3) {
  const Model model = createTestModel_nhwc_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nhwc_quant8_3();
bool is_ignored_nhwc_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nhwc_quant8_3) {
  Execute(device,
          createTestModel_nhwc_quant8_3,
          is_ignored_nhwc_quant8_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_nhwc_quant8_3());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nhwc_quant8_3) {
  const Model model = createTestModel_nhwc_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nhwc_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_3();
bool is_ignored_nchw_3(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_3) {
  Execute(device,
          createTestModel_nchw_3,
          is_ignored_nchw_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_3());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_3) {
  const Model model = createTestModel_nchw_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_relaxed_3();
bool is_ignored_nchw_relaxed_3(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_relaxed_3) {
  Execute(device,
          createTestModel_nchw_relaxed_3,
          is_ignored_nchw_relaxed_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_relaxed_3());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_relaxed_3) {
  const Model model = createTestModel_nchw_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_float16_3();
bool is_ignored_nchw_float16_3(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_float16_3) {
  Execute(device,
          createTestModel_nchw_float16_3,
          is_ignored_nchw_float16_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_float16_3());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_float16_3) {
  const Model model = createTestModel_nchw_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_nchw_quant8_3();
bool is_ignored_nchw_quant8_3(int);

TEST_F(NeuralnetworksHidlTest, space_to_depth_v1_2_nchw_quant8_3) {
  Execute(device,
          createTestModel_nchw_quant8_3,
          is_ignored_nchw_quant8_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_nchw_quant8_3());
}

TEST_F(ValidationTest, space_to_depth_v1_2_nchw_quant8_3) {
  const Model model = createTestModel_nchw_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_nchw_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_3();
bool is_ignored_dynamic_output_shape_nhwc_3(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_3,
          is_ignored_dynamic_output_shape_nhwc_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_3(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_3) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_relaxed_3();
bool is_ignored_dynamic_output_shape_nhwc_relaxed_3(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_relaxed_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relaxed_3,
          is_ignored_dynamic_output_shape_nhwc_relaxed_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed_3(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_relaxed_3) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_float16_3();
bool is_ignored_dynamic_output_shape_nhwc_float16_3(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_float16_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_float16_3,
          is_ignored_dynamic_output_shape_nhwc_float16_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_float16_3(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_float16_3) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_quant8_3();
bool is_ignored_dynamic_output_shape_nhwc_quant8_3(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_quant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_quant8_3,
          is_ignored_dynamic_output_shape_nhwc_quant8_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_quant8_3(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nhwc_quant8_3) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nhwc_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_3();
bool is_ignored_dynamic_output_shape_nchw_3(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_3,
          is_ignored_dynamic_output_shape_nchw_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_3(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_3) {
  const Model model = createTestModel_dynamic_output_shape_nchw_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_relaxed_3();
bool is_ignored_dynamic_output_shape_nchw_relaxed_3(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_relaxed_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relaxed_3,
          is_ignored_dynamic_output_shape_nchw_relaxed_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_relaxed_3(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_relaxed_3) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relaxed_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_relaxed_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_float16_3();
bool is_ignored_dynamic_output_shape_nchw_float16_3(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_float16_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_float16_3,
          is_ignored_dynamic_output_shape_nchw_float16_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_float16_3(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_float16_3) {
  const Model model = createTestModel_dynamic_output_shape_nchw_float16_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_float16_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

namespace generated_tests::space_to_depth_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8_3();

} // namespace generated_tests::space_to_depth_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_quant8_3();
bool is_ignored_dynamic_output_shape_nchw_quant8_3(int);

TEST_F(DynamicOutputShapeTest, space_to_depth_v1_2_dynamic_output_shape_nchw_quant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_quant8_3,
          is_ignored_dynamic_output_shape_nchw_quant8_3,
          ::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_quant8_3(), true);
}

TEST_F(ValidationTest, space_to_depth_v1_2_dynamic_output_shape_nchw_quant8_3) {
  const Model model = createTestModel_dynamic_output_shape_nchw_quant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::space_to_depth_v1_2::get_examples_dynamic_output_shape_nchw_quant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::space_to_depth_v1_2

