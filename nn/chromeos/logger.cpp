// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <base/logging.h>

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

/**
Maps the android log levels from android-base/logging.h into the equivalent from
the Chrome logging library. This is useful, since when running from within a
Chrome process, unless we use base/logging.h from libchrome then all our logs
will not be visible anywhere.
*/
void ChromeLogger(int /*log_buffer_id*/, int severity, const char* tag,
                  const char* file, unsigned int line, const char* message) {
  std::string logline = std::string(tag) + ":" + std::string(file) + ":" +
                        std::to_string(line) + ": " + std::string(message);
  switch (severity) {
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
    default:
      LOG(INFO) << logline;
      break;
  }
}
