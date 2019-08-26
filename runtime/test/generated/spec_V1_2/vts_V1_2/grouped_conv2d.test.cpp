// Generated from grouped_conv2d.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none();
bool is_ignored_nhwc_none(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none) {
  Execute(device,
          createTestModel_nhwc_none,
          is_ignored_nhwc_none,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none) {
  const Model model = createTestModel_nhwc_none();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_weight_as_input();
bool is_ignored_nhwc_none_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_none_weight_as_input,
          is_ignored_nhwc_none_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_weight_as_input) {
  const Model model = createTestModel_nhwc_none_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed();
bool is_ignored_nhwc_none_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_relaxed) {
  Execute(device,
          createTestModel_nhwc_none_relaxed,
          is_ignored_nhwc_none_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed) {
  const Model model = createTestModel_nhwc_none_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_relaxed_weight_as_input();
bool is_ignored_nhwc_none_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_none_relaxed_weight_as_input,
          is_ignored_nhwc_none_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_relaxed_weight_as_input) {
  const Model model = createTestModel_nhwc_none_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8();
bool is_ignored_nhwc_none_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8) {
  Execute(device,
          createTestModel_nhwc_none_quant8,
          is_ignored_nhwc_none_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8) {
  const Model model = createTestModel_nhwc_none_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_weight_as_input();
bool is_ignored_nhwc_none_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_none_quant8_weight_as_input,
          is_ignored_nhwc_none_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_weight_as_input) {
  const Model model = createTestModel_nhwc_none_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_2();
bool is_ignored_nhwc_none_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_2,
          is_ignored_nhwc_none_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_2) {
  const Model model = createTestModel_nhwc_none_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_quant8_weight_as_input_2();
bool is_ignored_nhwc_none_quant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nhwc_none_quant8_weight_as_input_2,
          is_ignored_nhwc_none_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_quant8_weight_as_input_2) {
  const Model model = createTestModel_nhwc_none_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8();
bool is_ignored_nhwc_none_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8,
          is_ignored_nhwc_none_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8) {
  const Model model = createTestModel_nhwc_none_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_weight_as_input();
bool is_ignored_nhwc_none_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_weight_as_input,
          is_ignored_nhwc_none_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_weight_as_input) {
  const Model model = createTestModel_nhwc_none_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_2();
bool is_ignored_nhwc_none_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_2,
          is_ignored_nhwc_none_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_channelQuant8_weight_as_input_2();
bool is_ignored_nhwc_none_channelQuant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nhwc_none_channelQuant8_weight_as_input_2,
          is_ignored_nhwc_none_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_nhwc_none_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16();
bool is_ignored_nhwc_none_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_float16) {
  Execute(device,
          createTestModel_nhwc_none_float16,
          is_ignored_nhwc_none_float16,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16) {
  const Model model = createTestModel_nhwc_none_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_none_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_none_float16_weight_as_input();
bool is_ignored_nhwc_none_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_none_float16_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_none_float16_weight_as_input,
          is_ignored_nhwc_none_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_none_float16_weight_as_input) {
  const Model model = createTestModel_nhwc_none_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_none_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu();
bool is_ignored_nhwc_relu(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu) {
  Execute(device,
          createTestModel_nhwc_relu,
          is_ignored_nhwc_relu,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu) {
  const Model model = createTestModel_nhwc_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_weight_as_input();
bool is_ignored_nhwc_relu_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu_weight_as_input,
          is_ignored_nhwc_relu_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_weight_as_input) {
  const Model model = createTestModel_nhwc_relu_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed();
bool is_ignored_nhwc_relu_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_relaxed) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed,
          is_ignored_nhwc_relu_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed) {
  const Model model = createTestModel_nhwc_relu_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_relaxed_weight_as_input();
bool is_ignored_nhwc_relu_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu_relaxed_weight_as_input,
          is_ignored_nhwc_relu_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_relaxed_weight_as_input) {
  const Model model = createTestModel_nhwc_relu_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8();
bool is_ignored_nhwc_relu_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8) {
  Execute(device,
          createTestModel_nhwc_relu_quant8,
          is_ignored_nhwc_relu_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8) {
  const Model model = createTestModel_nhwc_relu_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_weight_as_input();
bool is_ignored_nhwc_relu_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_weight_as_input,
          is_ignored_nhwc_relu_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_weight_as_input) {
  const Model model = createTestModel_nhwc_relu_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_2();
bool is_ignored_nhwc_relu_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_2,
          is_ignored_nhwc_relu_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_2) {
  const Model model = createTestModel_nhwc_relu_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_quant8_weight_as_input_2();
bool is_ignored_nhwc_relu_quant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nhwc_relu_quant8_weight_as_input_2,
          is_ignored_nhwc_relu_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_quant8_weight_as_input_2) {
  const Model model = createTestModel_nhwc_relu_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8();
bool is_ignored_nhwc_relu_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8,
          is_ignored_nhwc_relu_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8) {
  const Model model = createTestModel_nhwc_relu_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_weight_as_input();
bool is_ignored_nhwc_relu_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_weight_as_input,
          is_ignored_nhwc_relu_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_weight_as_input) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_2();
bool is_ignored_nhwc_relu_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_2,
          is_ignored_nhwc_relu_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_channelQuant8_weight_as_input_2();
bool is_ignored_nhwc_relu_channelQuant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nhwc_relu_channelQuant8_weight_as_input_2,
          is_ignored_nhwc_relu_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_nhwc_relu_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16();
bool is_ignored_nhwc_relu_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_float16) {
  Execute(device,
          createTestModel_nhwc_relu_float16,
          is_ignored_nhwc_relu_float16,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16) {
  const Model model = createTestModel_nhwc_relu_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu_float16_weight_as_input();
bool is_ignored_nhwc_relu_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu_float16_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu_float16_weight_as_input,
          is_ignored_nhwc_relu_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu_float16_weight_as_input) {
  const Model model = createTestModel_nhwc_relu_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1();
bool is_ignored_nhwc_relu1(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1) {
  Execute(device,
          createTestModel_nhwc_relu1,
          is_ignored_nhwc_relu1,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1) {
  const Model model = createTestModel_nhwc_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_weight_as_input();
bool is_ignored_nhwc_relu1_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu1_weight_as_input,
          is_ignored_nhwc_relu1_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_weight_as_input) {
  const Model model = createTestModel_nhwc_relu1_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed();
bool is_ignored_nhwc_relu1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_relaxed) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed,
          is_ignored_nhwc_relu1_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed) {
  const Model model = createTestModel_nhwc_relu1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_relaxed_weight_as_input();
bool is_ignored_nhwc_relu1_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu1_relaxed_weight_as_input,
          is_ignored_nhwc_relu1_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_relaxed_weight_as_input) {
  const Model model = createTestModel_nhwc_relu1_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8();
bool is_ignored_nhwc_relu1_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8,
          is_ignored_nhwc_relu1_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8) {
  const Model model = createTestModel_nhwc_relu1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_weight_as_input();
bool is_ignored_nhwc_relu1_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_weight_as_input,
          is_ignored_nhwc_relu1_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_weight_as_input) {
  const Model model = createTestModel_nhwc_relu1_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_2();
bool is_ignored_nhwc_relu1_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_2,
          is_ignored_nhwc_relu1_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_quant8_weight_as_input_2();
bool is_ignored_nhwc_relu1_quant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nhwc_relu1_quant8_weight_as_input_2,
          is_ignored_nhwc_relu1_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_quant8_weight_as_input_2) {
  const Model model = createTestModel_nhwc_relu1_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8();
bool is_ignored_nhwc_relu1_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8,
          is_ignored_nhwc_relu1_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_weight_as_input();
bool is_ignored_nhwc_relu1_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_weight_as_input,
          is_ignored_nhwc_relu1_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_weight_as_input) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_2();
bool is_ignored_nhwc_relu1_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_2,
          is_ignored_nhwc_relu1_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_channelQuant8_weight_as_input_2();
bool is_ignored_nhwc_relu1_channelQuant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nhwc_relu1_channelQuant8_weight_as_input_2,
          is_ignored_nhwc_relu1_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_nhwc_relu1_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16();
bool is_ignored_nhwc_relu1_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_float16) {
  Execute(device,
          createTestModel_nhwc_relu1_float16,
          is_ignored_nhwc_relu1_float16,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16) {
  const Model model = createTestModel_nhwc_relu1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu1_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu1_float16_weight_as_input();
bool is_ignored_nhwc_relu1_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu1_float16_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu1_float16_weight_as_input,
          is_ignored_nhwc_relu1_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu1_float16_weight_as_input) {
  const Model model = createTestModel_nhwc_relu1_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu1_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6();
bool is_ignored_nhwc_relu6(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6) {
  Execute(device,
          createTestModel_nhwc_relu6,
          is_ignored_nhwc_relu6,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6) {
  const Model model = createTestModel_nhwc_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_weight_as_input();
bool is_ignored_nhwc_relu6_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu6_weight_as_input,
          is_ignored_nhwc_relu6_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_weight_as_input) {
  const Model model = createTestModel_nhwc_relu6_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed();
bool is_ignored_nhwc_relu6_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_relaxed) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed,
          is_ignored_nhwc_relu6_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed) {
  const Model model = createTestModel_nhwc_relu6_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_relaxed_weight_as_input();
bool is_ignored_nhwc_relu6_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu6_relaxed_weight_as_input,
          is_ignored_nhwc_relu6_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_relaxed_weight_as_input) {
  const Model model = createTestModel_nhwc_relu6_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8();
bool is_ignored_nhwc_relu6_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8,
          is_ignored_nhwc_relu6_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8) {
  const Model model = createTestModel_nhwc_relu6_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_weight_as_input();
bool is_ignored_nhwc_relu6_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_weight_as_input,
          is_ignored_nhwc_relu6_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_weight_as_input) {
  const Model model = createTestModel_nhwc_relu6_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_2();
bool is_ignored_nhwc_relu6_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_2,
          is_ignored_nhwc_relu6_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_quant8_weight_as_input_2();
bool is_ignored_nhwc_relu6_quant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nhwc_relu6_quant8_weight_as_input_2,
          is_ignored_nhwc_relu6_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_quant8_weight_as_input_2) {
  const Model model = createTestModel_nhwc_relu6_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8();
bool is_ignored_nhwc_relu6_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8,
          is_ignored_nhwc_relu6_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_weight_as_input();
bool is_ignored_nhwc_relu6_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_weight_as_input,
          is_ignored_nhwc_relu6_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_weight_as_input) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_2();
bool is_ignored_nhwc_relu6_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_2,
          is_ignored_nhwc_relu6_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_channelQuant8_weight_as_input_2();
bool is_ignored_nhwc_relu6_channelQuant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nhwc_relu6_channelQuant8_weight_as_input_2,
          is_ignored_nhwc_relu6_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_nhwc_relu6_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16();
bool is_ignored_nhwc_relu6_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_float16) {
  Execute(device,
          createTestModel_nhwc_relu6_float16,
          is_ignored_nhwc_relu6_float16,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16) {
  const Model model = createTestModel_nhwc_relu6_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relu6_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nhwc_relu6_float16_weight_as_input();
bool is_ignored_nhwc_relu6_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nhwc_relu6_float16_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_relu6_float16_weight_as_input,
          is_ignored_nhwc_relu6_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nhwc_relu6_float16_weight_as_input) {
  const Model model = createTestModel_nhwc_relu6_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nhwc_relu6_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none();
bool is_ignored_nchw_none(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none) {
  Execute(device,
          createTestModel_nchw_none,
          is_ignored_nchw_none,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none) {
  const Model model = createTestModel_nchw_none();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_weight_as_input();
bool is_ignored_nchw_none_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_weight_as_input) {
  Execute(device,
          createTestModel_nchw_none_weight_as_input,
          is_ignored_nchw_none_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_weight_as_input) {
  const Model model = createTestModel_nchw_none_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed();
bool is_ignored_nchw_none_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_relaxed) {
  Execute(device,
          createTestModel_nchw_none_relaxed,
          is_ignored_nchw_none_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed) {
  const Model model = createTestModel_nchw_none_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_relaxed_weight_as_input();
bool is_ignored_nchw_none_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_nchw_none_relaxed_weight_as_input,
          is_ignored_nchw_none_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_relaxed_weight_as_input) {
  const Model model = createTestModel_nchw_none_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8();
bool is_ignored_nchw_none_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8) {
  Execute(device,
          createTestModel_nchw_none_quant8,
          is_ignored_nchw_none_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8) {
  const Model model = createTestModel_nchw_none_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_weight_as_input();
bool is_ignored_nchw_none_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_weight_as_input) {
  Execute(device,
          createTestModel_nchw_none_quant8_weight_as_input,
          is_ignored_nchw_none_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_weight_as_input) {
  const Model model = createTestModel_nchw_none_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_2();
bool is_ignored_nchw_none_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_2,
          is_ignored_nchw_none_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_2) {
  const Model model = createTestModel_nchw_none_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_quant8_weight_as_input_2();
bool is_ignored_nchw_none_quant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nchw_none_quant8_weight_as_input_2,
          is_ignored_nchw_none_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_quant8_weight_as_input_2) {
  const Model model = createTestModel_nchw_none_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8();
bool is_ignored_nchw_none_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8,
          is_ignored_nchw_none_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8) {
  const Model model = createTestModel_nchw_none_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_weight_as_input();
bool is_ignored_nchw_none_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_weight_as_input,
          is_ignored_nchw_none_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_weight_as_input) {
  const Model model = createTestModel_nchw_none_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_2();
bool is_ignored_nchw_none_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_2,
          is_ignored_nchw_none_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_channelQuant8_weight_as_input_2();
bool is_ignored_nchw_none_channelQuant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nchw_none_channelQuant8_weight_as_input_2,
          is_ignored_nchw_none_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_nchw_none_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16();
bool is_ignored_nchw_none_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_float16) {
  Execute(device,
          createTestModel_nchw_none_float16,
          is_ignored_nchw_none_float16,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16) {
  const Model model = createTestModel_nchw_none_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_none_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_none_float16_weight_as_input();
bool is_ignored_nchw_none_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_none_float16_weight_as_input) {
  Execute(device,
          createTestModel_nchw_none_float16_weight_as_input,
          is_ignored_nchw_none_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_none_float16_weight_as_input) {
  const Model model = createTestModel_nchw_none_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_none_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu();
bool is_ignored_nchw_relu(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu) {
  Execute(device,
          createTestModel_nchw_relu,
          is_ignored_nchw_relu,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu) {
  const Model model = createTestModel_nchw_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_weight_as_input();
bool is_ignored_nchw_relu_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu_weight_as_input,
          is_ignored_nchw_relu_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_weight_as_input) {
  const Model model = createTestModel_nchw_relu_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed();
bool is_ignored_nchw_relu_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_relaxed) {
  Execute(device,
          createTestModel_nchw_relu_relaxed,
          is_ignored_nchw_relu_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed) {
  const Model model = createTestModel_nchw_relu_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_relaxed_weight_as_input();
bool is_ignored_nchw_relu_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu_relaxed_weight_as_input,
          is_ignored_nchw_relu_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_relaxed_weight_as_input) {
  const Model model = createTestModel_nchw_relu_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8();
bool is_ignored_nchw_relu_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8) {
  Execute(device,
          createTestModel_nchw_relu_quant8,
          is_ignored_nchw_relu_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8) {
  const Model model = createTestModel_nchw_relu_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_weight_as_input();
bool is_ignored_nchw_relu_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu_quant8_weight_as_input,
          is_ignored_nchw_relu_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_weight_as_input) {
  const Model model = createTestModel_nchw_relu_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_2();
bool is_ignored_nchw_relu_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_2,
          is_ignored_nchw_relu_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_2) {
  const Model model = createTestModel_nchw_relu_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_quant8_weight_as_input_2();
bool is_ignored_nchw_relu_quant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nchw_relu_quant8_weight_as_input_2,
          is_ignored_nchw_relu_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_quant8_weight_as_input_2) {
  const Model model = createTestModel_nchw_relu_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8();
bool is_ignored_nchw_relu_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8,
          is_ignored_nchw_relu_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8) {
  const Model model = createTestModel_nchw_relu_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_weight_as_input();
bool is_ignored_nchw_relu_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_weight_as_input,
          is_ignored_nchw_relu_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_weight_as_input) {
  const Model model = createTestModel_nchw_relu_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_2();
bool is_ignored_nchw_relu_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_2,
          is_ignored_nchw_relu_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_channelQuant8_weight_as_input_2();
bool is_ignored_nchw_relu_channelQuant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nchw_relu_channelQuant8_weight_as_input_2,
          is_ignored_nchw_relu_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_nchw_relu_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16();
bool is_ignored_nchw_relu_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_float16) {
  Execute(device,
          createTestModel_nchw_relu_float16,
          is_ignored_nchw_relu_float16,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16) {
  const Model model = createTestModel_nchw_relu_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu_float16_weight_as_input();
bool is_ignored_nchw_relu_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu_float16_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu_float16_weight_as_input,
          is_ignored_nchw_relu_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu_float16_weight_as_input) {
  const Model model = createTestModel_nchw_relu_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1();
bool is_ignored_nchw_relu1(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1) {
  Execute(device,
          createTestModel_nchw_relu1,
          is_ignored_nchw_relu1,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1) {
  const Model model = createTestModel_nchw_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_weight_as_input();
bool is_ignored_nchw_relu1_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu1_weight_as_input,
          is_ignored_nchw_relu1_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_weight_as_input) {
  const Model model = createTestModel_nchw_relu1_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed();
bool is_ignored_nchw_relu1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_relaxed) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed,
          is_ignored_nchw_relu1_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed) {
  const Model model = createTestModel_nchw_relu1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_relaxed_weight_as_input();
bool is_ignored_nchw_relu1_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu1_relaxed_weight_as_input,
          is_ignored_nchw_relu1_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_relaxed_weight_as_input) {
  const Model model = createTestModel_nchw_relu1_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8();
bool is_ignored_nchw_relu1_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8) {
  Execute(device,
          createTestModel_nchw_relu1_quant8,
          is_ignored_nchw_relu1_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8) {
  const Model model = createTestModel_nchw_relu1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_weight_as_input();
bool is_ignored_nchw_relu1_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_weight_as_input,
          is_ignored_nchw_relu1_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_weight_as_input) {
  const Model model = createTestModel_nchw_relu1_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_2();
bool is_ignored_nchw_relu1_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_2,
          is_ignored_nchw_relu1_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_2) {
  const Model model = createTestModel_nchw_relu1_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_quant8_weight_as_input_2();
bool is_ignored_nchw_relu1_quant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nchw_relu1_quant8_weight_as_input_2,
          is_ignored_nchw_relu1_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_quant8_weight_as_input_2) {
  const Model model = createTestModel_nchw_relu1_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8();
bool is_ignored_nchw_relu1_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8,
          is_ignored_nchw_relu1_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8) {
  const Model model = createTestModel_nchw_relu1_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_weight_as_input();
bool is_ignored_nchw_relu1_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_weight_as_input,
          is_ignored_nchw_relu1_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_weight_as_input) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_2();
bool is_ignored_nchw_relu1_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_2,
          is_ignored_nchw_relu1_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_channelQuant8_weight_as_input_2();
bool is_ignored_nchw_relu1_channelQuant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nchw_relu1_channelQuant8_weight_as_input_2,
          is_ignored_nchw_relu1_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_nchw_relu1_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16();
bool is_ignored_nchw_relu1_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_float16) {
  Execute(device,
          createTestModel_nchw_relu1_float16,
          is_ignored_nchw_relu1_float16,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16) {
  const Model model = createTestModel_nchw_relu1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu1_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu1_float16_weight_as_input();
bool is_ignored_nchw_relu1_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu1_float16_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu1_float16_weight_as_input,
          is_ignored_nchw_relu1_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu1_float16_weight_as_input) {
  const Model model = createTestModel_nchw_relu1_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu1_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6();
bool is_ignored_nchw_relu6(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6) {
  Execute(device,
          createTestModel_nchw_relu6,
          is_ignored_nchw_relu6,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6) {
  const Model model = createTestModel_nchw_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_weight_as_input();
bool is_ignored_nchw_relu6_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu6_weight_as_input,
          is_ignored_nchw_relu6_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_weight_as_input) {
  const Model model = createTestModel_nchw_relu6_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed();
bool is_ignored_nchw_relu6_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_relaxed) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed,
          is_ignored_nchw_relu6_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed) {
  const Model model = createTestModel_nchw_relu6_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_relaxed_weight_as_input();
bool is_ignored_nchw_relu6_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu6_relaxed_weight_as_input,
          is_ignored_nchw_relu6_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_relaxed_weight_as_input) {
  const Model model = createTestModel_nchw_relu6_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8();
bool is_ignored_nchw_relu6_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8) {
  Execute(device,
          createTestModel_nchw_relu6_quant8,
          is_ignored_nchw_relu6_quant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8) {
  const Model model = createTestModel_nchw_relu6_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_weight_as_input();
bool is_ignored_nchw_relu6_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_weight_as_input,
          is_ignored_nchw_relu6_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_weight_as_input) {
  const Model model = createTestModel_nchw_relu6_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_2();
bool is_ignored_nchw_relu6_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_2,
          is_ignored_nchw_relu6_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_2) {
  const Model model = createTestModel_nchw_relu6_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_quant8_weight_as_input_2();
bool is_ignored_nchw_relu6_quant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nchw_relu6_quant8_weight_as_input_2,
          is_ignored_nchw_relu6_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_quant8_weight_as_input_2) {
  const Model model = createTestModel_nchw_relu6_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8();
bool is_ignored_nchw_relu6_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8,
          is_ignored_nchw_relu6_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8) {
  const Model model = createTestModel_nchw_relu6_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_weight_as_input();
bool is_ignored_nchw_relu6_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_weight_as_input,
          is_ignored_nchw_relu6_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_weight_as_input) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_2();
bool is_ignored_nchw_relu6_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_2,
          is_ignored_nchw_relu6_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_channelQuant8_weight_as_input_2();
bool is_ignored_nchw_relu6_channelQuant8_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_nchw_relu6_channelQuant8_weight_as_input_2,
          is_ignored_nchw_relu6_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_weight_as_input_2());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_nchw_relu6_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16();
bool is_ignored_nchw_relu6_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_float16) {
  Execute(device,
          createTestModel_nchw_relu6_float16,
          is_ignored_nchw_relu6_float16,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16) {
  const Model model = createTestModel_nchw_relu6_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relu6_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_nchw_relu6_float16_weight_as_input();
bool is_ignored_nchw_relu6_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_nchw_relu6_float16_weight_as_input) {
  Execute(device,
          createTestModel_nchw_relu6_float16_weight_as_input,
          is_ignored_nchw_relu6_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_nchw_relu6_float16_weight_as_input) {
  const Model model = createTestModel_nchw_relu6_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_nchw_relu6_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none();
bool is_ignored_dynamic_output_shape_nhwc_none(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none,
          is_ignored_dynamic_output_shape_nhwc_none,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_none_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_none_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_relaxed();
bool is_ignored_dynamic_output_shape_nhwc_none_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_relaxed,
          is_ignored_dynamic_output_shape_nhwc_none_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_relaxed_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_none_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_relaxed_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_none_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_relaxed_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_quant8();
bool is_ignored_dynamic_output_shape_nhwc_none_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_quant8,
          is_ignored_dynamic_output_shape_nhwc_none_quant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_quant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_none_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_quant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_quant8_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_none_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_quant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_quant8_2();
bool is_ignored_dynamic_output_shape_nhwc_none_quant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_quant8_2,
          is_ignored_dynamic_output_shape_nhwc_none_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_channelQuant8();
bool is_ignored_dynamic_output_shape_nhwc_none_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_channelQuant8,
          is_ignored_dynamic_output_shape_nhwc_none_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nhwc_none_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_channelQuant8_2,
          is_ignored_dynamic_output_shape_nhwc_none_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_float16();
bool is_ignored_dynamic_output_shape_nhwc_none_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_float16,
          is_ignored_dynamic_output_shape_nhwc_none_float16,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_float16) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_none_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_none_float16_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_none_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_none_float16_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_none_float16_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_none_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_none_float16_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_none_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_none_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu();
bool is_ignored_dynamic_output_shape_nhwc_relu(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu,
          is_ignored_dynamic_output_shape_nhwc_relu,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_relaxed();
bool is_ignored_dynamic_output_shape_nhwc_relu_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_relaxed,
          is_ignored_dynamic_output_shape_nhwc_relu_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_quant8();
bool is_ignored_dynamic_output_shape_nhwc_relu_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_quant8,
          is_ignored_dynamic_output_shape_nhwc_relu_quant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_quant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_quant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_quant8_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_quant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_quant8_2();
bool is_ignored_dynamic_output_shape_nhwc_relu_quant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_quant8_2,
          is_ignored_dynamic_output_shape_nhwc_relu_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8();
bool is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8,
          is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8_2,
          is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_float16();
bool is_ignored_dynamic_output_shape_nhwc_relu_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_float16,
          is_ignored_dynamic_output_shape_nhwc_relu_float16,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_float16) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu_float16_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_float16_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu_float16_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu_float16_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1();
bool is_ignored_dynamic_output_shape_nhwc_relu1(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1,
          is_ignored_dynamic_output_shape_nhwc_relu1,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu1_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu1_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_relaxed();
bool is_ignored_dynamic_output_shape_nhwc_relu1_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_relaxed,
          is_ignored_dynamic_output_shape_nhwc_relu1_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_quant8();
bool is_ignored_dynamic_output_shape_nhwc_relu1_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_quant8,
          is_ignored_dynamic_output_shape_nhwc_relu1_quant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_quant8_2();
bool is_ignored_dynamic_output_shape_nhwc_relu1_quant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_quant8_2,
          is_ignored_dynamic_output_shape_nhwc_relu1_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8();
bool is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8,
          is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8_2,
          is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_float16();
bool is_ignored_dynamic_output_shape_nhwc_relu1_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_float16,
          is_ignored_dynamic_output_shape_nhwc_relu1_float16,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_float16) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu1_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu1_float16_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu1_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_float16_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu1_float16_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu1_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu1_float16_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu1_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu1_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6();
bool is_ignored_dynamic_output_shape_nhwc_relu6(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6,
          is_ignored_dynamic_output_shape_nhwc_relu6,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu6_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu6_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_relaxed();
bool is_ignored_dynamic_output_shape_nhwc_relu6_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_relaxed,
          is_ignored_dynamic_output_shape_nhwc_relu6_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_quant8();
bool is_ignored_dynamic_output_shape_nhwc_relu6_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_quant8,
          is_ignored_dynamic_output_shape_nhwc_relu6_quant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_quant8_2();
bool is_ignored_dynamic_output_shape_nhwc_relu6_quant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_quant8_2,
          is_ignored_dynamic_output_shape_nhwc_relu6_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8();
bool is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8,
          is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8_2,
          is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_float16();
bool is_ignored_dynamic_output_shape_nhwc_relu6_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_float16,
          is_ignored_dynamic_output_shape_nhwc_relu6_float16,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_float16) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relu6_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nhwc_relu6_float16_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_relu6_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_float16_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relu6_float16_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_relu6_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nhwc_relu6_float16_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relu6_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nhwc_relu6_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none();
bool is_ignored_dynamic_output_shape_nchw_none(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none,
          is_ignored_dynamic_output_shape_nchw_none,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_none_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_none_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_relaxed();
bool is_ignored_dynamic_output_shape_nchw_none_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_relaxed,
          is_ignored_dynamic_output_shape_nchw_none_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_relaxed_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_none_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_relaxed_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_none_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_relaxed_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_quant8();
bool is_ignored_dynamic_output_shape_nchw_none_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_quant8,
          is_ignored_dynamic_output_shape_nchw_none_quant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_quant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_none_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_quant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_quant8_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_none_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_quant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_quant8_2();
bool is_ignored_dynamic_output_shape_nchw_none_quant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_quant8_2,
          is_ignored_dynamic_output_shape_nchw_none_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_quant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nchw_none_quant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_quant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nchw_none_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_quant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_quant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_channelQuant8();
bool is_ignored_dynamic_output_shape_nchw_none_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_channelQuant8,
          is_ignored_dynamic_output_shape_nchw_none_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nchw_none_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_channelQuant8_2,
          is_ignored_dynamic_output_shape_nchw_none_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_float16();
bool is_ignored_dynamic_output_shape_nchw_none_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_float16,
          is_ignored_dynamic_output_shape_nchw_none_float16,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_float16) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_none_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_none_float16_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_none_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_none_float16_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_none_float16_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_none_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_none_float16_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_none_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_none_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu();
bool is_ignored_dynamic_output_shape_nchw_relu(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu,
          is_ignored_dynamic_output_shape_nchw_relu,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_relaxed();
bool is_ignored_dynamic_output_shape_nchw_relu_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_relaxed,
          is_ignored_dynamic_output_shape_nchw_relu_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_relaxed_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_relaxed_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_relaxed_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_quant8();
bool is_ignored_dynamic_output_shape_nchw_relu_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_quant8,
          is_ignored_dynamic_output_shape_nchw_relu_quant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_quant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_quant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_quant8_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_quant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_quant8_2();
bool is_ignored_dynamic_output_shape_nchw_relu_quant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_quant8_2,
          is_ignored_dynamic_output_shape_nchw_relu_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_channelQuant8();
bool is_ignored_dynamic_output_shape_nchw_relu_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_channelQuant8,
          is_ignored_dynamic_output_shape_nchw_relu_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nchw_relu_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_channelQuant8_2,
          is_ignored_dynamic_output_shape_nchw_relu_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_float16();
bool is_ignored_dynamic_output_shape_nchw_relu_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_float16,
          is_ignored_dynamic_output_shape_nchw_relu_float16,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_float16) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu_float16_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu_float16_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu_float16_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu_float16_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1();
bool is_ignored_dynamic_output_shape_nchw_relu1(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1,
          is_ignored_dynamic_output_shape_nchw_relu1,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu1_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu1_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_relaxed();
bool is_ignored_dynamic_output_shape_nchw_relu1_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_relaxed,
          is_ignored_dynamic_output_shape_nchw_relu1_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_quant8();
bool is_ignored_dynamic_output_shape_nchw_relu1_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_quant8,
          is_ignored_dynamic_output_shape_nchw_relu1_quant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_quant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu1_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_quant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_quant8_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu1_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_quant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_quant8_2();
bool is_ignored_dynamic_output_shape_nchw_relu1_quant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_quant8_2,
          is_ignored_dynamic_output_shape_nchw_relu1_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8();
bool is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8,
          is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8_2,
          is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_float16();
bool is_ignored_dynamic_output_shape_nchw_relu1_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_float16,
          is_ignored_dynamic_output_shape_nchw_relu1_float16,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_float16) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu1_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu1_float16_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu1_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_float16_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu1_float16_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu1_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu1_float16_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu1_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu1_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6();
bool is_ignored_dynamic_output_shape_nchw_relu6(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6,
          is_ignored_dynamic_output_shape_nchw_relu6,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu6_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu6_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_relaxed();
bool is_ignored_dynamic_output_shape_nchw_relu6_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_relaxed,
          is_ignored_dynamic_output_shape_nchw_relu6_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_quant8();
bool is_ignored_dynamic_output_shape_nchw_relu6_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_quant8,
          is_ignored_dynamic_output_shape_nchw_relu6_quant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_quant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu6_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_quant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_quant8_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu6_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_quant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_quant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_quant8_2();
bool is_ignored_dynamic_output_shape_nchw_relu6_quant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_quant8_2,
          is_ignored_dynamic_output_shape_nchw_relu6_quant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_quant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_quant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8();
bool is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8,
          is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_channelQuant8_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8_2,
          is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_channelQuant8_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2,
          is_ignored_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_channelQuant8_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_float16();
bool is_ignored_dynamic_output_shape_nchw_relu6_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_float16,
          is_ignored_dynamic_output_shape_nchw_relu6_float16,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_float16) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relu6_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_dynamic_output_shape_nchw_relu6_float16_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_relu6_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_float16_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relu6_float16_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_relu6_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_dynamic_output_shape_nchw_relu6_float16_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relu6_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_dynamic_output_shape_nchw_relu6_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc();
bool is_ignored_large_nhwc(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc) {
  Execute(device,
          createTestModel_large_nhwc,
          is_ignored_large_nhwc,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc) {
  const Model model = createTestModel_large_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_weight_as_input();
bool is_ignored_large_nhwc_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_weight_as_input) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input,
          is_ignored_large_nhwc_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_weight_as_input) {
  const Model model = createTestModel_large_nhwc_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed();
bool is_ignored_large_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_relaxed) {
  Execute(device,
          createTestModel_large_nhwc_relaxed,
          is_ignored_large_nhwc_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed) {
  const Model model = createTestModel_large_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_relaxed_weight_as_input();
bool is_ignored_large_nhwc_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_weight_as_input,
          is_ignored_large_nhwc_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_relaxed_weight_as_input) {
  const Model model = createTestModel_large_nhwc_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8();
bool is_ignored_large_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_quant8) {
  Execute(device,
          createTestModel_large_nhwc_quant8,
          is_ignored_large_nhwc_quant8,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8) {
  const Model model = createTestModel_large_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_quant8_weight_as_input();
bool is_ignored_large_nhwc_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_quant8_weight_as_input) {
  Execute(device,
          createTestModel_large_nhwc_quant8_weight_as_input,
          is_ignored_large_nhwc_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_quant8_weight_as_input) {
  const Model model = createTestModel_large_nhwc_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8();
bool is_ignored_large_nhwc_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8,
          is_ignored_large_nhwc_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8) {
  const Model model = createTestModel_large_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_channelQuant8_weight_as_input();
bool is_ignored_large_nhwc_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_weight_as_input,
          is_ignored_large_nhwc_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_channelQuant8_weight_as_input) {
  const Model model = createTestModel_large_nhwc_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16();
bool is_ignored_large_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_float16) {
  Execute(device,
          createTestModel_large_nhwc_float16,
          is_ignored_large_nhwc_float16,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16) {
  const Model model = createTestModel_large_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nhwc_float16_weight_as_input();
bool is_ignored_large_nhwc_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nhwc_float16_weight_as_input) {
  Execute(device,
          createTestModel_large_nhwc_float16_weight_as_input,
          is_ignored_large_nhwc_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nhwc_float16_weight_as_input) {
  const Model model = createTestModel_large_nhwc_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nhwc_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw();
bool is_ignored_large_nchw(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw) {
  Execute(device,
          createTestModel_large_nchw,
          is_ignored_large_nchw,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw) {
  const Model model = createTestModel_large_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_weight_as_input();
bool is_ignored_large_nchw_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_weight_as_input) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input,
          is_ignored_large_nchw_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_weight_as_input) {
  const Model model = createTestModel_large_nchw_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed();
bool is_ignored_large_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_relaxed) {
  Execute(device,
          createTestModel_large_nchw_relaxed,
          is_ignored_large_nchw_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed) {
  const Model model = createTestModel_large_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_relaxed_weight_as_input();
bool is_ignored_large_nchw_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_large_nchw_relaxed_weight_as_input,
          is_ignored_large_nchw_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_relaxed_weight_as_input) {
  const Model model = createTestModel_large_nchw_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8();
bool is_ignored_large_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_quant8) {
  Execute(device,
          createTestModel_large_nchw_quant8,
          is_ignored_large_nchw_quant8,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8) {
  const Model model = createTestModel_large_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_quant8_weight_as_input();
bool is_ignored_large_nchw_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_quant8_weight_as_input) {
  Execute(device,
          createTestModel_large_nchw_quant8_weight_as_input,
          is_ignored_large_nchw_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_quant8_weight_as_input) {
  const Model model = createTestModel_large_nchw_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8();
bool is_ignored_large_nchw_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_channelQuant8) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8,
          is_ignored_large_nchw_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8) {
  const Model model = createTestModel_large_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_channelQuant8_weight_as_input();
bool is_ignored_large_nchw_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_weight_as_input,
          is_ignored_large_nchw_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_channelQuant8_weight_as_input) {
  const Model model = createTestModel_large_nchw_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16();
bool is_ignored_large_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_float16) {
  Execute(device,
          createTestModel_large_nchw_float16,
          is_ignored_large_nchw_float16,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16) {
  const Model model = createTestModel_large_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_nchw_float16_weight_as_input();
bool is_ignored_large_nchw_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_large_nchw_float16_weight_as_input) {
  Execute(device,
          createTestModel_large_nchw_float16_weight_as_input,
          is_ignored_large_nchw_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_large_nchw_float16_weight_as_input) {
  const Model model = createTestModel_large_nchw_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_nchw_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc();
bool is_ignored_large_dynamic_output_shape_nhwc(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc,
          is_ignored_large_dynamic_output_shape_nhwc,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc_relaxed();
bool is_ignored_large_dynamic_output_shape_nhwc_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_relaxed,
          is_ignored_large_dynamic_output_shape_nhwc_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc_relaxed) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc_relaxed_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nhwc_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_relaxed_weight_as_input,
          is_ignored_large_dynamic_output_shape_nhwc_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc_relaxed_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc_quant8();
bool is_ignored_large_dynamic_output_shape_nhwc_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc_quant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_quant8,
          is_ignored_large_dynamic_output_shape_nhwc_quant8,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc_quant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc_quant8_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nhwc_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc_quant8_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_quant8_weight_as_input,
          is_ignored_large_dynamic_output_shape_nhwc_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc_quant8_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc_channelQuant8();
bool is_ignored_large_dynamic_output_shape_nhwc_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_channelQuant8,
          is_ignored_large_dynamic_output_shape_nhwc_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc_channelQuant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input,
          is_ignored_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc_float16();
bool is_ignored_large_dynamic_output_shape_nhwc_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc_float16) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_float16,
          is_ignored_large_dynamic_output_shape_nhwc_float16,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc_float16) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nhwc_float16_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nhwc_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nhwc_float16_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_float16_weight_as_input,
          is_ignored_large_dynamic_output_shape_nhwc_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nhwc_float16_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nhwc_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw();
bool is_ignored_large_dynamic_output_shape_nchw(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw,
          is_ignored_large_dynamic_output_shape_nchw,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw_relaxed();
bool is_ignored_large_dynamic_output_shape_nchw_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_relaxed,
          is_ignored_large_dynamic_output_shape_nchw_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw_relaxed) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw_relaxed_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nchw_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_relaxed_weight_as_input,
          is_ignored_large_dynamic_output_shape_nchw_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw_relaxed_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw_quant8();
bool is_ignored_large_dynamic_output_shape_nchw_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw_quant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_quant8,
          is_ignored_large_dynamic_output_shape_nchw_quant8,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw_quant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw_quant8_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nchw_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw_quant8_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_quant8_weight_as_input,
          is_ignored_large_dynamic_output_shape_nchw_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw_quant8_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw_channelQuant8();
bool is_ignored_large_dynamic_output_shape_nchw_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw_channelQuant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_channelQuant8,
          is_ignored_large_dynamic_output_shape_nchw_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw_channelQuant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input,
          is_ignored_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw_float16();
bool is_ignored_large_dynamic_output_shape_nchw_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw_float16) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_float16,
          is_ignored_large_dynamic_output_shape_nchw_float16,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw_float16) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_large_dynamic_output_shape_nchw_float16_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nchw_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_large_dynamic_output_shape_nchw_float16_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_float16_weight_as_input,
          is_ignored_large_dynamic_output_shape_nchw_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_large_dynamic_output_shape_nchw_float16_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_large_dynamic_output_shape_nchw_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc();
bool is_ignored_channel_nhwc(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc) {
  Execute(device,
          createTestModel_channel_nhwc,
          is_ignored_channel_nhwc,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc) {
  const Model model = createTestModel_channel_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_weight_as_input();
bool is_ignored_channel_nhwc_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_weight_as_input) {
  Execute(device,
          createTestModel_channel_nhwc_weight_as_input,
          is_ignored_channel_nhwc_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_weight_as_input) {
  const Model model = createTestModel_channel_nhwc_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed();
bool is_ignored_channel_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_relaxed) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed,
          is_ignored_channel_nhwc_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed) {
  const Model model = createTestModel_channel_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_relaxed_weight_as_input();
bool is_ignored_channel_nhwc_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_channel_nhwc_relaxed_weight_as_input,
          is_ignored_channel_nhwc_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_relaxed_weight_as_input) {
  const Model model = createTestModel_channel_nhwc_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8();
bool is_ignored_channel_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_quant8) {
  Execute(device,
          createTestModel_channel_nhwc_quant8,
          is_ignored_channel_nhwc_quant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8) {
  const Model model = createTestModel_channel_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_quant8_weight_as_input();
bool is_ignored_channel_nhwc_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_quant8_weight_as_input) {
  Execute(device,
          createTestModel_channel_nhwc_quant8_weight_as_input,
          is_ignored_channel_nhwc_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_quant8_weight_as_input) {
  const Model model = createTestModel_channel_nhwc_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8();
bool is_ignored_channel_nhwc_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8,
          is_ignored_channel_nhwc_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8) {
  const Model model = createTestModel_channel_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_channelQuant8_weight_as_input();
bool is_ignored_channel_nhwc_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_channel_nhwc_channelQuant8_weight_as_input,
          is_ignored_channel_nhwc_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_channelQuant8_weight_as_input) {
  const Model model = createTestModel_channel_nhwc_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16();
bool is_ignored_channel_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_float16) {
  Execute(device,
          createTestModel_channel_nhwc_float16,
          is_ignored_channel_nhwc_float16,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16) {
  const Model model = createTestModel_channel_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nhwc_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nhwc_float16_weight_as_input();
bool is_ignored_channel_nhwc_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nhwc_float16_weight_as_input) {
  Execute(device,
          createTestModel_channel_nhwc_float16_weight_as_input,
          is_ignored_channel_nhwc_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nhwc_float16_weight_as_input) {
  const Model model = createTestModel_channel_nhwc_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nhwc_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw();
bool is_ignored_channel_nchw(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw) {
  Execute(device,
          createTestModel_channel_nchw,
          is_ignored_channel_nchw,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw) {
  const Model model = createTestModel_channel_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_weight_as_input();
bool is_ignored_channel_nchw_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_weight_as_input) {
  Execute(device,
          createTestModel_channel_nchw_weight_as_input,
          is_ignored_channel_nchw_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_weight_as_input) {
  const Model model = createTestModel_channel_nchw_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed();
bool is_ignored_channel_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_relaxed) {
  Execute(device,
          createTestModel_channel_nchw_relaxed,
          is_ignored_channel_nchw_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed) {
  const Model model = createTestModel_channel_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_relaxed_weight_as_input();
bool is_ignored_channel_nchw_relaxed_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_channel_nchw_relaxed_weight_as_input,
          is_ignored_channel_nchw_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_relaxed_weight_as_input) {
  const Model model = createTestModel_channel_nchw_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8();
bool is_ignored_channel_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_quant8) {
  Execute(device,
          createTestModel_channel_nchw_quant8,
          is_ignored_channel_nchw_quant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8) {
  const Model model = createTestModel_channel_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_quant8_weight_as_input();
bool is_ignored_channel_nchw_quant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_quant8_weight_as_input) {
  Execute(device,
          createTestModel_channel_nchw_quant8_weight_as_input,
          is_ignored_channel_nchw_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_quant8_weight_as_input) {
  const Model model = createTestModel_channel_nchw_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8();
bool is_ignored_channel_nchw_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_channelQuant8) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8,
          is_ignored_channel_nchw_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8) {
  const Model model = createTestModel_channel_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_channelQuant8_weight_as_input();
bool is_ignored_channel_nchw_channelQuant8_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_channel_nchw_channelQuant8_weight_as_input,
          is_ignored_channel_nchw_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_channelQuant8_weight_as_input) {
  const Model model = createTestModel_channel_nchw_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16();
bool is_ignored_channel_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_float16) {
  Execute(device,
          createTestModel_channel_nchw_float16,
          is_ignored_channel_nchw_float16,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16) {
  const Model model = createTestModel_channel_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_nchw_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_nchw_float16_weight_as_input();
bool is_ignored_channel_nchw_float16_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, grouped_conv2d_channel_nchw_float16_weight_as_input) {
  Execute(device,
          createTestModel_channel_nchw_float16_weight_as_input,
          is_ignored_channel_nchw_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_weight_as_input());
}

TEST_F(ValidationTest, grouped_conv2d_channel_nchw_float16_weight_as_input) {
  const Model model = createTestModel_channel_nchw_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_nchw_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc();
bool is_ignored_channel_dynamic_output_shape_nhwc(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc,
          is_ignored_channel_dynamic_output_shape_nhwc,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nhwc_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nhwc_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc_relaxed();
bool is_ignored_channel_dynamic_output_shape_nhwc_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc_relaxed,
          is_ignored_channel_dynamic_output_shape_nhwc_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_relaxed) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc_quant8();
bool is_ignored_channel_dynamic_output_shape_nhwc_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_quant8) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc_quant8,
          is_ignored_channel_dynamic_output_shape_nhwc_quant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_quant8) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc_quant8_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nhwc_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_quant8_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc_quant8_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nhwc_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_quant8_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc_channelQuant8();
bool is_ignored_channel_dynamic_output_shape_nhwc_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc_channelQuant8,
          is_ignored_channel_dynamic_output_shape_nhwc_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_channelQuant8) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc_float16();
bool is_ignored_channel_dynamic_output_shape_nhwc_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_float16) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc_float16,
          is_ignored_channel_dynamic_output_shape_nhwc_float16,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_float16) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nhwc_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nhwc_float16_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nhwc_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_float16_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nhwc_float16_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nhwc_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nhwc_float16_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nhwc_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nhwc_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw();
bool is_ignored_channel_dynamic_output_shape_nchw(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw,
          is_ignored_channel_dynamic_output_shape_nchw,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nchw_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nchw_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw_relaxed();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw_relaxed();
bool is_ignored_channel_dynamic_output_shape_nchw_relaxed(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw_relaxed,
          is_ignored_channel_dynamic_output_shape_nchw_relaxed,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw_relaxed) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw_relaxed_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw_relaxed_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nchw_relaxed_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw_relaxed_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw_relaxed_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nchw_relaxed_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_relaxed_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw_relaxed_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw_relaxed_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_relaxed_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw_quant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw_quant8();
bool is_ignored_channel_dynamic_output_shape_nchw_quant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw_quant8) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw_quant8,
          is_ignored_channel_dynamic_output_shape_nchw_quant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_quant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw_quant8) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw_quant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw_quant8_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nchw_quant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw_quant8_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw_quant8_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nchw_quant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_quant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw_quant8_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw_quant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_quant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw_channelQuant8();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw_channelQuant8();
bool is_ignored_channel_dynamic_output_shape_nchw_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw_channelQuant8) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw_channelQuant8,
          is_ignored_channel_dynamic_output_shape_nchw_channelQuant8,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw_channelQuant8) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_channelQuant8_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw_float16();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw_float16();
bool is_ignored_channel_dynamic_output_shape_nchw_float16(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw_float16) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw_float16,
          is_ignored_channel_dynamic_output_shape_nchw_float16,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw_float16) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

namespace generated_tests::grouped_conv2d {

std::vector<::test_helper::MixedTypedExample>& get_examples_channel_dynamic_output_shape_nchw_float16_weight_as_input();

} // namespace generated_tests::grouped_conv2d

namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d {

Model createTestModel_channel_dynamic_output_shape_nchw_float16_weight_as_input();
bool is_ignored_channel_dynamic_output_shape_nchw_float16_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, grouped_conv2d_channel_dynamic_output_shape_nchw_float16_weight_as_input) {
  Execute(device,
          createTestModel_channel_dynamic_output_shape_nchw_float16_weight_as_input,
          is_ignored_channel_dynamic_output_shape_nchw_float16_weight_as_input,
          ::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_float16_weight_as_input(), true);
}

TEST_F(ValidationTest, grouped_conv2d_channel_dynamic_output_shape_nchw_float16_weight_as_input) {
  const Model model = createTestModel_channel_dynamic_output_shape_nchw_float16_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::grouped_conv2d::get_examples_channel_dynamic_output_shape_nchw_float16_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::grouped_conv2d

