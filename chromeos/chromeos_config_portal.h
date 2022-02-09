// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <cros_config/cros_config_interface.h>
#include <string>
#include <vector>

struct DriverConfig {
  std::string name;
  std::string shared_library;
};

std::vector<DriverConfig> getDriverConfigs(
    std::unique_ptr<brillo::CrosConfigInterface> cfg_portal);
