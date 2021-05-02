// Copyright 2021 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "daemon_store.h"

#include <base/files/file_util.h>
#include <session_manager/dbus-proxies.h>

using org::chromium::SessionManagerInterfaceProxy;

namespace {
constexpr char dbus_path_[] = "/run/dbus/system_bus_socket";
constexpr char nnapi_subdir_[] = "nnapi_compilations";

static std::unique_ptr<SessionManagerInterfaceProxy> SetUpDBus(
    scoped_refptr<dbus::Bus> bus) {
  if (!bus) {
    dbus::Bus::Options options;
    options.bus_type = dbus::Bus::SYSTEM;

    bus = new dbus::Bus(options);
    CHECK(bus->Connect());
  }
  return std::make_unique<SessionManagerInterfaceProxy>(bus);
}

class UserHash : public UserHashInterface {
 public:
  virtual std::string GetCurrentUserHash() const override {
    if (!base::PathExists(base::FilePath(dbus_path_))) {
      LOG(ERROR) << "Cannot query DBUS.";
      return "";
    }

    scoped_refptr<dbus::Bus> bus;
    auto sessionManagerProxy = SetUpDBus(bus);

    brillo::ErrorPtr error;
    std::string username;
    std::string hashed_username;
    if (!sessionManagerProxy->RetrievePrimarySession(
            &username, &hashed_username, &error)) {
      LOG(ERROR) << "Error in DBus call RetrievePrimarySession: "
                 << error->GetMessage();
      return "";
    }

    return hashed_username;
  }
};

}  // namespace

DaemonStore& DaemonStore::Get() {
  static base::NoDestructor<DaemonStore> instance;
  return *instance.get();
}

DaemonStore::DaemonStore() : user_hasher_(std::make_unique<UserHash>()) {}

void DaemonStore::SetUserHasherForTesting(
    std::unique_ptr<UserHashInterface> user_hasher) {
  user_hasher_ = std::move(user_hasher);
}

void DaemonStore::SetDaemonStoreBaseForTesting(const std::string& new_base) {
  daemon_store_base_ = new_base;
}

std::string DaemonStore::GetDaemonStoreBaseForTesting() {
  return daemon_store_base_;
}

std::string DaemonStore::GetDaemonStoreDir(
    const std::string& cache_subdir) const {
  std::string hashed_username = user_hasher_->GetCurrentUserHash();
  if (hashed_username.empty()) {
    LOG(ERROR) << "No active user session.";
    return "";
  }

  base::FilePath caching_dir =
      base::FilePath(daemon_store_base_).Append(hashed_username);
  if (!base::DirectoryExists(caching_dir)) {
    LOG(ERROR) << "User daemon-store directory (" << caching_dir
               << ") doesn't exist.";
    return "";
  }

  caching_dir = caching_dir.Append(nnapi_subdir_);
  if (!cache_subdir.empty()) {
    // Remove any leading slashes
    if (cache_subdir[0] == '/')
      caching_dir = caching_dir.Append(cache_subdir.substr(1));
    else
      caching_dir = caching_dir.Append(cache_subdir);
  }

  // Create the subdirectories
  base::File::Error error;
  if (!base::CreateDirectoryAndGetError(caching_dir, &error)) {
    LOG(ERROR) << "Could not create NNAPI caching dir: " << caching_dir
               << ", error: " << error;
    return "";
  }

  return caching_dir.StripTrailingSeparators().value();
}
