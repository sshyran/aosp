// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <gtest/gtest.h>
#include "TestHarness.h"

// This file has been generated with the generated_tests_loader.py script.
// DO NOT EDIT!

namespace generated_tests::cast_mismatching_shapes { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_invalid_rank { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv2d_v1_3_invalid_rank { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::if_simple_unknown_dimension { const test_helper::TestModel& get_test_model_true(); }
namespace generated_tests::if_simple_unknown_rank { const test_helper::TestModel& get_test_model_true(); }
namespace generated_tests::while_fib_unknown_dimension { const test_helper::TestModel& get_test_model_n_2_unused_output(); }
namespace generated_tests::while_fib_unknown_rank { const test_helper::TestModel& get_test_model_n_2_unused_output(); }

TEST(GeneratedTestsLoader, spec_V1_3_cts_only) {
  generated_tests::cast_mismatching_shapes::get_test_model();
  generated_tests::concat_invalid_rank::get_test_model();
  generated_tests::conv2d_v1_3_invalid_rank::get_test_model();
  generated_tests::if_simple_unknown_dimension::get_test_model_true();
  generated_tests::if_simple_unknown_rank::get_test_model_true();
  generated_tests::while_fib_unknown_dimension::get_test_model_n_2_unused_output();
  generated_tests::while_fib_unknown_rank::get_test_model_n_2_unused_output();

  EXPECT_TRUE(true);
}
