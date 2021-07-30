// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <gtest/gtest.h>
#include "TestHarness.h"

// This file has been generated with the generated_tests_loader.py script.
// DO NOT EDIT!

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
namespace generated_tests::avg_pool_v1_2 { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::axis_aligned_bbox_transform { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::batch_to_space_v1_2 { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::bbox_graph { const test_helper::TestModel& get_test_model_zero_sized(); }
namespace generated_tests::bidirectional_sequence_lstm { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::bidirectional_sequence_lstm_aux_input { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::bidirectional_sequence_lstm_cifg_peephole { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_aux_input { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::bidirectional_sequence_lstm_merge_outputs { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::bidirectional_sequence_lstm_norm_fw_output { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::bidirectional_sequence_rnn { const test_helper::TestModel& get_test_model_blackbox(); }
namespace generated_tests::box_with_nms_limit_gaussian { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::box_with_nms_limit_hard { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::box_with_nms_limit_linear { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::cast { const test_helper::TestModel& get_test_model_float16_to_float16(); }
namespace generated_tests::channel_shuffle { const test_helper::TestModel& get_test_model_dim4_axis0(); }
namespace generated_tests::concat_float16_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float16_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_float16_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_mixed_quant { const test_helper::TestModel& get_test_model_quant8(); }
namespace generated_tests::concat_zero_sized { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv2d_dilation { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::conv2d_per_channel { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv2d_v1_2 { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::depth_to_space_v1_2 { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::depthwise_conv2d_dilation { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::depthwise_conv2d_invalid_filter_dims { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::depthwise_conv2d_per_channel { const test_helper::TestModel& get_test_model_same(); }
namespace generated_tests::depthwise_conv2d_v1_2 { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::dequantize_v1_2 { const test_helper::TestModel& get_test_model_1d_quant8_asymm(); }
namespace generated_tests::detection_postprocess { const test_helper::TestModel& get_test_model_regular(); }
namespace generated_tests::div_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::embedding_lookup_v1_2 { const test_helper::TestModel& get_test_model_quant8(); }
namespace generated_tests::equal { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::exp { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::expand_dims { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::floor_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::fully_connected_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::gather { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::gather_higher_rank { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::generate_proposals { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::greater { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::greater_equal { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::grouped_conv2d { const test_helper::TestModel& get_test_model_nhwc_none(); }
namespace generated_tests::heatmap_max_keypoint { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::instance_normalization { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::l2_normalization_axis { const test_helper::TestModel& get_test_model_dim4_axis0(); }
namespace generated_tests::l2_normalization_v1_2 { const test_helper::TestModel& get_test_model_dim4_axis3(); }
namespace generated_tests::l2_pool_v1_2 { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::layer_norm_lstm { const test_helper::TestModel& get_test_model_NoCifgPeepholeProjectionNoClippingLayerNormLstm(); }
namespace generated_tests::less { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::less_equal { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::local_response_normalization_v1_2 { const test_helper::TestModel& get_test_model_axis_dim4_axis0(); }
namespace generated_tests::log { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::log_softmax { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logical_and { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::logical_not { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::logical_or { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::logistic_v1_2 { const test_helper::TestModel& get_test_model(); }
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
namespace generated_tests::max_pool_v1_2 { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::maximum { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::mean_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::minimum { const test_helper::TestModel& get_test_model_simple(); }
namespace generated_tests::mul_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::neg { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::not_equal { const test_helper::TestModel& get_test_model_simple(); }
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
namespace generated_tests::quantize { const test_helper::TestModel& get_test_model_quant8(); }
namespace generated_tests::quantized_lstm { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::random_multinomial { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::random_multinomial_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_all { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_all_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_any { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_any_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_max { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_max_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_min { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_min_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_prod { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_prod_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_sum { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reduce_sum_b155508675 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu1_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu6_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::relu_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::reshape_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::resize_bilinear_v1_2 { const test_helper::TestModel& get_test_model_shape_nhwc(); }
namespace generated_tests::resize_nearest_neighbor { const test_helper::TestModel& get_test_model_shape_nhwc(); }
namespace generated_tests::rnn_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::roi_align { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::roi_pooling { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::rsqrt { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::select_v1_2 { const test_helper::TestModel& get_test_model_one_dim(); }
namespace generated_tests::sin { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::slice { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::softmax_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_quant8_nonzero { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::space_to_batch_v1_2 { const test_helper::TestModel& get_test_model_nhwc(); }
namespace generated_tests::space_to_depth_v1_2 { const test_helper::TestModel& get_test_model_nhwc(); }
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
namespace generated_tests::strided_slice_invalid { const test_helper::TestModel& get_test_model_output_dims(); }
namespace generated_tests::sub_quantized_different_scales { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::sub_v1_2 { const test_helper::TestModel& get_test_model_none(); }
namespace generated_tests::sub_v1_2_broadcast { const test_helper::TestModel& get_test_model_none(); }
namespace generated_tests::svdf_bias_present_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::svdf_state_float16 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tanh_v1_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tile_1 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tile_2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::tile_3 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::topk_v2 { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::transpose_conv2d { const test_helper::TestModel& get_test_model_nhwc_none(); }
namespace generated_tests::transpose_conv2d_large { const test_helper::TestModel& get_test_model_quant8(); }
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
namespace generated_tests::unidirectional_sequence_rnn { const test_helper::TestModel& get_test_model_blackbox(); }

TEST(GeneratedTestsLoader, spec_V1_2) {
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
  generated_tests::avg_pool_v1_2::get_test_model_nhwc();
  generated_tests::axis_aligned_bbox_transform::get_test_model();
  generated_tests::batch_to_space_v1_2::get_test_model_nhwc();
  generated_tests::bbox_graph::get_test_model_zero_sized();
  generated_tests::bidirectional_sequence_lstm::get_test_model_blackbox();
  generated_tests::bidirectional_sequence_lstm_aux_input::get_test_model_blackbox();
  generated_tests::bidirectional_sequence_lstm_cifg_peephole::get_test_model_blackbox();
  generated_tests::bidirectional_sequence_lstm_float16_batch_major::get_test_model_blackbox();
  generated_tests::bidirectional_sequence_lstm_float16_batch_major_aux_input::get_test_model_blackbox();
  generated_tests::bidirectional_sequence_lstm_float16_batch_major_merge_outputs::get_test_model_blackbox();
  generated_tests::bidirectional_sequence_lstm_merge_outputs::get_test_model_blackbox();
  generated_tests::bidirectional_sequence_lstm_norm_fw_output::get_test_model_blackbox();
  generated_tests::bidirectional_sequence_rnn::get_test_model_blackbox();
  generated_tests::box_with_nms_limit_gaussian::get_test_model();
  generated_tests::box_with_nms_limit_hard::get_test_model();
  generated_tests::box_with_nms_limit_linear::get_test_model();
  generated_tests::cast::get_test_model_float16_to_float16();
  generated_tests::channel_shuffle::get_test_model_dim4_axis0();
  generated_tests::concat_float16_1::get_test_model();
  generated_tests::concat_float16_2::get_test_model();
  generated_tests::concat_float16_3::get_test_model();
  generated_tests::concat_mixed_quant::get_test_model_quant8();
  generated_tests::concat_zero_sized::get_test_model();
  generated_tests::conv2d_dilation::get_test_model_nhwc();
  generated_tests::conv2d_per_channel::get_test_model();
  generated_tests::conv2d_v1_2::get_test_model_nhwc();
  generated_tests::depth_to_space_v1_2::get_test_model_nhwc();
  generated_tests::depthwise_conv2d_dilation::get_test_model_nhwc();
  generated_tests::depthwise_conv2d_invalid_filter_dims::get_test_model_nhwc();
  generated_tests::depthwise_conv2d_per_channel::get_test_model_same();
  generated_tests::depthwise_conv2d_v1_2::get_test_model_nhwc();
  generated_tests::dequantize_v1_2::get_test_model_1d_quant8_asymm();
  generated_tests::detection_postprocess::get_test_model_regular();
  generated_tests::div_v1_2::get_test_model();
  generated_tests::embedding_lookup_v1_2::get_test_model_quant8();
  generated_tests::equal::get_test_model_simple();
  generated_tests::exp::get_test_model();
  generated_tests::expand_dims::get_test_model();
  generated_tests::floor_float16::get_test_model();
  generated_tests::fully_connected_v1_2::get_test_model();
  generated_tests::gather::get_test_model();
  generated_tests::gather_higher_rank::get_test_model();
  generated_tests::generate_proposals::get_test_model_nhwc();
  generated_tests::greater::get_test_model_simple();
  generated_tests::greater_equal::get_test_model_simple();
  generated_tests::grouped_conv2d::get_test_model_nhwc_none();
  generated_tests::heatmap_max_keypoint::get_test_model_nhwc();
  generated_tests::instance_normalization::get_test_model_nhwc();
  generated_tests::l2_normalization_axis::get_test_model_dim4_axis0();
  generated_tests::l2_normalization_v1_2::get_test_model_dim4_axis3();
  generated_tests::l2_pool_v1_2::get_test_model_nhwc();
  generated_tests::layer_norm_lstm::get_test_model_NoCifgPeepholeProjectionNoClippingLayerNormLstm();
  generated_tests::less::get_test_model_simple();
  generated_tests::less_equal::get_test_model_simple();
  generated_tests::local_response_normalization_v1_2::get_test_model_axis_dim4_axis0();
  generated_tests::log::get_test_model();
  generated_tests::log_softmax::get_test_model();
  generated_tests::logical_and::get_test_model_simple();
  generated_tests::logical_not::get_test_model();
  generated_tests::logical_or::get_test_model_simple();
  generated_tests::logistic_v1_2::get_test_model();
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
  generated_tests::max_pool_v1_2::get_test_model_nhwc();
  generated_tests::maximum::get_test_model_simple();
  generated_tests::mean_float16::get_test_model();
  generated_tests::minimum::get_test_model_simple();
  generated_tests::mul_v1_2::get_test_model();
  generated_tests::neg::get_test_model();
  generated_tests::not_equal::get_test_model_simple();
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
  generated_tests::quantize::get_test_model_quant8();
  generated_tests::quantized_lstm::get_test_model();
  generated_tests::random_multinomial::get_test_model();
  generated_tests::random_multinomial_float16::get_test_model();
  generated_tests::reduce_all::get_test_model();
  generated_tests::reduce_all_b155508675::get_test_model();
  generated_tests::reduce_any::get_test_model();
  generated_tests::reduce_any_b155508675::get_test_model();
  generated_tests::reduce_max::get_test_model();
  generated_tests::reduce_max_b155508675::get_test_model();
  generated_tests::reduce_min::get_test_model();
  generated_tests::reduce_min_b155508675::get_test_model();
  generated_tests::reduce_prod::get_test_model();
  generated_tests::reduce_prod_b155508675::get_test_model();
  generated_tests::reduce_sum::get_test_model();
  generated_tests::reduce_sum_b155508675::get_test_model();
  generated_tests::relu1_v1_2::get_test_model();
  generated_tests::relu6_v1_2::get_test_model();
  generated_tests::relu_v1_2::get_test_model();
  generated_tests::reshape_float16::get_test_model();
  generated_tests::resize_bilinear_v1_2::get_test_model_shape_nhwc();
  generated_tests::resize_nearest_neighbor::get_test_model_shape_nhwc();
  generated_tests::rnn_float16::get_test_model();
  generated_tests::roi_align::get_test_model_nhwc();
  generated_tests::roi_pooling::get_test_model_nhwc();
  generated_tests::rsqrt::get_test_model();
  generated_tests::select_v1_2::get_test_model_one_dim();
  generated_tests::sin::get_test_model();
  generated_tests::slice::get_test_model();
  generated_tests::softmax_v1_2::get_test_model();
  generated_tests::space_to_batch_quant8_nonzero::get_test_model();
  generated_tests::space_to_batch_v1_2::get_test_model_nhwc();
  generated_tests::space_to_depth_v1_2::get_test_model_nhwc();
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
  generated_tests::strided_slice_invalid::get_test_model_output_dims();
  generated_tests::sub_quantized_different_scales::get_test_model();
  generated_tests::sub_v1_2::get_test_model_none();
  generated_tests::sub_v1_2_broadcast::get_test_model_none();
  generated_tests::svdf_bias_present_float16::get_test_model();
  generated_tests::svdf_float16::get_test_model();
  generated_tests::svdf_state_float16::get_test_model();
  generated_tests::tanh_v1_2::get_test_model();
  generated_tests::tile_1::get_test_model();
  generated_tests::tile_2::get_test_model();
  generated_tests::tile_3::get_test_model();
  generated_tests::topk_v2::get_test_model();
  generated_tests::transpose_conv2d::get_test_model_nhwc_none();
  generated_tests::transpose_conv2d_large::get_test_model_quant8();
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
  generated_tests::unidirectional_sequence_rnn::get_test_model_blackbox();

  EXPECT_TRUE(true);
}
