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

//V1_2
namespace generated_tests::abs { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::add_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::argmax_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::argmax_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::argmax_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::argmax_b155660285 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::argmin_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::argmin_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::argmin_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::argmin_b155660285 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::axis_aligned_bbox_transform { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::box_with_nms_limit_gaussian { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::box_with_nms_limit_hard { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::box_with_nms_limit_linear { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float16_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float16_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float16_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_zero_sized { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv2d_per_channel { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::dequantize_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::detection_postprocess { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::div_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::expand_dims { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::exp { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::floor_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::gather { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::gather_higher_rank { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::log { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logical_not { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logistic_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::log_softmax { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection_3_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection_4_relaxed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection_deprecated { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lsh_projection_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm2_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm2_state2_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm2_state_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_state2_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_state3_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm3_state_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm_state2_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::lstm_state_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::neg { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_all_dims { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_low_rank { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_low_rank_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_quant8_nonzero { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_v2_1_float { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_v2_1_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_v2_all_dims { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_v2_all_dims_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_v2_low_rank { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_v2_low_rank_quant8 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pow { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::prelu { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::quantized_lstm { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::random_multinomial { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::random_multinomial_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_all_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_all { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_any_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_any { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_max_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_max { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_min_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_min { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_prod_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_prod { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_sum_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_sum { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu1_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::rnn_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::rsqrt { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sin { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::slice { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::softmax_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_quant8_nonzero { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_float_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_float_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_float_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_float_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_float_5 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_int32_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_int32_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_int32_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_int32_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_quant8_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_quant8_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_quant8_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_quant8_4 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sqrt { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::squeeze_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sub_quantized_different_scales { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_bias_present_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_state_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tanh_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tile_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tile_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tile_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::topk_v2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_lstm_1step { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_lstm_batch_major_norm_peephole_projection { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_lstm_cifg_peephole { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_lstm_f16_batch_major { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_lstm_f16_norm_peephole_projection { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_lstm_norm_peephole_projection { const test_helper::TestModel& get_test_model(); }

// V1_3
namespace generated_tests::abs_int32 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::add_int32 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::add_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::avg_pool_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::batch_to_space_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv2d_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depth_to_space_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::dequantize_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::div_int32 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::if_no_value { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::l2_normalization_zeros { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logistic_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mean_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul_int32 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pad_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::pow_same_shape { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::qlstm_noprojection { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::qlstm_projection { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu1_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::slice_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::softmax_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_depth_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::split_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::squeeze_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::strided_slice_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sub_int32 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sub_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tanh_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::topk_v2_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole_state_output { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::while_infinite_loop { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::cast_mismatching_shapes { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_invalid_rank { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv2d_v1_3_invalid_rank { const test_helper::TestModel& get_test_model(); }


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

TEST(GeneratedTestsLoader, V1_2_Loader) {
  generated_tests::abs::get_test_model();
  generated_tests::add_v1_2::get_test_model();
  generated_tests::argmax_1::get_test_model();
  generated_tests::argmax_2::get_test_model();
  generated_tests::argmax_3::get_test_model();
  generated_tests::argmax_b155660285::get_test_model();
  generated_tests::argmin_1::get_test_model();
  generated_tests::argmin_2::get_test_model();
  generated_tests::argmin_3::get_test_model();
  generated_tests::argmin_b155660285::get_test_model();
  generated_tests::axis_aligned_bbox_transform::get_test_model();
  generated_tests::box_with_nms_limit_gaussian::get_test_model();
  generated_tests::box_with_nms_limit_hard::get_test_model();
  generated_tests::box_with_nms_limit_linear::get_test_model();
  generated_tests::concat_float16_1::get_test_model();
  generated_tests::concat_float16_2::get_test_model();
  generated_tests::concat_float16_3::get_test_model();
  generated_tests::concat_zero_sized::get_test_model();
  generated_tests::conv2d_per_channel::get_test_model();
  generated_tests::dequantize_v1_2::get_test_model();
  generated_tests::detection_postprocess::get_test_model();
  generated_tests::div_v1_2::get_test_model();
  generated_tests::expand_dims::get_test_model();
  generated_tests::exp::get_test_model();
  generated_tests::floor_float16::get_test_model();
  generated_tests::fully_connected_v1_2::get_test_model();
  generated_tests::gather::get_test_model();
  generated_tests::gather_higher_rank::get_test_model();
  generated_tests::log::get_test_model();
  generated_tests::logical_not::get_test_model();
  generated_tests::logistic_v1_2::get_test_model();
  generated_tests::log_softmax::get_test_model();
  generated_tests::lsh_projection_3_relaxed::get_test_model();
  generated_tests::lsh_projection_4_relaxed::get_test_model();
  generated_tests::lsh_projection_deprecated::get_test_model();
  generated_tests::lsh_projection_float16::get_test_model();
  generated_tests::lstm2_float16::get_test_model();
  generated_tests::lstm2_state2_float16::get_test_model();
  generated_tests::lstm2_state_float16::get_test_model();
  generated_tests::lstm3_float16::get_test_model();
  generated_tests::lstm3_state2_float16::get_test_model();
  generated_tests::lstm3_state3_float16::get_test_model();
  generated_tests::lstm3_state_float16::get_test_model();
  generated_tests::lstm_float16::get_test_model();
  generated_tests::lstm_state2_float16::get_test_model();
  generated_tests::lstm_state_float16::get_test_model();
  generated_tests::mean_float16::get_test_model();
  generated_tests::mul_v1_2::get_test_model();
  generated_tests::neg::get_test_model();
  generated_tests::pad_all_dims::get_test_model();
  generated_tests::pad_float16::get_test_model();
  generated_tests::pad_low_rank::get_test_model();
  generated_tests::pad_low_rank_quant8::get_test_model();
  generated_tests::pad_quant8::get_test_model();
  generated_tests::pad_quant8_nonzero::get_test_model();
  generated_tests::pad_v2_1_float::get_test_model();
  generated_tests::pad_v2_1_quant8::get_test_model();
  generated_tests::pad_v2_all_dims::get_test_model();
  generated_tests::pad_v2_all_dims_quant8::get_test_model();
  generated_tests::pad_v2_low_rank::get_test_model();
  generated_tests::pad_v2_low_rank_quant8::get_test_model();
  generated_tests::pow::get_test_model();
  generated_tests::prelu::get_test_model();
  generated_tests::quantized_lstm::get_test_model();
  generated_tests::random_multinomial::get_test_model();
  generated_tests::random_multinomial_float16::get_test_model();
  generated_tests::reduce_all_b155508675::get_test_model();
  generated_tests::reduce_all::get_test_model();
  generated_tests::reduce_any_b155508675::get_test_model();
  generated_tests::reduce_any::get_test_model();
  generated_tests::reduce_max_b155508675::get_test_model();
  generated_tests::reduce_max::get_test_model();
  generated_tests::reduce_min_b155508675::get_test_model();
  generated_tests::reduce_min::get_test_model();
  generated_tests::reduce_prod_b155508675::get_test_model();
  generated_tests::reduce_prod::get_test_model();
  generated_tests::reduce_sum_b155508675::get_test_model();
  generated_tests::reduce_sum::get_test_model();
  generated_tests::relu1_v1_2::get_test_model();
  generated_tests::relu6_v1_2::get_test_model();
  generated_tests::relu_v1_2::get_test_model();
  generated_tests::reshape_float16::get_test_model();
  generated_tests::rnn_float16::get_test_model();
  generated_tests::rsqrt::get_test_model();
  generated_tests::sin::get_test_model();
  generated_tests::slice::get_test_model();
  generated_tests::softmax_v1_2::get_test_model();
  generated_tests::space_to_batch_quant8_nonzero::get_test_model();
  generated_tests::split_float_1::get_test_model();
  generated_tests::split_float_2::get_test_model();
  generated_tests::split_float_3::get_test_model();
  generated_tests::split_float_4::get_test_model();
  generated_tests::split_float_5::get_test_model();
  generated_tests::split_int32_1::get_test_model();
  generated_tests::split_int32_2::get_test_model();
  generated_tests::split_int32_3::get_test_model();
  generated_tests::split_int32_4::get_test_model();
  generated_tests::split_quant8_1::get_test_model();
  generated_tests::split_quant8_2::get_test_model();
  generated_tests::split_quant8_3::get_test_model();
  generated_tests::split_quant8_4::get_test_model();
  generated_tests::sqrt::get_test_model();
  generated_tests::squeeze_float16::get_test_model();
  generated_tests::strided_slice_float16::get_test_model();
  generated_tests::sub_quantized_different_scales::get_test_model();
  generated_tests::svdf_bias_present_float16::get_test_model();
  generated_tests::svdf_float16::get_test_model();
  generated_tests::svdf_state_float16::get_test_model();
  generated_tests::tanh_v1_2::get_test_model();
  generated_tests::tile_1::get_test_model();
  generated_tests::tile_2::get_test_model();
  generated_tests::tile_3::get_test_model();
  generated_tests::topk_v2::get_test_model();
  generated_tests::transpose_float16::get_test_model();
  generated_tests::transpose_v1_2::get_test_model();
  generated_tests::unidirectional_sequence_lstm_1step::get_test_model();
  generated_tests::unidirectional_sequence_lstm_batch_major_norm_peephole_projection::get_test_model();
  generated_tests::unidirectional_sequence_lstm_batch_major_peephole_projection_bias::get_test_model();
  generated_tests::unidirectional_sequence_lstm_cifg_peephole::get_test_model();
  generated_tests::unidirectional_sequence_lstm_f16_batch_major::get_test_model();
  generated_tests::unidirectional_sequence_lstm_f16_norm_peephole_projection::get_test_model();
  generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole::get_test_model();
  generated_tests::unidirectional_sequence_lstm_norm_peephole_projection::get_test_model();

  EXPECT_TRUE(true);
}

TEST(GeneratedTestsLoader, V1_3_Loader) {
  generated_tests::abs_int32::get_test_model();
  generated_tests::add_int32::get_test_model();
  generated_tests::add_quant8_signed::get_test_model();
  generated_tests::avg_pool_quant8_signed::get_test_model();
  generated_tests::batch_to_space_quant8_signed::get_test_model();
  generated_tests::concat_quant8_signed::get_test_model();
  generated_tests::conv2d_quant8_signed::get_test_model();
  generated_tests::depth_to_space_quant8_signed::get_test_model();
  generated_tests::depthwise_conv2d_quant8_signed::get_test_model();
  generated_tests::dequantize_quant8_signed::get_test_model();
  generated_tests::div_int32::get_test_model();
  generated_tests::fully_connected_quant8_signed::get_test_model();
  generated_tests::if_no_value::get_test_model();
  generated_tests::l2_normalization_zeros::get_test_model();
  generated_tests::logistic_quant8_signed::get_test_model();
  generated_tests::max_pool_quant8_signed::get_test_model();
  generated_tests::mean_quant8_signed::get_test_model();
  generated_tests::mul_int32::get_test_model();
  generated_tests::mul_quant8_signed::get_test_model();
  generated_tests::pad_quant8_signed::get_test_model();
  generated_tests::pow_same_shape::get_test_model();
  generated_tests::qlstm_noprojection::get_test_model();
  generated_tests::qlstm_projection::get_test_model();
  generated_tests::relu1_quant8_signed::get_test_model();
  generated_tests::relu6_quant8_signed::get_test_model();
  generated_tests::relu_quant8_signed::get_test_model();
  generated_tests::reshape_quant8_signed::get_test_model();
  generated_tests::slice_quant8_signed::get_test_model();
  generated_tests::softmax_quant8_signed::get_test_model();
  generated_tests::space_to_batch_quant8_signed::get_test_model();
  generated_tests::space_to_depth_quant8_signed::get_test_model();
  generated_tests::split_quant8_signed::get_test_model();
  generated_tests::squeeze_quant8_signed::get_test_model();
  generated_tests::strided_slice_quant8_signed::get_test_model();
  generated_tests::sub_int32::get_test_model();
  generated_tests::sub_quant8_signed::get_test_model();
  generated_tests::tanh_quant8_signed::get_test_model();
  generated_tests::topk_v2_quant8_signed::get_test_model();
  generated_tests::transpose_quant8_signed::get_test_model();
  generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole_state_output::get_test_model();
  generated_tests::while_infinite_loop::get_test_model();
  generated_tests::cast_mismatching_shapes::get_test_model();
  generated_tests::concat_invalid_rank::get_test_model();
  generated_tests::conv2d_v1_3_invalid_rank::get_test_model();

  EXPECT_TRUE(true);
}
