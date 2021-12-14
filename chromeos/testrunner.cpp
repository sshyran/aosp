// Copyright 2020 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <stdlib.h>

#include <filesystem>
#include <memory>

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "android-base/logging.h"
#include "daemon_store.h"
#include "logger.h"

void SetupMessageLoop();
void DestroyMessageLoop();

int main(int argc, char** argv) {
  // Our testrunners are invoked with platform_test, which doesn't
  // pass through env variables like 'ANDROID_LOGS_TAGS'. This is
  // our workaround to handle the extreme error log verbosity of
  // the test suites.
#ifndef WITH_TEST_ERROR_LOGS
  setenv("ANDROID_LOG_TAGS", "*:f", 0);
#endif

  // For compilation caching, we expect that the directory
  // /run/daemon-store/ml_service will exist, but in tests it will
  // not, and DBus won't be available to query the current username
  // hash. So we set up a fake cryptohome area here and mock the
  // username hasher to simulate that environment for testing.
  DaemonStore& ds = DaemonStore::Get();
  ds.SetUserHasherForTesting(std::make_unique<MockUserHashForTesting>());
  std::string base("/tmp/run/daemon-store/ml_service");
  ds.SetDaemonStoreBaseForTesting(base);
  std::string cacheDir = base + "/mock-user-hash/nnapi_compilations";
  std::filesystem::create_directories(cacheDir);

  android::base::InitLogging(argv, android::base::StderrLogger);
  android::base::SetLogger(ChromeLogger);

  SetupMessageLoop();

  testing::InitGoogleTest(&argc, argv);
  testing::GTEST_FLAG(throw_on_failure) = true;
  testing::InitGoogleMock(&argc, argv);

  int test_result = RUN_ALL_TESTS();

  DestroyMessageLoop();

  // Clean up the fake cryptohome area
  std::filesystem::remove_all(base);
  return test_result;
}
