// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <android-base/logging.h>
#include "logger.h"

// Called when the shared library is first loaded.
__attribute__((constructor))
static void library_init() {
  // Initilialized the Android logging systen, which will read log settings from
  // the environment variable ANDROID_LOG_TAGS.
  android::base::InitLogging(nullptr);
  // Forward the logs into our ChromeLogger
  android::base::SetLogger(ChromeLogger);
}