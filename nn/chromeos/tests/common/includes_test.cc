// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <android-base/logging.h>
#include <gtest/gtest.h>

#include "GraphDump.h"
#include "TokenHasher.h"

// This is not really a unit test, but a compile test. It ensures that we have
// the headers we need from tensorflow, ssl and AOSP base libraries have been
// installed into the right places.
// TODO(slangley): Remove this test once we have some more pieces linked in and
// real tests running.
TEST(IncludesTest, NotReallyATest) {
}

// Tests that android-base has been linked correctly and the methods are
// available.
TEST(IncludesTest, LogLinkTest) {
  LOG(INFO) << "Logged Something, so linking must be working";
}