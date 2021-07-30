// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ML_NN_CHROMEOS_LOGGER_H_
#define ML_NN_CHROMEOS_LOGGER_H_

// Maps the android log levels from android-base/logging.h into the equivalent from
// the Chrome logging library. This is useful, since when running from within a
// Chrome process, unless we use base/logging.h from libchrome then all our logs
// will not be visible anywhere.
void ChromeLogger(int log_buffer_id, int severity, const char* tag,
                  const char* file, unsigned int line, const char* message);


#endif  // ML_NN_CHROMEOS_LOGGER_H_
