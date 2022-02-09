// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <base/strings/strcat.h>
#include <cros_config/cros_config.h>
#include <string>
#include <vector>

#include "chromeos_config_portal.h"

const constexpr char* nnapi_driver_config_field = "nnapi/drivers";

std::vector<DriverConfig> getDriverConfigs(
    std::unique_ptr<brillo::CrosConfigInterface> cfg_portal) {
  std::vector<DriverConfig> configs;
  int cnt = 0;
  while (true) {
    DriverConfig config;
    std::string config_path =
        base::StrCat({std::string("/"), nnapi_driver_config_field,
                      std::string("/"), std::to_string(cnt)});
    if (cfg_portal->GetString(config_path, std::string("name"), &config.name) &&
        cfg_portal->GetString(config_path, std::string("shared-library"),
                              &config.shared_library)) {
      configs.push_back(config);
      cnt += 1;
    } else {
      break;
    }
  }
  return configs;
}
