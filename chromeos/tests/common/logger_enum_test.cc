// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <android-base/logging.h>
#include <gtest/gtest.h>

TEST(LoggerEnum, AllEnumsCovered) {
  android::base::LogSeverity severity = android::base::VERBOSE;

  // **NOTE** **IMPORTANT**: If you get a compile error here you REALLY
  // REALLY need to go and update logger.cpp and add the new case to
  // AndroidLogSeverity, otherwise we're going to potentially miss logs.
  switch (severity) {
    case (android::base::LogSeverity::VERBOSE):
    case (android::base::LogSeverity::DEBUG):
    case (android::base::LogSeverity::INFO):
    case (android::base::LogSeverity::WARNING):
    case (android::base::LogSeverity::ERROR):
    case (android::base::LogSeverity::FATAL_WITHOUT_ABORT):
    case (android::base::LogSeverity::FATAL):
      break;
  }
}
