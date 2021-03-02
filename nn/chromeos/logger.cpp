// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <base/logging.h>
#include <base/strings/strcat.h>
#include <base/strings/string_number_conversions.h>

// Copied from aosp/system/core/base/include/android-base/logging.h
enum AndroidLogSeverity {
  VERBOSE,
  DEBUG,
  INFO,
  WARNING,
  ERROR,
  FATAL_WITHOUT_ABORT,
  FATAL,
};

void ChromeLogger(int /*log_buffer_id*/, int severity, const char* tag,
                  const char* file, unsigned int line, const char* message) {
  std::string logline = base::StrCat(
      {tag, ":", file, ":", base::NumberToString(line), ": ", message});
  switch (static_cast<AndroidLogSeverity>(severity)) {
    case (AndroidLogSeverity::VERBOSE):
    case (AndroidLogSeverity::DEBUG):
    case (AndroidLogSeverity::INFO):
      LOG(INFO) << logline;
      break;
    case (AndroidLogSeverity::WARNING):
      LOG(WARNING) << logline;
      break;
    case (AndroidLogSeverity::ERROR):
    case (AndroidLogSeverity::FATAL_WITHOUT_ABORT):
      LOG(ERROR) << logline;
      break;
    case (AndroidLogSeverity::FATAL):
      LOG(FATAL) << logline;
      break;
  }
}
