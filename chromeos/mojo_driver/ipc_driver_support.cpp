// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "LegacyHalUtils.h"
#include "ipc_driver.h"
#include "sample_driver.h"

#include <brillo/brillo_export.h>

// The code in this section includes headers from the Android
// frameworks which would otherwise clash with anything from
// libchrome. Macros such as CHECK, etc.

extern "C" BRILLO_EXPORT void* get_driver() {
  auto driver =
      new android::nn::IPCDriver("MojoDriver", android::nn::GetSampleDriver());
  return static_cast<void*>(driver);
}

namespace android {
namespace nn {

hardware::Return<void> IPCDriver::getCapabilities(getCapabilities_cb cb) {
  return getCapabilities_1_3(
      [cb = std::move(cb)](V1_3::ErrorStatus error,
                           const V1_3::Capabilities& capabilities) {
        cb(convertToV1_0(error), convertToV1_0(capabilities));
      });
}

hardware::Return<void> IPCDriver::getCapabilities_1_1(
    getCapabilities_1_1_cb cb) {
  return getCapabilities_1_3(
      [&](V1_3::ErrorStatus error, const V1_3::Capabilities& capabilities) {
        cb(convertToV1_0(error), convertToV1_1(capabilities));
      });
}

hardware::Return<void> IPCDriver::getCapabilities_1_2(
    getCapabilities_1_2_cb cb) {
  return getCapabilities_1_3(
      [&](V1_3::ErrorStatus error, const V1_3::Capabilities& capabilities) {
        cb(convertToV1_0(error), convertToV1_2(capabilities));
      });
}

hardware::Return<V1_0::ErrorStatus> IPCDriver::prepareModel(
    const V1_0::Model& model,
    const sp<V1_0::IPreparedModelCallback>& callback) {
  if (!validateModel(model)) {
    callback->notify(V1_0::ErrorStatus::INVALID_ARGUMENT, nullptr);
    return V1_0::ErrorStatus::INVALID_ARGUMENT;
  }
  return prepareModelRemote(convertToV1_1(model),
                          V1_1::ExecutionPreference::FAST_SINGLE_ANSWER,
                          callback);
}

hardware::Return<V1_0::ErrorStatus> IPCDriver::prepareModel_1_1(
    const V1_1::Model& model,
    V1_1::ExecutionPreference preference,
    const sp<V1_0::IPreparedModelCallback>& callback) {
  if (!validateModel(model) || !validateExecutionPreference(preference)) {
    callback->notify(V1_0::ErrorStatus::INVALID_ARGUMENT, nullptr);
    return V1_0::ErrorStatus::INVALID_ARGUMENT;
  }
  return prepareModelRemote(model, preference, callback);
}

hardware::Return<void> IPCDriver::getSupportedOperations(
    const V1_0::Model& model,
    getSupportedOperations_cb cb) {
  if (!validateModel(model)) {
    cb(V1_0::ErrorStatus::INVALID_ARGUMENT, {});
    return hardware::Void();
  }
  return getSupportedOperations_1_1(convertToV1_1(model), cb);
}

}  // namespace nn
}  // namespace android
