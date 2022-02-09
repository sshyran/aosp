// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <base/strings/string_split.h>
#include <cros_config/cros_config.h>
#include <memory>

#include "chromeos_config_portal.h"
#include "driver_loader_utils.h"

namespace android {
namespace nn {

std::vector<std::string> getServiceNames() {
  std::vector<std::string> serviceNames;
  std::string drivers;

  LOG(INFO) << "Checking ENV variable NNAPI_DRIVERS for driver info";
  const char* content = std::getenv("NNAPI_DRIVERS");
  if (content) {
    serviceNames = base::SplitString(content, ":", base::TRIM_WHITESPACE,
                                     base::SPLIT_WANT_NONEMPTY);
  }
  if (serviceNames.size() == 0) {
    LOG(INFO) << "No ENV variable override. Checking chromeos-config";
    auto configs = getDriverConfigs(std::make_unique<brillo::CrosConfig>());

    for (const auto& cfg : configs) {
      serviceNames.push_back(cfg.name);
      LOG(INFO) << "Found driver " << cfg.name << " in chromeos Config";
    }
  }
  if (serviceNames.empty()) {
    serviceNames = {"default"};
  }

  return serviceNames;
}

}  // namespace nn
}  // namespace android
