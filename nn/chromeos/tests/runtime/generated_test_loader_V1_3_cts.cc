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

// V1_3 for CTS

namespace generated_tests::cast_mismatching_shapes { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::concat_invalid_rank { const test_helper::TestModel& get_test_model(); }
namespace generated_tests::conv2d_v1_3_invalid_rank { const test_helper::TestModel& get_test_model(); }

TEST(GeneratedTestsLoader, V1_3_CTS_Loader) {
  generated_tests::cast_mismatching_shapes::get_test_model();
  generated_tests::concat_invalid_rank::get_test_model();
  generated_tests::conv2d_v1_3_invalid_rank::get_test_model();

  EXPECT_TRUE(true);
}
