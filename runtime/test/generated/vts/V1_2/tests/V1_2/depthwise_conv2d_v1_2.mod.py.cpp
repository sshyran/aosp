// Generated from depthwise_conv2d_v1_2.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc();
bool is_ignored_nhwc(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc) {
  Execute(device,
          createTestModel_nhwc,
          is_ignored_nhwc,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc) {
  const Model model = createTestModel_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed();
bool is_ignored_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed) {
  Execute(device,
          createTestModel_nhwc_relaxed,
          is_ignored_nhwc_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed) {
  const Model model = createTestModel_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16();
bool is_ignored_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16) {
  Execute(device,
          createTestModel_nhwc_float16,
          is_ignored_nhwc_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16) {
  const Model model = createTestModel_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8();
bool is_ignored_nhwc_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_channelQuant8,
          is_ignored_nhwc_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8) {
  const Model model = createTestModel_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_2();
bool is_ignored_nhwc_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_2,
          is_ignored_nhwc_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_2) {
  const Model model = createTestModel_nhwc_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8();
bool is_ignored_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8) {
  Execute(device,
          createTestModel_nhwc_quant8,
          is_ignored_nhwc_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8) {
  const Model model = createTestModel_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input();
bool is_ignored_nhwc_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input) {
  Execute(device,
          createTestModel_nhwc_weight_as_input,
          is_ignored_nhwc_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input) {
  const Model model = createTestModel_nhwc_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_relaxed();
bool is_ignored_nhwc_weight_as_input_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_relaxed,
          is_ignored_nhwc_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_relaxed) {
  const Model model = createTestModel_nhwc_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_float16();
bool is_ignored_nhwc_weight_as_input_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_float16) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_float16,
          is_ignored_nhwc_weight_as_input_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_float16) {
  const Model model = createTestModel_nhwc_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_channelQuant8();
bool is_ignored_nhwc_weight_as_input_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_channelQuant8) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_channelQuant8,
          is_ignored_nhwc_weight_as_input_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_channelQuant8) {
  const Model model = createTestModel_nhwc_weight_as_input_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_channelQuant8_2();
bool is_ignored_nhwc_weight_as_input_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_channelQuant8_2) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_channelQuant8_2,
          is_ignored_nhwc_weight_as_input_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_channelQuant8_2) {
  const Model model = createTestModel_nhwc_weight_as_input_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_quant8();
bool is_ignored_nhwc_weight_as_input_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_quant8) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_quant8,
          is_ignored_nhwc_weight_as_input_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_quant8) {
  const Model model = createTestModel_nhwc_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw();
bool is_ignored_nchw(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw) {
  Execute(device,
          createTestModel_nchw,
          is_ignored_nchw,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw) {
  const Model model = createTestModel_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed();
bool is_ignored_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed) {
  Execute(device,
          createTestModel_nchw_relaxed,
          is_ignored_nchw_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed) {
  const Model model = createTestModel_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16();
bool is_ignored_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16) {
  Execute(device,
          createTestModel_nchw_float16,
          is_ignored_nchw_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16) {
  const Model model = createTestModel_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8();
bool is_ignored_nchw_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8) {
  Execute(device,
          createTestModel_nchw_channelQuant8,
          is_ignored_nchw_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8) {
  const Model model = createTestModel_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_2();
bool is_ignored_nchw_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_channelQuant8_2,
          is_ignored_nchw_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_2) {
  const Model model = createTestModel_nchw_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8();
bool is_ignored_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8) {
  Execute(device,
          createTestModel_nchw_quant8,
          is_ignored_nchw_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8) {
  const Model model = createTestModel_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input();
bool is_ignored_nchw_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input) {
  Execute(device,
          createTestModel_nchw_weight_as_input,
          is_ignored_nchw_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input) {
  const Model model = createTestModel_nchw_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_relaxed();
bool is_ignored_nchw_weight_as_input_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_nchw_weight_as_input_relaxed,
          is_ignored_nchw_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_relaxed) {
  const Model model = createTestModel_nchw_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_float16();
bool is_ignored_nchw_weight_as_input_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_float16) {
  Execute(device,
          createTestModel_nchw_weight_as_input_float16,
          is_ignored_nchw_weight_as_input_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_float16) {
  const Model model = createTestModel_nchw_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_channelQuant8();
bool is_ignored_nchw_weight_as_input_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_channelQuant8) {
  Execute(device,
          createTestModel_nchw_weight_as_input_channelQuant8,
          is_ignored_nchw_weight_as_input_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_channelQuant8) {
  const Model model = createTestModel_nchw_weight_as_input_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_channelQuant8_2();
bool is_ignored_nchw_weight_as_input_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_channelQuant8_2) {
  Execute(device,
          createTestModel_nchw_weight_as_input_channelQuant8_2,
          is_ignored_nchw_weight_as_input_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_channelQuant8_2) {
  const Model model = createTestModel_nchw_weight_as_input_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_quant8();
bool is_ignored_nchw_weight_as_input_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_quant8) {
  Execute(device,
          createTestModel_nchw_weight_as_input_quant8,
          is_ignored_nchw_weight_as_input_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_quant8) {
  const Model model = createTestModel_nchw_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc();
bool is_ignored_dynamic_output_shape_nhwc(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc,
          is_ignored_dynamic_output_shape_nhwc,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc) {
  const Model model = createTestModel_dynamic_output_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_relaxed();
bool is_ignored_dynamic_output_shape_nhwc_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relaxed,
          is_ignored_dynamic_output_shape_nhwc_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_float16();
bool is_ignored_dynamic_output_shape_nhwc_float16(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_float16,
          is_ignored_dynamic_output_shape_nhwc_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_float16) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_channelQuant8();
bool is_ignored_dynamic_output_shape_nhwc_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_channelQuant8,
          is_ignored_dynamic_output_shape_nhwc_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nhwc_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_channelQuant8_2,
          is_ignored_dynamic_output_shape_nhwc_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_channelQuant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_quant8();
bool is_ignored_dynamic_output_shape_nhwc_quant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_quant8,
          is_ignored_dynamic_output_shape_nhwc_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_relaxed();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_relaxed,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_float16();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_float16(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_float16,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_float16) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_channelQuant8();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_channelQuant8,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_channelQuant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_quant8();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_quant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_quant8,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw();
bool is_ignored_dynamic_output_shape_nchw(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw,
          is_ignored_dynamic_output_shape_nchw,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw) {
  const Model model = createTestModel_dynamic_output_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_relaxed();
bool is_ignored_dynamic_output_shape_nchw_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relaxed,
          is_ignored_dynamic_output_shape_nchw_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_float16();
bool is_ignored_dynamic_output_shape_nchw_float16(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_float16,
          is_ignored_dynamic_output_shape_nchw_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_float16) {
  const Model model = createTestModel_dynamic_output_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_channelQuant8();
bool is_ignored_dynamic_output_shape_nchw_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_channelQuant8,
          is_ignored_dynamic_output_shape_nchw_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nchw_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_channelQuant8_2,
          is_ignored_dynamic_output_shape_nchw_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_channelQuant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_quant8();
bool is_ignored_dynamic_output_shape_nchw_quant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_quant8,
          is_ignored_dynamic_output_shape_nchw_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input,
          is_ignored_dynamic_output_shape_nchw_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_relaxed();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_relaxed,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_relaxed) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_float16();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_float16(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_float16) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_float16,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_float16) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_channelQuant8();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_channelQuant8,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_channelQuant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_quant8();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_quant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_quant8,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_quant8) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_2();
bool is_ignored_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_2) {
  Execute(device,
          createTestModel_nhwc_2,
          is_ignored_nhwc_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_2) {
  const Model model = createTestModel_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_relaxed_2();
bool is_ignored_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_nhwc_relaxed_2,
          is_ignored_nhwc_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_relaxed_2) {
  const Model model = createTestModel_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_float16_2();
bool is_ignored_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_float16_2) {
  Execute(device,
          createTestModel_nhwc_float16_2,
          is_ignored_nhwc_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_float16_2) {
  const Model model = createTestModel_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_quant8_2();
bool is_ignored_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_quant8_2) {
  Execute(device,
          createTestModel_nhwc_quant8_2,
          is_ignored_nhwc_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_quant8_2) {
  const Model model = createTestModel_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_channelQuant8_3();
bool is_ignored_nhwc_channelQuant8_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_3) {
  Execute(device,
          createTestModel_nhwc_channelQuant8_3,
          is_ignored_nhwc_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_channelQuant8_3) {
  const Model model = createTestModel_nhwc_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_2();
bool is_ignored_nhwc_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_2) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_2,
          is_ignored_nhwc_weight_as_input_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_2) {
  const Model model = createTestModel_nhwc_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_relaxed_2();
bool is_ignored_nhwc_weight_as_input_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_relaxed_2) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_relaxed_2,
          is_ignored_nhwc_weight_as_input_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_relaxed_2) {
  const Model model = createTestModel_nhwc_weight_as_input_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_float16_2();
bool is_ignored_nhwc_weight_as_input_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_float16_2) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_float16_2,
          is_ignored_nhwc_weight_as_input_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_float16_2) {
  const Model model = createTestModel_nhwc_weight_as_input_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_quant8_2();
bool is_ignored_nhwc_weight_as_input_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_quant8_2,
          is_ignored_nhwc_weight_as_input_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_quant8_2) {
  const Model model = createTestModel_nhwc_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nhwc_weight_as_input_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nhwc_weight_as_input_channelQuant8_3();
bool is_ignored_nhwc_weight_as_input_channelQuant8_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_channelQuant8_3) {
  Execute(device,
          createTestModel_nhwc_weight_as_input_channelQuant8_3,
          is_ignored_nhwc_weight_as_input_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_channelQuant8_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nhwc_weight_as_input_channelQuant8_3) {
  const Model model = createTestModel_nhwc_weight_as_input_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nhwc_weight_as_input_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_2();
bool is_ignored_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_2) {
  Execute(device,
          createTestModel_nchw_2,
          is_ignored_nchw_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_2) {
  const Model model = createTestModel_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_relaxed_2();
bool is_ignored_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_relaxed_2) {
  Execute(device,
          createTestModel_nchw_relaxed_2,
          is_ignored_nchw_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_relaxed_2) {
  const Model model = createTestModel_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_float16_2();
bool is_ignored_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_float16_2) {
  Execute(device,
          createTestModel_nchw_float16_2,
          is_ignored_nchw_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_float16_2) {
  const Model model = createTestModel_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_quant8_2();
bool is_ignored_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_quant8_2) {
  Execute(device,
          createTestModel_nchw_quant8_2,
          is_ignored_nchw_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_quant8_2) {
  const Model model = createTestModel_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_channelQuant8_3();
bool is_ignored_nchw_channelQuant8_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_channelQuant8_3) {
  Execute(device,
          createTestModel_nchw_channelQuant8_3,
          is_ignored_nchw_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_channelQuant8_3) {
  const Model model = createTestModel_nchw_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_2();
bool is_ignored_nchw_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_2) {
  Execute(device,
          createTestModel_nchw_weight_as_input_2,
          is_ignored_nchw_weight_as_input_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_2) {
  const Model model = createTestModel_nchw_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_relaxed_2();
bool is_ignored_nchw_weight_as_input_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_relaxed_2) {
  Execute(device,
          createTestModel_nchw_weight_as_input_relaxed_2,
          is_ignored_nchw_weight_as_input_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_relaxed_2) {
  const Model model = createTestModel_nchw_weight_as_input_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_float16_2();
bool is_ignored_nchw_weight_as_input_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_float16_2) {
  Execute(device,
          createTestModel_nchw_weight_as_input_float16_2,
          is_ignored_nchw_weight_as_input_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_float16_2) {
  const Model model = createTestModel_nchw_weight_as_input_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_quant8_2();
bool is_ignored_nchw_weight_as_input_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_nchw_weight_as_input_quant8_2,
          is_ignored_nchw_weight_as_input_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_quant8_2) {
  const Model model = createTestModel_nchw_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_nchw_weight_as_input_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_nchw_weight_as_input_channelQuant8_3();
bool is_ignored_nchw_weight_as_input_channelQuant8_3(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_nchw_weight_as_input_channelQuant8_3) {
  Execute(device,
          createTestModel_nchw_weight_as_input_channelQuant8_3,
          is_ignored_nchw_weight_as_input_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_channelQuant8_3());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_nchw_weight_as_input_channelQuant8_3) {
  const Model model = createTestModel_nchw_weight_as_input_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_nchw_weight_as_input_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_2();
bool is_ignored_dynamic_output_shape_nhwc_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_2,
          is_ignored_dynamic_output_shape_nhwc_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_relaxed_2();
bool is_ignored_dynamic_output_shape_nhwc_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_relaxed_2,
          is_ignored_dynamic_output_shape_nhwc_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_float16_2();
bool is_ignored_dynamic_output_shape_nhwc_float16_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_float16_2,
          is_ignored_dynamic_output_shape_nhwc_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_quant8_2();
bool is_ignored_dynamic_output_shape_nhwc_quant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_quant8_2,
          is_ignored_dynamic_output_shape_nhwc_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_channelQuant8_3();
bool is_ignored_dynamic_output_shape_nhwc_channelQuant8_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_channelQuant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_channelQuant8_3,
          is_ignored_dynamic_output_shape_nhwc_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_channelQuant8_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_channelQuant8_3) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_2,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_relaxed_2();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_relaxed_2,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_relaxed_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_float16_2();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_float16_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_float16_2,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_float16_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_quant8_2();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_quant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_quant8_2,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_quant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3();
bool is_ignored_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3,
          is_ignored_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3) {
  const Model model = createTestModel_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_2();
bool is_ignored_dynamic_output_shape_nchw_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_2,
          is_ignored_dynamic_output_shape_nchw_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_relaxed_2();
bool is_ignored_dynamic_output_shape_nchw_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_relaxed_2,
          is_ignored_dynamic_output_shape_nchw_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_float16_2();
bool is_ignored_dynamic_output_shape_nchw_float16_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_float16_2,
          is_ignored_dynamic_output_shape_nchw_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_float16_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_quant8_2();
bool is_ignored_dynamic_output_shape_nchw_quant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_quant8_2,
          is_ignored_dynamic_output_shape_nchw_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_channelQuant8_3();
bool is_ignored_dynamic_output_shape_nchw_channelQuant8_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_channelQuant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_channelQuant8_3,
          is_ignored_dynamic_output_shape_nchw_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_channelQuant8_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_channelQuant8_3) {
  const Model model = createTestModel_dynamic_output_shape_nchw_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_2();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_2,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_relaxed_2();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_relaxed_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_relaxed_2,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_relaxed_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_relaxed_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_float16_2();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_float16_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_float16_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_float16_2,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_float16_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_float16_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_quant8_2();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_quant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_quant8_2,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_quant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_quant8_2) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3();
bool is_ignored_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3) {
  Execute(device,
          createTestModel_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3,
          is_ignored_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3) {
  const Model model = createTestModel_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_dynamic_output_shape_nchw_weight_as_input_channelQuant8_3());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc();
bool is_ignored_large_nhwc(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc) {
  Execute(device,
          createTestModel_large_nhwc,
          is_ignored_large_nhwc,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc) {
  const Model model = createTestModel_large_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed();
bool is_ignored_large_nhwc_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed) {
  Execute(device,
          createTestModel_large_nhwc_relaxed,
          is_ignored_large_nhwc_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed) {
  const Model model = createTestModel_large_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16();
bool is_ignored_large_nhwc_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16) {
  Execute(device,
          createTestModel_large_nhwc_float16,
          is_ignored_large_nhwc_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16) {
  const Model model = createTestModel_large_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8();
bool is_ignored_large_nhwc_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8) {
  Execute(device,
          createTestModel_large_nhwc_quant8,
          is_ignored_large_nhwc_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8) {
  const Model model = createTestModel_large_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8();
bool is_ignored_large_nhwc_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8,
          is_ignored_large_nhwc_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8) {
  const Model model = createTestModel_large_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input();
bool is_ignored_large_nhwc_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input,
          is_ignored_large_nhwc_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input) {
  const Model model = createTestModel_large_nhwc_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input_relaxed();
bool is_ignored_large_nhwc_weight_as_input_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input_relaxed,
          is_ignored_large_nhwc_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_relaxed) {
  const Model model = createTestModel_large_nhwc_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input_float16();
bool is_ignored_large_nhwc_weight_as_input_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_float16) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input_float16,
          is_ignored_large_nhwc_weight_as_input_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_float16) {
  const Model model = createTestModel_large_nhwc_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input_quant8();
bool is_ignored_large_nhwc_weight_as_input_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_quant8) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input_quant8,
          is_ignored_large_nhwc_weight_as_input_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_quant8) {
  const Model model = createTestModel_large_nhwc_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input_channelQuant8();
bool is_ignored_large_nhwc_weight_as_input_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_channelQuant8) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input_channelQuant8,
          is_ignored_large_nhwc_weight_as_input_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_channelQuant8) {
  const Model model = createTestModel_large_nhwc_weight_as_input_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw();
bool is_ignored_large_nchw(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw) {
  Execute(device,
          createTestModel_large_nchw,
          is_ignored_large_nchw,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw) {
  const Model model = createTestModel_large_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed();
bool is_ignored_large_nchw_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed) {
  Execute(device,
          createTestModel_large_nchw_relaxed,
          is_ignored_large_nchw_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed) {
  const Model model = createTestModel_large_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16();
bool is_ignored_large_nchw_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16) {
  Execute(device,
          createTestModel_large_nchw_float16,
          is_ignored_large_nchw_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16) {
  const Model model = createTestModel_large_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8();
bool is_ignored_large_nchw_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8) {
  Execute(device,
          createTestModel_large_nchw_quant8,
          is_ignored_large_nchw_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8) {
  const Model model = createTestModel_large_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8();
bool is_ignored_large_nchw_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8,
          is_ignored_large_nchw_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8) {
  const Model model = createTestModel_large_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input();
bool is_ignored_large_nchw_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input,
          is_ignored_large_nchw_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input) {
  const Model model = createTestModel_large_nchw_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input_relaxed();
bool is_ignored_large_nchw_weight_as_input_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input_relaxed,
          is_ignored_large_nchw_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_relaxed) {
  const Model model = createTestModel_large_nchw_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input_float16();
bool is_ignored_large_nchw_weight_as_input_float16(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_float16) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input_float16,
          is_ignored_large_nchw_weight_as_input_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_float16());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_float16) {
  const Model model = createTestModel_large_nchw_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input_quant8();
bool is_ignored_large_nchw_weight_as_input_quant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_quant8) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input_quant8,
          is_ignored_large_nchw_weight_as_input_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_quant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_quant8) {
  const Model model = createTestModel_large_nchw_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input_channelQuant8();
bool is_ignored_large_nchw_weight_as_input_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_channelQuant8) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input_channelQuant8,
          is_ignored_large_nchw_weight_as_input_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_channelQuant8());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_channelQuant8) {
  const Model model = createTestModel_large_nchw_weight_as_input_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc();
bool is_ignored_large_dynamic_output_shape_nhwc(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc,
          is_ignored_large_dynamic_output_shape_nhwc,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_relaxed();
bool is_ignored_large_dynamic_output_shape_nhwc_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_relaxed) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_relaxed,
          is_ignored_large_dynamic_output_shape_nhwc_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_relaxed) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_float16();
bool is_ignored_large_dynamic_output_shape_nhwc_float16(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_float16) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_float16,
          is_ignored_large_dynamic_output_shape_nhwc_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_float16) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_quant8();
bool is_ignored_large_dynamic_output_shape_nhwc_quant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_quant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_quant8,
          is_ignored_large_dynamic_output_shape_nhwc_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_quant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_channelQuant8();
bool is_ignored_large_dynamic_output_shape_nhwc_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_channelQuant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_channelQuant8,
          is_ignored_large_dynamic_output_shape_nhwc_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_channelQuant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_channelQuant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_relaxed();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_relaxed,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_relaxed) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_float16();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_float16(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_float16) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_float16,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_float16) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_quant8();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_quant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_quant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_quant8,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_quant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw();
bool is_ignored_large_dynamic_output_shape_nchw(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw,
          is_ignored_large_dynamic_output_shape_nchw,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_relaxed();
bool is_ignored_large_dynamic_output_shape_nchw_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_relaxed) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_relaxed,
          is_ignored_large_dynamic_output_shape_nchw_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_relaxed) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_float16();
bool is_ignored_large_dynamic_output_shape_nchw_float16(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_float16) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_float16,
          is_ignored_large_dynamic_output_shape_nchw_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_float16) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_quant8();
bool is_ignored_large_dynamic_output_shape_nchw_quant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_quant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_quant8,
          is_ignored_large_dynamic_output_shape_nchw_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_quant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_channelQuant8();
bool is_ignored_large_dynamic_output_shape_nchw_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_channelQuant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_channelQuant8,
          is_ignored_large_dynamic_output_shape_nchw_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_channelQuant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_channelQuant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input_relaxed();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input_relaxed,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_relaxed) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input_float16();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input_float16();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input_float16(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_float16) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input_float16,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input_float16,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_float16(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_float16) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input_float16();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_float16());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input_quant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input_quant8();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input_quant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_quant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input_quant8,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input_quant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_quant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_quant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_2();
bool is_ignored_large_nhwc_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_2) {
  Execute(device,
          createTestModel_large_nhwc_2,
          is_ignored_large_nhwc_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_2) {
  const Model model = createTestModel_large_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_relaxed_2();
bool is_ignored_large_nhwc_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_large_nhwc_relaxed_2,
          is_ignored_large_nhwc_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_relaxed_2) {
  const Model model = createTestModel_large_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_float16_2();
bool is_ignored_large_nhwc_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_float16_2) {
  Execute(device,
          createTestModel_large_nhwc_float16_2,
          is_ignored_large_nhwc_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_float16_2) {
  const Model model = createTestModel_large_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_quant8_2();
bool is_ignored_large_nhwc_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_quant8_2) {
  Execute(device,
          createTestModel_large_nhwc_quant8_2,
          is_ignored_large_nhwc_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_quant8_2) {
  const Model model = createTestModel_large_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_channelQuant8_2();
bool is_ignored_large_nhwc_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_2) {
  Execute(device,
          createTestModel_large_nhwc_channelQuant8_2,
          is_ignored_large_nhwc_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_channelQuant8_2) {
  const Model model = createTestModel_large_nhwc_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input_2();
bool is_ignored_large_nhwc_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_2) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input_2,
          is_ignored_large_nhwc_weight_as_input_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_2) {
  const Model model = createTestModel_large_nhwc_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input_relaxed_2();
bool is_ignored_large_nhwc_weight_as_input_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_relaxed_2) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input_relaxed_2,
          is_ignored_large_nhwc_weight_as_input_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_relaxed_2) {
  const Model model = createTestModel_large_nhwc_weight_as_input_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input_float16_2();
bool is_ignored_large_nhwc_weight_as_input_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_float16_2) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input_float16_2,
          is_ignored_large_nhwc_weight_as_input_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_float16_2) {
  const Model model = createTestModel_large_nhwc_weight_as_input_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input_quant8_2();
bool is_ignored_large_nhwc_weight_as_input_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input_quant8_2,
          is_ignored_large_nhwc_weight_as_input_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_quant8_2) {
  const Model model = createTestModel_large_nhwc_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nhwc_weight_as_input_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nhwc_weight_as_input_channelQuant8_2();
bool is_ignored_large_nhwc_weight_as_input_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_channelQuant8_2) {
  Execute(device,
          createTestModel_large_nhwc_weight_as_input_channelQuant8_2,
          is_ignored_large_nhwc_weight_as_input_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nhwc_weight_as_input_channelQuant8_2) {
  const Model model = createTestModel_large_nhwc_weight_as_input_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nhwc_weight_as_input_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_2();
bool is_ignored_large_nchw_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_2) {
  Execute(device,
          createTestModel_large_nchw_2,
          is_ignored_large_nchw_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_2) {
  const Model model = createTestModel_large_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_relaxed_2();
bool is_ignored_large_nchw_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_relaxed_2) {
  Execute(device,
          createTestModel_large_nchw_relaxed_2,
          is_ignored_large_nchw_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_relaxed_2) {
  const Model model = createTestModel_large_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_float16_2();
bool is_ignored_large_nchw_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_float16_2) {
  Execute(device,
          createTestModel_large_nchw_float16_2,
          is_ignored_large_nchw_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_float16_2) {
  const Model model = createTestModel_large_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_quant8_2();
bool is_ignored_large_nchw_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_quant8_2) {
  Execute(device,
          createTestModel_large_nchw_quant8_2,
          is_ignored_large_nchw_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_quant8_2) {
  const Model model = createTestModel_large_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_channelQuant8_2();
bool is_ignored_large_nchw_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_2) {
  Execute(device,
          createTestModel_large_nchw_channelQuant8_2,
          is_ignored_large_nchw_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_channelQuant8_2) {
  const Model model = createTestModel_large_nchw_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input_2();
bool is_ignored_large_nchw_weight_as_input_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_2) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input_2,
          is_ignored_large_nchw_weight_as_input_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_2) {
  const Model model = createTestModel_large_nchw_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input_relaxed_2();
bool is_ignored_large_nchw_weight_as_input_relaxed_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_relaxed_2) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input_relaxed_2,
          is_ignored_large_nchw_weight_as_input_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_relaxed_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_relaxed_2) {
  const Model model = createTestModel_large_nchw_weight_as_input_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input_float16_2();
bool is_ignored_large_nchw_weight_as_input_float16_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_float16_2) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input_float16_2,
          is_ignored_large_nchw_weight_as_input_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_float16_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_float16_2) {
  const Model model = createTestModel_large_nchw_weight_as_input_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input_quant8_2();
bool is_ignored_large_nchw_weight_as_input_quant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input_quant8_2,
          is_ignored_large_nchw_weight_as_input_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_quant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_quant8_2) {
  const Model model = createTestModel_large_nchw_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_nchw_weight_as_input_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_nchw_weight_as_input_channelQuant8_2();
bool is_ignored_large_nchw_weight_as_input_channelQuant8_2(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_channelQuant8_2) {
  Execute(device,
          createTestModel_large_nchw_weight_as_input_channelQuant8_2,
          is_ignored_large_nchw_weight_as_input_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_channelQuant8_2());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_nchw_weight_as_input_channelQuant8_2) {
  const Model model = createTestModel_large_nchw_weight_as_input_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_nchw_weight_as_input_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_2();
bool is_ignored_large_dynamic_output_shape_nhwc_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_2,
          is_ignored_large_dynamic_output_shape_nhwc_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_relaxed_2();
bool is_ignored_large_dynamic_output_shape_nhwc_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_relaxed_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_relaxed_2,
          is_ignored_large_dynamic_output_shape_nhwc_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_relaxed_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_relaxed_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_float16_2();
bool is_ignored_large_dynamic_output_shape_nhwc_float16_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_float16_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_float16_2,
          is_ignored_large_dynamic_output_shape_nhwc_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_float16_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_float16_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_quant8_2();
bool is_ignored_large_dynamic_output_shape_nhwc_quant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_quant8_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_quant8_2,
          is_ignored_large_dynamic_output_shape_nhwc_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_quant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_quant8_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_channelQuant8_2();
bool is_ignored_large_dynamic_output_shape_nhwc_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_channelQuant8_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_channelQuant8_2,
          is_ignored_large_dynamic_output_shape_nhwc_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_channelQuant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_channelQuant8_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_2();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_2,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_float16_2();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_float16_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_float16_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_float16_2,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_float16_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_float16_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2();
bool is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2,
          is_ignored_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nhwc_weight_as_input_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_2();
bool is_ignored_large_dynamic_output_shape_nchw_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_2,
          is_ignored_large_dynamic_output_shape_nchw_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_relaxed_2();
bool is_ignored_large_dynamic_output_shape_nchw_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_relaxed_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_relaxed_2,
          is_ignored_large_dynamic_output_shape_nchw_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_relaxed_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_relaxed_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_float16_2();
bool is_ignored_large_dynamic_output_shape_nchw_float16_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_float16_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_float16_2,
          is_ignored_large_dynamic_output_shape_nchw_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_float16_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_float16_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_quant8_2();
bool is_ignored_large_dynamic_output_shape_nchw_quant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_quant8_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_quant8_2,
          is_ignored_large_dynamic_output_shape_nchw_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_quant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_quant8_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_channelQuant8_2();
bool is_ignored_large_dynamic_output_shape_nchw_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_channelQuant8_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_channelQuant8_2,
          is_ignored_large_dynamic_output_shape_nchw_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_channelQuant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_channelQuant8_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input_2();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input_2,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_relaxed_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input_float16_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input_float16_2();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input_float16_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_float16_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input_float16_2,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input_float16_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_float16_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_float16_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input_float16_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_float16_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input_quant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input_quant8_2();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input_quant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_quant8_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input_quant8_2,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input_quant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_quant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_quant8_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input_quant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_quant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2();
bool is_ignored_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2) {
  Execute(device,
          createTestModel_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2,
          is_ignored_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2) {
  const Model model = createTestModel_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_large_dynamic_output_shape_nchw_weight_as_input_channelQuant8_2());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1();
bool is_ignored_quant_output_multiplier_gt_1(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1,
          is_ignored_quant_output_multiplier_gt_1,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1) {
  const Model model = createTestModel_quant_output_multiplier_gt_1();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_relaxed();
bool is_ignored_quant_output_multiplier_gt_1_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_relaxed,
          is_ignored_quant_output_multiplier_gt_1_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_relaxed) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_weight_as_input();
bool is_ignored_quant_output_multiplier_gt_1_weight_as_input(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_weight_as_input) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_weight_as_input,
          is_ignored_quant_output_multiplier_gt_1_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_weight_as_input());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_weight_as_input) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_weight_as_input_relaxed();
bool is_ignored_quant_output_multiplier_gt_1_weight_as_input_relaxed(int);

TEST_F(NeuralnetworksHidlTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_weight_as_input_relaxed,
          is_ignored_quant_output_multiplier_gt_1_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_weight_as_input_relaxed());
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_weight_as_input_relaxed) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_dynamic_output_shape();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape();
bool is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape,
          is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed();
bool is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed,
          is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input();
bool is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input,
          is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

namespace generated_tests::depthwise_conv2d_v1_2 {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed();

} // namespace generated_tests::depthwise_conv2d_v1_2

namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2 {

Model createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed();
bool is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed(int);

TEST_F(DynamicOutputShapeTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed) {
  Execute(device,
          createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed,
          is_ignored_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed,
          ::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed(), true);
}

TEST_F(ValidationTest, depthwise_conv2d_v1_2_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed) {
  const Model model = createTestModel_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed();
  const std::vector<Request> requests = createRequests(::generated_tests::depthwise_conv2d_v1_2::get_examples_quant_output_multiplier_gt_1_dynamic_output_shape_weight_as_input_relaxed());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::depthwise_conv2d_v1_2

