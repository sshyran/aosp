// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ML_NN_CHROMEOS_IPC_DRIVER_H_
#define ML_NN_CHROMEOS_IPC_DRIVER_H_

#include <HalInterfaces.h>

namespace android {
namespace nn {

// We need to forward declare this since its header file
// contains ChromeOS headers that contains macros that are
// also defined in the Android ecosystem.
class MojoController;

// This is the application / NNAPI side driver class used
// to communicate with the remote HAL driver process. It
// effectively just forwards NNAPI calls across the IPC
// boundary.
class IPCDriver : public V1_3::IDevice {
 public:
  IPCDriver(const char* name, sp<V1_3::IDevice> delegate);

  // These methods are done over mojo
  hardware::Return<void> getCapabilities_1_3(
      getCapabilities_1_3_cb cb) override;
  hardware::Return<void> getVersionString(getVersionString_cb cb) override;
  hardware::Return<void> getSupportedOperations_1_1(
      const V1_1::Model& model,
      getSupportedOperations_1_1_cb cb) override;
  hardware::Return<V1_0::DeviceStatus> getStatus() override;
  hardware::Return<V1_0::ErrorStatus> prepareModel_1_1(
      const V1_1::Model& model,
      V1_1::ExecutionPreference preference,
      const sp<V1_0::IPreparedModelCallback>& callback) override;

  // These methods are done by converting to the 1_3 version.
  hardware::Return<void> getCapabilities(getCapabilities_cb cb) override;
  hardware::Return<void> getCapabilities_1_1(
      getCapabilities_1_1_cb cb) override;
  hardware::Return<void> getCapabilities_1_2(
      getCapabilities_1_2_cb cb) override;
  hardware::Return<void> getSupportedOperations(
      const V1_0::Model& model,
      getSupportedOperations_cb cb) override;
  hardware::Return<V1_0::ErrorStatus> prepareModel(
      const V1_0::Model& model,
      const sp<V1_0::IPreparedModelCallback>& callback) override;

  // These methods are performed on the local CPU delegate
  hardware::Return<void> getType(getType_cb cb) override;
  hardware::Return<void> getSupportedExtensions(
      getSupportedExtensions_cb) override;
  hardware::Return<void> getSupportedOperations_1_2(
      const V1_2::Model& model,
      getSupportedOperations_1_2_cb cb) override;
  hardware::Return<void> getSupportedOperations_1_3(
      const V1_3::Model& model,
      getSupportedOperations_1_3_cb cb) override;
  hardware::Return<void> getNumberOfCacheFilesNeeded(
      getNumberOfCacheFilesNeeded_cb cb) override;
  hardware::Return<V1_0::ErrorStatus> prepareModel_1_2(
      const V1_2::Model& model,
      V1_1::ExecutionPreference preference,
      const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
      const hardware::hidl_vec<hardware::hidl_handle>& dataCache,
      const HalCacheToken& token,
      const sp<V1_2::IPreparedModelCallback>& callback) override;
  hardware::Return<V1_3::ErrorStatus> prepareModel_1_3(
      const V1_3::Model& model,
      V1_1::ExecutionPreference preference,
      V1_3::Priority priority,
      const V1_3::OptionalTimePoint& deadline,
      const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
      const hardware::hidl_vec<hardware::hidl_handle>& dataCache,
      const HalCacheToken& token,
      const sp<V1_3::IPreparedModelCallback>& callback) override;
  hardware::Return<V1_0::ErrorStatus> prepareModelFromCache(
      const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
      const hardware::hidl_vec<hardware::hidl_handle>& dataCache,
      const HalCacheToken& token,
      const sp<V1_2::IPreparedModelCallback>& callback) override;
  hardware::Return<V1_3::ErrorStatus> prepareModelFromCache_1_3(
      const V1_3::OptionalTimePoint& deadline,
      const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
      const hardware::hidl_vec<hardware::hidl_handle>& dataCache,
      const HalCacheToken& token,
      const sp<V1_3::IPreparedModelCallback>& callback) override;
  hardware::Return<void> allocate(
      const V1_3::BufferDesc& desc,
      const hardware::hidl_vec<sp<V1_3::IPreparedModel>>& preparedModels,
      const hardware::hidl_vec<V1_3::BufferRole>& inputRoles,
      const hardware::hidl_vec<V1_3::BufferRole>& outputRoles,
      allocate_cb cb) override;

 private:
  std::unique_ptr<MojoController> mojo_;

  // TODO: Remove this once all the methods have been implemented
  // on the mojo object.
  sp<V1_3::IDevice> delegate_;

  hardware::Return<V1_0::ErrorStatus> prepareModelRemote(
      const V1_1::Model& model,
      V1_1::ExecutionPreference preference,
      const sp<V1_0::IPreparedModelCallback>& callback);
};

}  // namespace nn
}  // namespace android

#endif  // ML_NN_CHROMEOS_IPC_DRIVER_H_
