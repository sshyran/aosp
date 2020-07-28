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
