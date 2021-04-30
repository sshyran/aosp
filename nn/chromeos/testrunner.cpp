// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <memory>
#include <stdlib.h>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "android-base/logging.h"

int main(int argc, char** argv) {
  // Our testrunners are invoked with platform_test, which doesn't
  // pass through env variables like 'ANDROID_LOGS_TAGS'. This is
  // our workaround to handle the extreme error log verbosity of
  // the test suites.
#ifndef WITH_TEST_ERROR_LOGS
  setenv("ANDROID_LOG_TAGS", "*:f", 0);
#endif

  testing::InitGoogleTest(&argc, argv);
  android::base::InitLogging(argv, android::base::StderrLogger);
  testing::GTEST_FLAG(throw_on_failure) = true;
  testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
