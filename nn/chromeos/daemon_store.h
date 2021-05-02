// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ML_NN_CHROMEOS_DAEMON_STORE_H_
#define ML_NN_CHROMEOS_DAEMON_STORE_H_

#include <base/no_destructor.h>

#include <string>

// This interface is used to get the hashed version of the
// current user to determine the daemon storage location.
// Using an interface allows us to mock this for tests, since
// the DBus call won't be available when testing.
// See
// https://chromium.googlesource.com/chromiumos/docs/+/HEAD/sandboxing.md#securely-mounting-cryptohome-daemon-store-folders
class UserHashInterface {
 public:
  virtual std::string GetCurrentUserHash() const = 0;
  virtual ~UserHashInterface() = default;

 protected:
  UserHashInterface() = default;
};

// Singleton class used to get the daemon store location
// used by compilation caching to store cache files. NNAPI
// guidance indicates these files should be stored in
// a secure location.
class DaemonStore {
 public:
  static DaemonStore& Get();
  DaemonStore(const DaemonStore&) = delete;

  // Returns a string to the daemon store directory for
  // the current user with `cacheSubDir` appended. Returns an empty string if an
  // error occurs. Ideally we would return a base::FilePath, but we can't
  // include this as it has macros that clash with the android defined ones.
  std::string GetDaemonStoreDir(const std::string& cache_subdir) const;

  // NOTE: THESE METHODS ARE FOR TESTING ONLY.
  // Allow the interface to get the user hash to be changed.
  void SetUserHasherForTesting(std::unique_ptr<UserHashInterface> user_hasher);
  // Allow the base directory for the daemon storage location to be changed.
  void SetDaemonStoreBaseForTesting(const std::string& new_base);
  std::string GetDaemonStoreBaseForTesting();

 private:
  DaemonStore();
  friend class base::NoDestructor<DaemonStore>;

  std::unique_ptr<UserHashInterface> user_hasher_;
  std::string daemon_store_base_ = "/run/daemon-store/ml_service";
};

class MockUserHashForTesting : public UserHashInterface {
 public:
  virtual std::string GetCurrentUserHash() const override {
    return "mock-user-hash";
  }
};

#endif  // ML_NN_CHROMEOS_DAEMON_STORE_H_
