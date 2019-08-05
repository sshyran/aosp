// Generated from sub_v1_2_broadcast.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_none();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_none();
bool is_ignored_none(int);

TEST_F(NeuralnetworksHidlTest, sub_v1_2_broadcast_none) {
  Execute(device,
          createTestModel_none,
          is_ignored_none,
          ::generated_tests::sub_v1_2_broadcast::get_examples_none());
}

TEST_F(ValidationTest, sub_v1_2_broadcast_none) {
  const Model model = createTestModel_none();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_relu();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_relu();
bool is_ignored_relu(int);

TEST_F(NeuralnetworksHidlTest, sub_v1_2_broadcast_relu) {
  Execute(device,
          createTestModel_relu,
          is_ignored_relu,
          ::generated_tests::sub_v1_2_broadcast::get_examples_relu());
}

TEST_F(ValidationTest, sub_v1_2_broadcast_relu) {
  const Model model = createTestModel_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_relu1();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_relu1();
bool is_ignored_relu1(int);

TEST_F(NeuralnetworksHidlTest, sub_v1_2_broadcast_relu1) {
  Execute(device,
          createTestModel_relu1,
          is_ignored_relu1,
          ::generated_tests::sub_v1_2_broadcast::get_examples_relu1());
}

TEST_F(ValidationTest, sub_v1_2_broadcast_relu1) {
  const Model model = createTestModel_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_relu6();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_relu6();
bool is_ignored_relu6(int);

TEST_F(NeuralnetworksHidlTest, sub_v1_2_broadcast_relu6) {
  Execute(device,
          createTestModel_relu6,
          is_ignored_relu6,
          ::generated_tests::sub_v1_2_broadcast::get_examples_relu6());
}

TEST_F(ValidationTest, sub_v1_2_broadcast_relu6) {
  const Model model = createTestModel_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_none();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_float16_none();
bool is_ignored_float16_none(int);

TEST_F(NeuralnetworksHidlTest, sub_v1_2_broadcast_float16_none) {
  Execute(device,
          createTestModel_float16_none,
          is_ignored_float16_none,
          ::generated_tests::sub_v1_2_broadcast::get_examples_float16_none());
}

TEST_F(ValidationTest, sub_v1_2_broadcast_float16_none) {
  const Model model = createTestModel_float16_none();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_float16_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_relu();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_float16_relu();
bool is_ignored_float16_relu(int);

TEST_F(NeuralnetworksHidlTest, sub_v1_2_broadcast_float16_relu) {
  Execute(device,
          createTestModel_float16_relu,
          is_ignored_float16_relu,
          ::generated_tests::sub_v1_2_broadcast::get_examples_float16_relu());
}

TEST_F(ValidationTest, sub_v1_2_broadcast_float16_relu) {
  const Model model = createTestModel_float16_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_float16_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_relu1();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_float16_relu1();
bool is_ignored_float16_relu1(int);

TEST_F(NeuralnetworksHidlTest, sub_v1_2_broadcast_float16_relu1) {
  Execute(device,
          createTestModel_float16_relu1,
          is_ignored_float16_relu1,
          ::generated_tests::sub_v1_2_broadcast::get_examples_float16_relu1());
}

TEST_F(ValidationTest, sub_v1_2_broadcast_float16_relu1) {
  const Model model = createTestModel_float16_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_float16_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_float16_relu6();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_float16_relu6();
bool is_ignored_float16_relu6(int);

TEST_F(NeuralnetworksHidlTest, sub_v1_2_broadcast_float16_relu6) {
  Execute(device,
          createTestModel_float16_relu6,
          is_ignored_float16_relu6,
          ::generated_tests::sub_v1_2_broadcast::get_examples_float16_relu6());
}

TEST_F(ValidationTest, sub_v1_2_broadcast_float16_relu6) {
  const Model model = createTestModel_float16_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_float16_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_none();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_dynamic_output_shape_none();
bool is_ignored_dynamic_output_shape_none(int);

TEST_F(DynamicOutputShapeTest, sub_v1_2_broadcast_dynamic_output_shape_none) {
  Execute(device,
          createTestModel_dynamic_output_shape_none,
          is_ignored_dynamic_output_shape_none,
          ::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_none(), true);
}

TEST_F(ValidationTest, sub_v1_2_broadcast_dynamic_output_shape_none) {
  const Model model = createTestModel_dynamic_output_shape_none();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relu();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_dynamic_output_shape_relu();
bool is_ignored_dynamic_output_shape_relu(int);

TEST_F(DynamicOutputShapeTest, sub_v1_2_broadcast_dynamic_output_shape_relu) {
  Execute(device,
          createTestModel_dynamic_output_shape_relu,
          is_ignored_dynamic_output_shape_relu,
          ::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_relu(), true);
}

TEST_F(ValidationTest, sub_v1_2_broadcast_dynamic_output_shape_relu) {
  const Model model = createTestModel_dynamic_output_shape_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relu1();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_dynamic_output_shape_relu1();
bool is_ignored_dynamic_output_shape_relu1(int);

TEST_F(DynamicOutputShapeTest, sub_v1_2_broadcast_dynamic_output_shape_relu1) {
  Execute(device,
          createTestModel_dynamic_output_shape_relu1,
          is_ignored_dynamic_output_shape_relu1,
          ::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_relu1(), true);
}

TEST_F(ValidationTest, sub_v1_2_broadcast_dynamic_output_shape_relu1) {
  const Model model = createTestModel_dynamic_output_shape_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_relu6();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_dynamic_output_shape_relu6();
bool is_ignored_dynamic_output_shape_relu6(int);

TEST_F(DynamicOutputShapeTest, sub_v1_2_broadcast_dynamic_output_shape_relu6) {
  Execute(device,
          createTestModel_dynamic_output_shape_relu6,
          is_ignored_dynamic_output_shape_relu6,
          ::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_relu6(), true);
}

TEST_F(ValidationTest, sub_v1_2_broadcast_dynamic_output_shape_relu6) {
  const Model model = createTestModel_dynamic_output_shape_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_none();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_dynamic_output_shape_float16_none();
bool is_ignored_dynamic_output_shape_float16_none(int);

TEST_F(DynamicOutputShapeTest, sub_v1_2_broadcast_dynamic_output_shape_float16_none) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_none,
          is_ignored_dynamic_output_shape_float16_none,
          ::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_float16_none(), true);
}

TEST_F(ValidationTest, sub_v1_2_broadcast_dynamic_output_shape_float16_none) {
  const Model model = createTestModel_dynamic_output_shape_float16_none();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_float16_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_relu();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_dynamic_output_shape_float16_relu();
bool is_ignored_dynamic_output_shape_float16_relu(int);

TEST_F(DynamicOutputShapeTest, sub_v1_2_broadcast_dynamic_output_shape_float16_relu) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_relu,
          is_ignored_dynamic_output_shape_float16_relu,
          ::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_float16_relu(), true);
}

TEST_F(ValidationTest, sub_v1_2_broadcast_dynamic_output_shape_float16_relu) {
  const Model model = createTestModel_dynamic_output_shape_float16_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_float16_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_relu1();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_dynamic_output_shape_float16_relu1();
bool is_ignored_dynamic_output_shape_float16_relu1(int);

TEST_F(DynamicOutputShapeTest, sub_v1_2_broadcast_dynamic_output_shape_float16_relu1) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_relu1,
          is_ignored_dynamic_output_shape_float16_relu1,
          ::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_float16_relu1(), true);
}

TEST_F(ValidationTest, sub_v1_2_broadcast_dynamic_output_shape_float16_relu1) {
  const Model model = createTestModel_dynamic_output_shape_float16_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_float16_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_float16_relu6();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_dynamic_output_shape_float16_relu6();
bool is_ignored_dynamic_output_shape_float16_relu6(int);

TEST_F(DynamicOutputShapeTest, sub_v1_2_broadcast_dynamic_output_shape_float16_relu6) {
  Execute(device,
          createTestModel_dynamic_output_shape_float16_relu6,
          is_ignored_dynamic_output_shape_float16_relu6,
          ::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_float16_relu6(), true);
}

TEST_F(ValidationTest, sub_v1_2_broadcast_dynamic_output_shape_float16_relu6) {
  const Model model = createTestModel_dynamic_output_shape_float16_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_dynamic_output_shape_float16_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, sub_v1_2_broadcast_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::sub_v1_2_broadcast::get_examples_quant8());
}

TEST_F(ValidationTest, sub_v1_2_broadcast_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

namespace generated_tests::sub_v1_2_broadcast {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8_dynamic_output_shape();

} // namespace generated_tests::sub_v1_2_broadcast

namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast {

Model createTestModel_quant8_dynamic_output_shape();
bool is_ignored_quant8_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, sub_v1_2_broadcast_quant8_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant8_dynamic_output_shape,
          is_ignored_quant8_dynamic_output_shape,
          ::generated_tests::sub_v1_2_broadcast::get_examples_quant8_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, sub_v1_2_broadcast_quant8_dynamic_output_shape) {
  const Model model = createTestModel_quant8_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::sub_v1_2_broadcast::get_examples_quant8_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::sub_v1_2_broadcast

