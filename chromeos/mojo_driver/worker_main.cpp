// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "../logger.h"
#include "android-base/logging.h"

namespace chromeos {
void nnapi_worker_process(int);
}  // namespace chromeos

int main(int argc, char** argv) {
#ifndef WITH_TEST_ERROR_LOGS
  setenv("ANDROID_LOG_TAGS", "*:f", 0);
#endif

  android::base::InitLogging(argv, android::base::StderrLogger);
  android::base::SetLogger(ChromeLogger);

  CHECK_GE(argc, 1);
  chromeos::nnapi_worker_process(atoi(argv[1]));

  return 0;
}
