// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <base/logging.h>
#include <brillo/message_loops/base_message_loop.h>

void SetupMessageLoop() {
  auto message_loop = new brillo::BaseMessageLoop();
  message_loop->SetAsCurrent();
}

void DestroyMessageLoop() {
  delete brillo::MessageLoop::current();
}
