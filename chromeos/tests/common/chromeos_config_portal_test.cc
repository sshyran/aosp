// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <cros_config/fake_cros_config.h>
#include <gtest/gtest.h>
#include <memory>

#include "chromeos_config_portal.h"

TEST(DriverConfig, NoDriverConfigurationsPresent) {
  auto config_portal = std::make_unique<brillo::FakeCrosConfig>();
  auto configs = getDriverConfigs(std::move(config_portal));

  EXPECT_EQ(configs.size(), 0);
}

TEST(DriverConfig, MissingRequiredFieldFailsToLoadDriver) {
  auto config_portal = std::make_unique<brillo::FakeCrosConfig>();
  config_portal->SetString(std::string("/nnapi/drivers/0"), std::string("name"),
                           std::string("xnnpack"));
  auto configs = getDriverConfigs(std::move(config_portal));

  EXPECT_EQ(configs.size(), 0);
}

TEST(DriverConfig, SingleConfigurationPresent) {
  auto config_portal = std::make_unique<brillo::FakeCrosConfig>();
  config_portal->SetString(std::string("/nnapi/drivers/0"), std::string("name"),
                           std::string("xnnpack"));
  config_portal->SetString(std::string("/nnapi/drivers/0"),
                           std::string("shared-library"),
                           std::string("libxnn-driver.so"));
  auto configs = getDriverConfigs(std::move(config_portal));

  EXPECT_EQ(configs.size(), 1);
  EXPECT_EQ(configs[0].name, std::string("xnnpack"));
  EXPECT_EQ(configs[0].shared_library, std::string("libxnn-driver.so"));
}

TEST(DriverConfig, ConfigurationPresentWithOtherConfigElements) {
  auto config_portal = std::make_unique<brillo::FakeCrosConfig>();
  config_portal->SetString(std::string("/nnapi/drivers/0"), std::string("name"),
                           std::string("xnnpack"));
  config_portal->SetString(std::string("/nnapi/drivers/0"),
                           std::string("shared-library"),
                           std::string("libxnn-driver.so"));
  config_portal->SetString(std::string("/random_config"), std::string("random"),
                           std::string("more_random"));
  auto configs = getDriverConfigs(std::move(config_portal));

  EXPECT_EQ(configs.size(), 1);
  EXPECT_EQ(configs[0].name, std::string("xnnpack"));
  EXPECT_EQ(configs[0].shared_library, std::string("libxnn-driver.so"));
}

TEST(DriverConfig, MultipleConfigurationsPresent) {
  auto config_portal = std::make_unique<brillo::FakeCrosConfig>();
  config_portal->SetString(std::string("/nnapi/drivers/0"), std::string("name"),
                           std::string("xnnpack"));
  config_portal->SetString(std::string("/nnapi/drivers/0"),
                           std::string("shared-library"),
                           std::string("libxnn-driver.so"));

  config_portal->SetString(std::string("/nnapi/drivers/1"), std::string("name"),
                           std::string("full"));
  config_portal->SetString(std::string("/nnapi/drivers/1"),
                           std::string("shared-library"),
                           std::string("libfull-driver.so"));
  auto configs = getDriverConfigs(std::move(config_portal));

  EXPECT_EQ(configs.size(), 2);

  EXPECT_EQ(configs[0].name, std::string("xnnpack"));
  EXPECT_EQ(configs[0].shared_library, std::string("libxnn-driver.so"));

  EXPECT_EQ(configs[1].name, std::string("full"));
  EXPECT_EQ(configs[1].shared_library, std::string("libfull-driver.so"));
}
