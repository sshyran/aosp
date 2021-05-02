// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
#include "daemon_store.h"

#include <android-base/logging.h>
#include <gtest/gtest.h>

namespace {
class DaemonStoreTest : public ::testing::Test {
 protected:
  std::string original_base_path_;

  virtual void SetUp() {
    original_base_path_ = DaemonStore::Get().GetDaemonStoreBaseForTesting();
  }
  virtual void TearDown() {
    DaemonStore::Get().SetUserHasherForTesting(
        std::make_unique<MockUserHashForTesting>());
    DaemonStore::Get().SetDaemonStoreBaseForTesting(original_base_path_);
  }
};

class EmptyUserHash : public UserHashInterface {
 public:
  virtual std::string GetCurrentUserHash() const override { return ""; }
};
}  // namespace

TEST_F(DaemonStoreTest, TestEmptyUserHash) {
  auto& ds = DaemonStore::Get();
  ds.SetUserHasherForTesting(std::make_unique<EmptyUserHash>());

  EXPECT_EQ("", ds.GetDaemonStoreDir(""));
  EXPECT_EQ("", ds.GetDaemonStoreDir("/some_test"));
}

TEST_F(DaemonStoreTest, TestNonExistentDir) {
  auto& ds = DaemonStore::Get();
  ds.SetDaemonStoreBaseForTesting("/does/not/exist");

  EXPECT_EQ("", ds.GetDaemonStoreDir(""));
  EXPECT_EQ("", ds.GetDaemonStoreDir("/some_test"));
}

TEST_F(DaemonStoreTest, TestGetUserHash) {
  auto& ds = DaemonStore::Get();
  std::string cache_dir(
      "/tmp/run/daemon-store/ml_service/mock-user-hash/nnapi_compilations");

  EXPECT_EQ(cache_dir + "/some_test", ds.GetDaemonStoreDir("some_test"));
  EXPECT_EQ(cache_dir + "/some_test", ds.GetDaemonStoreDir("/some_test"));
  EXPECT_EQ(cache_dir + "/some_test", ds.GetDaemonStoreDir("some_test/"));
  EXPECT_EQ(cache_dir + "/some/test", ds.GetDaemonStoreDir("some/test"));
  EXPECT_EQ(cache_dir + "/some/test", ds.GetDaemonStoreDir("/some/test"));
  EXPECT_EQ(cache_dir, ds.GetDaemonStoreDir(""));
}
