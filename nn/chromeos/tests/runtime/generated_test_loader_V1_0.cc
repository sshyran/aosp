// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <gtest/gtest.h>
#include "TestHarness.h"

// This exists to ensure that all of the tests in the generated test
// suite get loaded into the system. Unless the symbols are referenced,
// the linker will drop them and they won't get loaded or run. You could
// use --whole-archive to prevent this, but the syntax is cumbersome and
// gn doesn't support it well.

// This file was produced by parsing the results of 'nm -C <lib>' and
// looking for the 'dummy_test_model' symbol and then some find / replace
// magic.

// V1_0
namespace generated_tests::add_broadcast_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::add_broadcast_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::add { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::add_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_5 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_quant8_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_quant8_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_quant8_5 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_quant8_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_1_h3_w2_SAME { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_1_h3_w2_VALID { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_3_h3_w2_SAME { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_3_h3_w2_VALID { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_channels { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_channels_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_large { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_large_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_quant8_channels { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_quant8_channels_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_quant8_large { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_quant8_large_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_quant8_overflow { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_quant8_overflow_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_quant8_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depth_to_space_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depth_to_space_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depth_to_space_float_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depth_to_space_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depth_to_space_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_large_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_large { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_large_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_quant8_large { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_quant8_large_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_quant8_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::dequantize { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::embedding_lookup { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::floor { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_large { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_large_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_quant8_large { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_quant8_large_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_quant8_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::hashtable_lookup_float { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::hashtable_lookup_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_normalization_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_normalization { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_normalization_large { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_pool_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_pool_float { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_pool_float_large { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::local_response_norm_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::local_response_norm_float_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logistic_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logistic_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logistic_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logistic_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm2_state2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm2_state { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_state2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_state3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_state { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm_state2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm_state { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_float_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_float_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_quant8_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_quant8_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mobilenet_224_gender_basic_fixed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mobilenet_quantized { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul_broadcast_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul_relu { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu1_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu1_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu1_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu1_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_quant8_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_weights_as_inputs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::resize_bilinear_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::resize_bilinear { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::rnn { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::rnn_state { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::softmax_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::softmax_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::softmax_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::softmax_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_depth_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_depth_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_depth_float_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_depth_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_depth_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_bias_present { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_state { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tanh { const test_helper::TestModel& get_test_model(); }

TEST(GeneratedTestsLoader, V1_0_Loader) {
  generated_tests::add_broadcast_quant8::get_test_model();
  generated_tests::add_broadcast_quant8::get_test_model();
  generated_tests::add::get_test_model();
  generated_tests::add_quant8::get_test_model();
  generated_tests::avg_pool_float_1::get_test_model();
  generated_tests::avg_pool_float_2::get_test_model();
  generated_tests::avg_pool_float_3::get_test_model();
  generated_tests::avg_pool_float_4::get_test_model();
  generated_tests::avg_pool_float_5::get_test_model();
  generated_tests::avg_pool_quant8_1::get_test_model();
  generated_tests::avg_pool_quant8_2::get_test_model();
  generated_tests::avg_pool_quant8_3::get_test_model();
  generated_tests::avg_pool_quant8_4::get_test_model();
  generated_tests::avg_pool_quant8_5::get_test_model();
  generated_tests::concat_float_1::get_test_model();
  generated_tests::concat_float_2::get_test_model();
  generated_tests::concat_float_3::get_test_model();
  generated_tests::concat_quant8_1::get_test_model();
  generated_tests::concat_quant8_2::get_test_model();
  generated_tests::concat_quant8_3::get_test_model();
  generated_tests::conv_1_h3_w2_SAME::get_test_model();
  generated_tests::conv_1_h3_w2_VALID::get_test_model();
  generated_tests::conv_3_h3_w2_SAME::get_test_model();
  generated_tests::conv_3_h3_w2_VALID::get_test_model();
  generated_tests::conv_float_2::get_test_model();
  generated_tests::conv_float_channels::get_test_model();
  generated_tests::conv_float_channels_weights_as_inputs::get_test_model();
  generated_tests::conv_float::get_test_model();
  generated_tests::conv_float_large::get_test_model();
  generated_tests::conv_float_large_weights_as_inputs::get_test_model();
  generated_tests::conv_float_weights_as_inputs::get_test_model();
  generated_tests::conv_quant8_2::get_test_model();
  generated_tests::conv_quant8_channels::get_test_model();
  generated_tests::conv_quant8_channels_weights_as_inputs::get_test_model();
  generated_tests::conv_quant8::get_test_model();
  generated_tests::conv_quant8_large::get_test_model();
  generated_tests::conv_quant8_large_weights_as_inputs::get_test_model();
  generated_tests::conv_quant8_overflow::get_test_model();
  generated_tests::conv_quant8_overflow_weights_as_inputs::get_test_model();
  generated_tests::conv_quant8_weights_as_inputs::get_test_model();
  generated_tests::depth_to_space_float_1::get_test_model();
  generated_tests::depth_to_space_float_2::get_test_model();
  generated_tests::depth_to_space_float_3::get_test_model();
  generated_tests::depth_to_space_quant8_1::get_test_model();
  generated_tests::depth_to_space_quant8_2::get_test_model();
  generated_tests::depthwise_conv2d_float_2::get_test_model();
  generated_tests::depthwise_conv2d_float::get_test_model();
  generated_tests::depthwise_conv2d_float_large_2::get_test_model();
  generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs::get_test_model();
  generated_tests::depthwise_conv2d_float_large::get_test_model();
  generated_tests::depthwise_conv2d_float_large_weights_as_inputs::get_test_model();
  generated_tests::depthwise_conv2d_float_weights_as_inputs::get_test_model();
  generated_tests::depthwise_conv2d_quant8_2::get_test_model();
  generated_tests::depthwise_conv2d_quant8::get_test_model();
  generated_tests::depthwise_conv2d_quant8_large::get_test_model();
  generated_tests::depthwise_conv2d_quant8_large_weights_as_inputs::get_test_model();
  generated_tests::depthwise_conv2d_quant8_weights_as_inputs::get_test_model();
  generated_tests::depthwise_conv::get_test_model();
  generated_tests::dequantize::get_test_model();
  generated_tests::embedding_lookup::get_test_model();
  generated_tests::floor::get_test_model();
  generated_tests::fully_connected_float_2::get_test_model();
  generated_tests::fully_connected_float_3::get_test_model();
  generated_tests::fully_connected_float::get_test_model();
  generated_tests::fully_connected_float_large::get_test_model();
  generated_tests::fully_connected_float_large_weights_as_inputs::get_test_model();
  generated_tests::fully_connected_float_weights_as_inputs::get_test_model();
  generated_tests::fully_connected_quant8_2::get_test_model();
  generated_tests::fully_connected_quant8::get_test_model();
  generated_tests::fully_connected_quant8_large::get_test_model();
  generated_tests::fully_connected_quant8_large_weights_as_inputs::get_test_model();
  generated_tests::fully_connected_quant8_weights_as_inputs::get_test_model();
  generated_tests::hashtable_lookup_float::get_test_model();
  generated_tests::hashtable_lookup_quant8::get_test_model();
  generated_tests::l2_normalization_2::get_test_model();
  generated_tests::l2_normalization::get_test_model();
  generated_tests::l2_normalization_large::get_test_model();
  generated_tests::l2_pool_float_2::get_test_model();
  generated_tests::l2_pool_float::get_test_model();
  generated_tests::l2_pool_float_large::get_test_model();
  generated_tests::local_response_norm_float_1::get_test_model();
  generated_tests::local_response_norm_float_4::get_test_model();
  generated_tests::logistic_float_1::get_test_model();
  generated_tests::logistic_float_2::get_test_model();
  generated_tests::logistic_quant8_1::get_test_model();
  generated_tests::logistic_quant8_2::get_test_model();
  generated_tests::lsh_projection_2::get_test_model();
  generated_tests::lsh_projection::get_test_model();
  generated_tests::lsh_projection_weights_as_inputs::get_test_model();
  generated_tests::lstm2::get_test_model();
  generated_tests::lstm2_state2::get_test_model();
  generated_tests::lstm2_state::get_test_model();
  generated_tests::lstm3::get_test_model();
  generated_tests::lstm3_state2::get_test_model();
  generated_tests::lstm3_state3::get_test_model();
  generated_tests::lstm3_state::get_test_model();
  generated_tests::lstm::get_test_model();
  generated_tests::lstm_state2::get_test_model();
  generated_tests::lstm_state::get_test_model();
  generated_tests::max_pool_float_1::get_test_model();
  generated_tests::max_pool_float_2::get_test_model();
  generated_tests::max_pool_float_3::get_test_model();
  generated_tests::max_pool_float_4::get_test_model();
  generated_tests::max_pool_quant8_1::get_test_model();
  generated_tests::max_pool_quant8_2::get_test_model();
  generated_tests::max_pool_quant8_3::get_test_model();
  generated_tests::max_pool_quant8_4::get_test_model();
  // TODO(b/157388904): Hardware buffers not implemented on ChromeOS.
  // generated_tests::mobilenet_224_gender_basic_fixed::get_test_model();
  // generated_tests::mobilenet_quantized::get_test_model();
  generated_tests::mul_broadcast_quant8::get_test_model();
  generated_tests::mul::get_test_model();
  generated_tests::mul_quant8::get_test_model();
  generated_tests::mul_relu::get_test_model();
  generated_tests::relu1_float_1::get_test_model();
  generated_tests::relu1_float_2::get_test_model();
  generated_tests::relu1_quant8_1::get_test_model();
  generated_tests::relu1_quant8_2::get_test_model();
  generated_tests::relu6_float_1::get_test_model();
  generated_tests::relu6_float_2::get_test_model();
  generated_tests::relu6_quant8_1::get_test_model();
  generated_tests::relu6_quant8_2::get_test_model();
  generated_tests::relu_float_1::get_test_model();
  generated_tests::relu_float_2::get_test_model();
  generated_tests::relu_quant8_1::get_test_model();
  generated_tests::relu_quant8_2::get_test_model();
  generated_tests::reshape::get_test_model();
  generated_tests::reshape_quant8::get_test_model();
  generated_tests::reshape_quant8_weights_as_inputs::get_test_model();
  generated_tests::reshape_weights_as_inputs::get_test_model();
  generated_tests::resize_bilinear_2::get_test_model();
  generated_tests::resize_bilinear::get_test_model();
  generated_tests::rnn::get_test_model();
  generated_tests::rnn_state::get_test_model();
  generated_tests::softmax_float_1::get_test_model();
  generated_tests::softmax_float_2::get_test_model();
  generated_tests::softmax_quant8_1::get_test_model();
  generated_tests::softmax_quant8_2::get_test_model();
  generated_tests::space_to_depth_float_1::get_test_model();
  generated_tests::space_to_depth_float_2::get_test_model();
  generated_tests::space_to_depth_float_3::get_test_model();
  generated_tests::space_to_depth_quant8_1::get_test_model();
  generated_tests::space_to_depth_quant8_2::get_test_model();
  generated_tests::svdf2::get_test_model();
  generated_tests::svdf_bias_present::get_test_model();
  generated_tests::svdf::get_test_model();
  generated_tests::svdf_state::get_test_model();
  generated_tests::tanh::get_test_model();

  EXPECT_TRUE(true);
}
