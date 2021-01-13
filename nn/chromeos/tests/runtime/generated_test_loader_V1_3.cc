// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <gtest/gtest.h>
#include "TestHarness.h"

// This file has been generated with the generated_tests_loader.py script.
// DO NOT EDIT!

namespace generated_tests::abs_int32 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::add_int32 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::add_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::argmax_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::argmin_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::avg_pool_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::axis_aligned_bbox_transform_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::batch_to_space_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::bbox_graph_quant8_signed { const test_helper::TestModel& get_test_model_zero_sized_quant8_signed(); }
namespace generated_tests::bidirectional_sequence_lstm { const test_helper::TestModel& get_test_model_parallel_linking(); }
namespace generated_tests::bidirectional_sequence_lstm_state_output { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::bidirectional_sequence_rnn_1_3 { const test_helper::TestModel& get_test_model_parallel_linking(); }
namespace generated_tests::bidirectional_sequence_rnn_state_output { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::box_with_nms_limit_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::cast_identity { const test_helper::TestModel& get_test_model_float16(); }
namespace generated_tests::channel_shuffle_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed_dim4_axis0(); }
namespace generated_tests::concat_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::conv2d_quant8_signed { const test_helper::TestModel& get_test_model_nhwc_quant8_signed(); }
namespace generated_tests::depth_to_space_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::depthwise_conv2d_quant8_signed { const test_helper::TestModel& get_test_model_nhwc_quant8_signed(); }
namespace generated_tests::dequantize_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::div_int32 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::elu { const test_helper::TestModel& get_test_model_alpha_one(); }
namespace generated_tests::embedding_lookup_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::embedding_lookup_v1_3 { const test_helper::TestModel& get_test_model_float16(); }
namespace generated_tests::equal_quant8_signed { const test_helper::TestModel& get_test_model_quantized_different_scale(); }
namespace generated_tests::expand_dims_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::fill { const test_helper::TestModel& get_test_model_1d(); }
namespace generated_tests::fully_connected_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::gather_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::generate_proposals_quant8_signed { const test_helper::TestModel& get_test_model_nhwc_quant8_signed(); }
namespace generated_tests::greater_equal_quant8_signed { const test_helper::TestModel& get_test_model_quantized_different_scale(); }
namespace generated_tests::greater_quant8_signed { const test_helper::TestModel& get_test_model_quantized_different_scale(); }
namespace generated_tests::grouped_conv2d_quant8_signed { const test_helper::TestModel& get_test_model_nhwc_none_quant8_signed(); }
namespace generated_tests::hard_swish { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::heatmap_max_keypoint_quant8_signed { const test_helper::TestModel& get_test_model_nhwc_quant8_signed(); }
namespace generated_tests::if_no_value { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::if_same_branch_model { const test_helper::TestModel& get_test_model_true(); }
namespace generated_tests::if_simple { const test_helper::TestModel& get_test_model_true(); }
namespace generated_tests::l2_normalization_quant8_signed { const test_helper::TestModel& get_test_model_dim4_axis0_quant8_signed(); }
namespace generated_tests::l2_normalization_zeros { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::less_equal_quant8_signed { const test_helper::TestModel& get_test_model_quantized_different_scale(); }
namespace generated_tests::less_quant8_signed { const test_helper::TestModel& get_test_model_quantized_different_scale(); }
namespace generated_tests::logistic_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::max_pool_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::maximum_quant8_signed { const test_helper::TestModel& get_test_model_simple_quant8_signed(); }
namespace generated_tests::mean_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::minimum_quant8_signed { const test_helper::TestModel& get_test_model_simple_quant8_signed(); }
namespace generated_tests::mul_int32 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::mul_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::not_equal_quant8_signed { const test_helper::TestModel& get_test_model_quantized_different_scale(); }
namespace generated_tests::pad_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::pow_same_shape { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::prelu_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::qlstm_noprojection { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::qlstm_projection { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::quantize_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::rank { const test_helper::TestModel& get_test_model_1d(); }
namespace generated_tests::reduce_max_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::reduce_min_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::relu1_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::resize_bilinear_v1_3 { const test_helper::TestModel& get_test_model_half_pixel_centers_2x2x2x1_to_2x3x3x1(); }
namespace generated_tests::resize_nearest_neighbor_v1_3 { const test_helper::TestModel& get_test_model_half_pixel_centers_5x2_to_2x2(); }
namespace generated_tests::resize_quant8_signed { const test_helper::TestModel& get_test_model_shape_nhwc_quant8_signed(); }
namespace generated_tests::roi_align_quant8_signed { const test_helper::TestModel& get_test_model_nhwc_quant8_signed(); }
namespace generated_tests::roi_pooling_quant8_signed { const test_helper::TestModel& get_test_model_nhwc_quant8_signed(); }
namespace generated_tests::select_quant8_signed { const test_helper::TestModel& get_test_model_one_dim_quant8_signed(); }
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
namespace generated_tests::tile_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::topk_v2_quant8_signed { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose_conv2d_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::transpose_quant8_signed { const test_helper::TestModel& get_test_model_quant8_signed(); }
namespace generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole_state_output { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::unidirectional_sequence_rnn { const test_helper::TestModel& get_test_model_blackbox_state_output(); }
namespace generated_tests::while_infinite_loop { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::while_sum_of_powers_quant8 { const test_helper::TestModel& get_test_model_n_0(); }
namespace generated_tests::while_sum_of_powers_quant8_signed { const test_helper::TestModel& get_test_model_n_0(); }

TEST(GeneratedTestsLoader, spec_V1_3) {
  generated_tests::abs_int32::get_test_model();
  generated_tests::add_int32::get_test_model();
  generated_tests::add_quant8_signed::get_test_model();
  generated_tests::argmax_quant8_signed::get_test_model_quant8_signed();
  generated_tests::argmin_quant8_signed::get_test_model_quant8_signed();
  generated_tests::avg_pool_quant8_signed::get_test_model();
  generated_tests::axis_aligned_bbox_transform_quant8_signed::get_test_model_quant8_signed();
  generated_tests::batch_to_space_quant8_signed::get_test_model();
  generated_tests::bbox_graph_quant8_signed::get_test_model_zero_sized_quant8_signed();
  generated_tests::bidirectional_sequence_lstm::get_test_model_parallel_linking();
  generated_tests::bidirectional_sequence_lstm_state_output::get_test_model_blackbox();
  generated_tests::bidirectional_sequence_rnn_1_3::get_test_model_parallel_linking();
  generated_tests::bidirectional_sequence_rnn_state_output::get_test_model_blackbox();
  generated_tests::box_with_nms_limit_quant8_signed::get_test_model_quant8_signed();
  generated_tests::cast_identity::get_test_model_float16();
  generated_tests::channel_shuffle_quant8_signed::get_test_model_quant8_signed_dim4_axis0();
  generated_tests::concat_quant8_signed::get_test_model_quant8_signed();
  generated_tests::conv2d_quant8_signed::get_test_model_nhwc_quant8_signed();
  generated_tests::depth_to_space_quant8_signed::get_test_model();
  generated_tests::depthwise_conv2d_quant8_signed::get_test_model_nhwc_quant8_signed();
  generated_tests::dequantize_quant8_signed::get_test_model();
  generated_tests::div_int32::get_test_model();
  generated_tests::elu::get_test_model_alpha_one();
  generated_tests::embedding_lookup_quant8_signed::get_test_model_quant8_signed();
  generated_tests::embedding_lookup_v1_3::get_test_model_float16();
  generated_tests::equal_quant8_signed::get_test_model_quantized_different_scale();
  generated_tests::expand_dims_quant8_signed::get_test_model_quant8_signed();
  generated_tests::fill::get_test_model_1d();
  generated_tests::fully_connected_quant8_signed::get_test_model();
  generated_tests::gather_quant8_signed::get_test_model_quant8_signed();
  generated_tests::generate_proposals_quant8_signed::get_test_model_nhwc_quant8_signed();
  generated_tests::greater_equal_quant8_signed::get_test_model_quantized_different_scale();
  generated_tests::greater_quant8_signed::get_test_model_quantized_different_scale();
  generated_tests::grouped_conv2d_quant8_signed::get_test_model_nhwc_none_quant8_signed();
  generated_tests::hard_swish::get_test_model_simple();
  generated_tests::heatmap_max_keypoint_quant8_signed::get_test_model_nhwc_quant8_signed();
  generated_tests::if_no_value::get_test_model();
  generated_tests::if_same_branch_model::get_test_model_true();
  generated_tests::if_simple::get_test_model_true();
  generated_tests::l2_normalization_quant8_signed::get_test_model_dim4_axis0_quant8_signed();
  generated_tests::l2_normalization_zeros::get_test_model();
  generated_tests::less_equal_quant8_signed::get_test_model_quantized_different_scale();
  generated_tests::less_quant8_signed::get_test_model_quantized_different_scale();
  generated_tests::logistic_quant8_signed::get_test_model();
  generated_tests::max_pool_quant8_signed::get_test_model();
  generated_tests::maximum_quant8_signed::get_test_model_simple_quant8_signed();
  generated_tests::mean_quant8_signed::get_test_model();
  generated_tests::minimum_quant8_signed::get_test_model_simple_quant8_signed();
  generated_tests::mul_int32::get_test_model();
  generated_tests::mul_quant8_signed::get_test_model();
  generated_tests::not_equal_quant8_signed::get_test_model_quantized_different_scale();
  generated_tests::pad_quant8_signed::get_test_model_quant8_signed();
  generated_tests::pow_same_shape::get_test_model();
  generated_tests::prelu_quant8_signed::get_test_model_quant8_signed();
  generated_tests::qlstm_noprojection::get_test_model();
  generated_tests::qlstm_projection::get_test_model();
  generated_tests::quantize_quant8_signed::get_test_model_quant8_signed();
  generated_tests::rank::get_test_model_1d();
  generated_tests::reduce_max_quant8_signed::get_test_model_quant8_signed();
  generated_tests::reduce_min_quant8_signed::get_test_model_quant8_signed();
  generated_tests::relu1_quant8_signed::get_test_model();
  generated_tests::relu6_quant8_signed::get_test_model();
  generated_tests::relu_quant8_signed::get_test_model();
  generated_tests::reshape_quant8_signed::get_test_model();
  generated_tests::resize_bilinear_v1_3::get_test_model_half_pixel_centers_2x2x2x1_to_2x3x3x1();
  generated_tests::resize_nearest_neighbor_v1_3::get_test_model_half_pixel_centers_5x2_to_2x2();
  generated_tests::resize_quant8_signed::get_test_model_shape_nhwc_quant8_signed();
  generated_tests::roi_align_quant8_signed::get_test_model_nhwc_quant8_signed();
  generated_tests::roi_pooling_quant8_signed::get_test_model_nhwc_quant8_signed();
  generated_tests::select_quant8_signed::get_test_model_one_dim_quant8_signed();
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
  generated_tests::tile_quant8_signed::get_test_model_quant8_signed();
  generated_tests::topk_v2_quant8_signed::get_test_model();
  generated_tests::transpose_conv2d_quant8_signed::get_test_model_quant8_signed();
  generated_tests::transpose_quant8_signed::get_test_model_quant8_signed();
  generated_tests::unidirectional_sequence_lstm_layer_norm_cifg_peephole_state_output::get_test_model();
  generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox_state_output();
  generated_tests::while_infinite_loop::get_test_model();
  generated_tests::while_sum_of_powers_quant8::get_test_model_n_0();
  generated_tests::while_sum_of_powers_quant8_signed::get_test_model_n_0();

  EXPECT_TRUE(true);
}
