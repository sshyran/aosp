// Generated from transpose_conv2d_large.mod.py
// DO NOT EDIT
// clang-format off
#include "GeneratedTests.h"

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_quant8();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_quant8();
bool is_ignored_quant8(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_quant8) {
  Execute(device,
          createTestModel_quant8,
          is_ignored_quant8,
          ::generated_tests::transpose_conv2d_large::get_examples_quant8());
}

TEST_F(ValidationTest, transpose_conv2d_large_quant8) {
  const Model model = createTestModel_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_channelQuant8();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_channelQuant8();
bool is_ignored_channelQuant8(int);

TEST_F(NeuralnetworksHidlTest, transpose_conv2d_large_channelQuant8) {
  Execute(device,
          createTestModel_channelQuant8,
          is_ignored_channelQuant8,
          ::generated_tests::transpose_conv2d_large::get_examples_channelQuant8());
}

TEST_F(ValidationTest, transpose_conv2d_large_channelQuant8) {
  const Model model = createTestModel_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_quant8();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_dynamic_output_shape_quant8();
bool is_ignored_dynamic_output_shape_quant8(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_dynamic_output_shape_quant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_quant8,
          is_ignored_dynamic_output_shape_quant8,
          ::generated_tests::transpose_conv2d_large::get_examples_dynamic_output_shape_quant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_dynamic_output_shape_quant8) {
  const Model model = createTestModel_dynamic_output_shape_quant8();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_dynamic_output_shape_quant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

namespace generated_tests::transpose_conv2d_large {

std::vector<::test_helper::MixedTypedExample>& get_examples_dynamic_output_shape_channelQuant8();

} // namespace generated_tests::transpose_conv2d_large

namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large {

Model createTestModel_dynamic_output_shape_channelQuant8();
bool is_ignored_dynamic_output_shape_channelQuant8(int);

TEST_F(DynamicOutputShapeTest, transpose_conv2d_large_dynamic_output_shape_channelQuant8) {
  Execute(device,
          createTestModel_dynamic_output_shape_channelQuant8,
          is_ignored_dynamic_output_shape_channelQuant8,
          ::generated_tests::transpose_conv2d_large::get_examples_dynamic_output_shape_channelQuant8(), true);
}

TEST_F(ValidationTest, transpose_conv2d_large_dynamic_output_shape_channelQuant8) {
  const Model model = createTestModel_dynamic_output_shape_channelQuant8();
  const std::vector<Request> requests = createRequests(::generated_tests::transpose_conv2d_large::get_examples_dynamic_output_shape_channelQuant8());
  validateEverything(model, requests);
}

} // namespace android::hardware::neuralnetworks::V1_2::generated_tests::transpose_conv2d_large

