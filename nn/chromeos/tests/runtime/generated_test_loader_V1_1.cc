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

// V1_1
namespace generated_tests::add_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_4_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_float_5_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::batch_to_space { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::batch_to_space_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::batch_to_space_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::batch_to_space_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::batch_to_space_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float_3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_1_h3_w2_SAME_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_1_h3_w2_VALID_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_3_h3_w2_SAME_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_3_h3_w2_VALID_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_channels_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_channels_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_large_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_large_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv_float_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depth_to_space_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depth_to_space_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depth_to_space_float_3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_large_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_large_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_large_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::dequantize_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::div_broadcast_float { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::div_broadcast_float_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::div { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::div_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::embedding_lookup_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::floor_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_4d_simple { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_4d_simple_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_large_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_large_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_float_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::hashtable_lookup_float_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_normalization_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_normalization_large_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_normalization_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_pool_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_pool_float_large_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_pool_float_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::local_response_norm_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::local_response_norm_float_4_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logistic_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logistic_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm2_state2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm2_state_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_state2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_state3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_state_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm_state2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm_state_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_float_3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_float_4_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mobilenet_224_gender_basic_fixed_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul_relu_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu1_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu1_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_b138150365 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_weights_as_inputs_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::resize_bilinear_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::resize_bilinear_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::rnn_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::rnn_state_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::softmax_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::softmax_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_float_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_float_3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_quant8_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_depth_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_depth_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_depth_float_3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::squeeze_b155238914 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::squeeze { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::squeeze_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::squeeze_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::squeeze_omitted { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::squeeze_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::squeeze_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_b155662254 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_10 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_10_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_11 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_11_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_4_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_5 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_5_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_6 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_6_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_7 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_7_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_8_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_9 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float_9_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_qaunt8_10 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_qaunt8_11 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_5 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_6 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_7 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_9 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sub_broadcast_float { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sub_broadcast_float_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sub { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sub_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf2_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_bias_present_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_state_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tanh_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose_float_1_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose_relaxed { const test_helper::TestModel& get_test_model(); }

TEST(GeneratedTestsLoader, V1_1_Loader) {
  generated_tests::add_relaxed::get_test_model();
  generated_tests::avg_pool_float_1_relaxed::get_test_model();
  generated_tests::avg_pool_float_2_relaxed::get_test_model();
  generated_tests::avg_pool_float_3_relaxed::get_test_model();
  generated_tests::avg_pool_float_4_relaxed::get_test_model();
  generated_tests::avg_pool_float_5_relaxed::get_test_model();
  generated_tests::batch_to_space::get_test_model();
  generated_tests::batch_to_space_float_1::get_test_model();
  generated_tests::batch_to_space_float_1_relaxed::get_test_model();
  generated_tests::batch_to_space_quant8_1::get_test_model();
  generated_tests::batch_to_space_relaxed::get_test_model();
  generated_tests::concat_float_1_relaxed::get_test_model();
  generated_tests::concat_float_2_relaxed::get_test_model();
  generated_tests::concat_float_3_relaxed::get_test_model();
  generated_tests::conv_1_h3_w2_SAME_relaxed::get_test_model();
  generated_tests::conv_1_h3_w2_VALID_relaxed::get_test_model();
  generated_tests::conv_3_h3_w2_SAME_relaxed::get_test_model();
  generated_tests::conv_3_h3_w2_VALID_relaxed::get_test_model();
  generated_tests::conv_float_2_relaxed::get_test_model();
  generated_tests::conv_float_channels_relaxed::get_test_model();
  generated_tests::conv_float_channels_weights_as_inputs_relaxed::get_test_model();
  generated_tests::conv_float_large_relaxed::get_test_model();
  generated_tests::conv_float_large_weights_as_inputs_relaxed::get_test_model();
  generated_tests::conv_float_relaxed::get_test_model();
  generated_tests::conv_float_weights_as_inputs_relaxed::get_test_model();
  generated_tests::depth_to_space_float_1_relaxed::get_test_model();
  generated_tests::depth_to_space_float_2_relaxed::get_test_model();
  generated_tests::depth_to_space_float_3_relaxed::get_test_model();
  generated_tests::depthwise_conv2d_float_2_relaxed::get_test_model();
  generated_tests::depthwise_conv2d_float_large_2_relaxed::get_test_model();
  generated_tests::depthwise_conv2d_float_large_2_weights_as_inputs_relaxed::get_test_model();
  generated_tests::depthwise_conv2d_float_large_relaxed::get_test_model();
  generated_tests::depthwise_conv2d_float_large_weights_as_inputs_relaxed::get_test_model();
  generated_tests::depthwise_conv2d_float_relaxed::get_test_model();
  generated_tests::depthwise_conv2d_float_weights_as_inputs_relaxed::get_test_model();
  generated_tests::depthwise_conv_relaxed::get_test_model();
  generated_tests::dequantize_relaxed::get_test_model();
  generated_tests::div_broadcast_float::get_test_model();
  generated_tests::div_broadcast_float_relaxed::get_test_model();
  generated_tests::div::get_test_model();
  generated_tests::div_relaxed::get_test_model();
  generated_tests::embedding_lookup_relaxed::get_test_model();
  generated_tests::floor_relaxed::get_test_model();
  generated_tests::fully_connected_float_2_relaxed::get_test_model();
  generated_tests::fully_connected_float_4d_simple::get_test_model();
  generated_tests::fully_connected_float_4d_simple_relaxed::get_test_model();
  generated_tests::fully_connected_float_large_relaxed::get_test_model();
  generated_tests::fully_connected_float_large_weights_as_inputs_relaxed::get_test_model();
  generated_tests::fully_connected_float_relaxed::get_test_model();
  generated_tests::fully_connected_float_weights_as_inputs_relaxed::get_test_model();
  generated_tests::hashtable_lookup_float_relaxed::get_test_model();
  generated_tests::l2_normalization_2_relaxed::get_test_model();
  generated_tests::l2_normalization_large_relaxed::get_test_model();
  generated_tests::l2_normalization_relaxed::get_test_model();
  generated_tests::l2_pool_float_2_relaxed::get_test_model();
  generated_tests::l2_pool_float_large_relaxed::get_test_model();
  generated_tests::l2_pool_float_relaxed::get_test_model();
  generated_tests::local_response_norm_float_1_relaxed::get_test_model();
  generated_tests::local_response_norm_float_4_relaxed::get_test_model();
  generated_tests::logistic_float_1_relaxed::get_test_model();
  generated_tests::logistic_float_2_relaxed::get_test_model();
  generated_tests::lsh_projection_2_relaxed::get_test_model();
  generated_tests::lsh_projection_relaxed::get_test_model();
  generated_tests::lsh_projection_weights_as_inputs_relaxed::get_test_model();
  generated_tests::lstm2_relaxed::get_test_model();
  generated_tests::lstm2_state2_relaxed::get_test_model();
  generated_tests::lstm2_state_relaxed::get_test_model();
  generated_tests::lstm3_relaxed::get_test_model();
  generated_tests::lstm3_state2_relaxed::get_test_model();
  generated_tests::lstm3_state3_relaxed::get_test_model();
  generated_tests::lstm3_state_relaxed::get_test_model();
  generated_tests::lstm_relaxed::get_test_model();
  generated_tests::lstm_state2_relaxed::get_test_model();
  generated_tests::lstm_state_relaxed::get_test_model();
  generated_tests::max_pool_float_1_relaxed::get_test_model();
  generated_tests::max_pool_float_2_relaxed::get_test_model();
  generated_tests::max_pool_float_3_relaxed::get_test_model();
  generated_tests::max_pool_float_4_relaxed::get_test_model();
  generated_tests::mean_b155508675::get_test_model();
  generated_tests::mean::get_test_model();
  generated_tests::mean_float_1::get_test_model();
  generated_tests::mean_float_1_relaxed::get_test_model();
  generated_tests::mean_float_2::get_test_model();
  generated_tests::mean_float_2_relaxed::get_test_model();
  generated_tests::mean_quant8_1::get_test_model();
  generated_tests::mean_quant8_2::get_test_model();
  generated_tests::mean_relaxed::get_test_model();
  // TODO(b/157388904): Hardware buffers not implemented on ChromeOS.
  // generated_tests::mobilenet_224_gender_basic_fixed_relaxed::get_test_model();
  generated_tests::mul_relaxed::get_test_model();
  generated_tests::mul_relu_relaxed::get_test_model();
  generated_tests::pad::get_test_model();
  generated_tests::pad_float_1::get_test_model();
  generated_tests::pad_float_1_relaxed::get_test_model();
  generated_tests::pad_relaxed::get_test_model();
  generated_tests::relu1_float_1_relaxed::get_test_model();
  generated_tests::relu1_float_2_relaxed::get_test_model();
  generated_tests::relu6_float_1_relaxed::get_test_model();
  generated_tests::relu6_float_2_relaxed::get_test_model();
  generated_tests::relu_float_1_relaxed::get_test_model();
  generated_tests::relu_float_2_relaxed::get_test_model();
  generated_tests::reshape_b138150365::get_test_model();
  generated_tests::reshape_relaxed::get_test_model();
  generated_tests::reshape_weights_as_inputs_relaxed::get_test_model();
  generated_tests::resize_bilinear_2_relaxed::get_test_model();
  generated_tests::resize_bilinear_relaxed::get_test_model();
  generated_tests::rnn_relaxed::get_test_model();
  generated_tests::rnn_state_relaxed::get_test_model();
  generated_tests::softmax_float_1_relaxed::get_test_model();
  generated_tests::softmax_float_2_relaxed::get_test_model();
  generated_tests::space_to_batch::get_test_model();
  generated_tests::space_to_batch_float_1::get_test_model();
  generated_tests::space_to_batch_float_1_relaxed::get_test_model();
  generated_tests::space_to_batch_float_2::get_test_model();
  generated_tests::space_to_batch_float_2_relaxed::get_test_model();
  generated_tests::space_to_batch_float_3::get_test_model();
  generated_tests::space_to_batch_float_3_relaxed::get_test_model();
  generated_tests::space_to_batch_quant8_1::get_test_model();
  generated_tests::space_to_batch_quant8_2::get_test_model();
  generated_tests::space_to_batch_quant8_3::get_test_model();
  generated_tests::space_to_batch_relaxed::get_test_model();
  generated_tests::space_to_depth_float_1_relaxed::get_test_model();
  generated_tests::space_to_depth_float_2_relaxed::get_test_model();
  generated_tests::space_to_depth_float_3_relaxed::get_test_model();
  generated_tests::squeeze_b155238914::get_test_model();
  generated_tests::squeeze::get_test_model();
  generated_tests::squeeze_float_1::get_test_model();
  generated_tests::squeeze_float_1_relaxed::get_test_model();
  generated_tests::squeeze_omitted::get_test_model();
  generated_tests::squeeze_quant8_1::get_test_model();
  generated_tests::squeeze_relaxed::get_test_model();
  generated_tests::strided_slice_b155662254::get_test_model();
  generated_tests::strided_slice::get_test_model();
  generated_tests::strided_slice_float_10::get_test_model();
  generated_tests::strided_slice_float_10_relaxed::get_test_model();
  generated_tests::strided_slice_float_11::get_test_model();
  generated_tests::strided_slice_float_11_relaxed::get_test_model();
  generated_tests::strided_slice_float_1::get_test_model();
  generated_tests::strided_slice_float_1_relaxed::get_test_model();
  generated_tests::strided_slice_float_2::get_test_model();
  generated_tests::strided_slice_float_2_relaxed::get_test_model();
  generated_tests::strided_slice_float_3::get_test_model();
  generated_tests::strided_slice_float_3_relaxed::get_test_model();
  generated_tests::strided_slice_float_4::get_test_model();
  generated_tests::strided_slice_float_4_relaxed::get_test_model();
  generated_tests::strided_slice_float_5::get_test_model();
  generated_tests::strided_slice_float_5_relaxed::get_test_model();
  generated_tests::strided_slice_float_6::get_test_model();
  generated_tests::strided_slice_float_6_relaxed::get_test_model();
  generated_tests::strided_slice_float_7::get_test_model();
  generated_tests::strided_slice_float_7_relaxed::get_test_model();
  generated_tests::strided_slice_float_8::get_test_model();
  generated_tests::strided_slice_float_8_relaxed::get_test_model();
  generated_tests::strided_slice_float_9::get_test_model();
  generated_tests::strided_slice_float_9_relaxed::get_test_model();
  generated_tests::strided_slice_qaunt8_10::get_test_model();
  generated_tests::strided_slice_qaunt8_11::get_test_model();
  generated_tests::strided_slice_quant8_1::get_test_model();
  generated_tests::strided_slice_quant8_2::get_test_model();
  generated_tests::strided_slice_quant8_3::get_test_model();
  generated_tests::strided_slice_quant8_4::get_test_model();
  generated_tests::strided_slice_quant8_5::get_test_model();
  generated_tests::strided_slice_quant8_6::get_test_model();
  generated_tests::strided_slice_quant8_7::get_test_model();
  generated_tests::strided_slice_quant8_8::get_test_model();
  generated_tests::strided_slice_quant8_9::get_test_model();
  generated_tests::strided_slice_relaxed::get_test_model();
  generated_tests::sub_broadcast_float::get_test_model();
  generated_tests::sub_broadcast_float_relaxed::get_test_model();
  generated_tests::sub::get_test_model();
  generated_tests::sub_relaxed::get_test_model();
  generated_tests::svdf2_relaxed::get_test_model();
  generated_tests::svdf_bias_present_relaxed::get_test_model();
  generated_tests::svdf_relaxed::get_test_model();
  generated_tests::svdf_state_relaxed::get_test_model();
  generated_tests::tanh_relaxed::get_test_model();
  generated_tests::transpose::get_test_model();
  generated_tests::transpose_float_1::get_test_model();
  generated_tests::transpose_float_1_relaxed::get_test_model();
  generated_tests::transpose_quant8_1::get_test_model();
  generated_tests::transpose_relaxed::get_test_model();

  EXPECT_TRUE(true);
}
