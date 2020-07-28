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

  EXPECT_TRUE(true);
}
