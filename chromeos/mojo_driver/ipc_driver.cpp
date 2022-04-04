// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "ipc_driver.h"
#include "mojo_controller.h"

namespace android {
namespace nn {

IPCDriver::IPCDriver(const char* name, sp<V1_3::IDevice> delegate)
    : delegate_(delegate) {
  mojo_ = std::make_unique<MojoController>();
}

// *************** MOJO IPC ***************

hardware::Return<void> IPCDriver::getCapabilities_1_3(
    getCapabilities_1_3_cb cb) {
  return mojo_->getCapabilities_1_3(cb);
}

hardware::Return<V1_0::ErrorStatus> IPCDriver::prepareModel(
    const V1_0::Model& model,
    const sp<V1_0::IPreparedModelCallback>& callback) {
  return mojo_->prepareModel(model, callback);
}

hardware::Return<void> IPCDriver::getVersionString(getVersionString_cb cb) {
  return mojo_->getVersionString(cb);
}

hardware::Return<void> IPCDriver::getSupportedOperations(
    const V1_0::Model& model,
    getSupportedOperations_cb cb) {
  return mojo_->getSupportedOperations(model, cb);
}

hardware::Return<V1_0::DeviceStatus> IPCDriver::getStatus() {
  return mojo_->getStatus();
}

// *************** LOCAL CPU DELEGATE ***************

hardware::Return<void> IPCDriver::getSupportedOperations_1_3(
    const V1_3::Model& model,
    getSupportedOperations_1_3_cb cb) {
  return delegate_->getSupportedOperations_1_3(model, cb);
}

hardware::Return<void> IPCDriver::getType(getType_cb cb) {
  return delegate_->getType(cb);
}
hardware::Return<void> IPCDriver::getSupportedExtensions(
    getSupportedExtensions_cb cb) {
  return delegate_->getSupportedExtensions(cb);
}

hardware::Return<void> IPCDriver::getSupportedOperations_1_1(
    const V1_1::Model& model,
    getSupportedOperations_1_1_cb cb) {
  return delegate_->getSupportedOperations_1_1(model, cb);
}

hardware::Return<void> IPCDriver::getSupportedOperations_1_2(
    const V1_2::Model& model,
    getSupportedOperations_1_2_cb cb) {
  return delegate_->getSupportedOperations_1_2(model, cb);
}

hardware::Return<void> IPCDriver::getNumberOfCacheFilesNeeded(
    getNumberOfCacheFilesNeeded_cb cb) {
  return delegate_->getNumberOfCacheFilesNeeded(cb);
}

hardware::Return<V1_0::ErrorStatus> IPCDriver::prepareModel_1_1(
    const V1_1::Model& model,
    V1_1::ExecutionPreference preference,
    const sp<V1_0::IPreparedModelCallback>& callback) {
  return delegate_->prepareModel_1_1(model, preference, callback);
}

hardware::Return<V1_0::ErrorStatus> IPCDriver::prepareModel_1_2(
    const V1_2::Model& model,
    V1_1::ExecutionPreference preference,
    const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
    const hardware::hidl_vec<hardware::hidl_handle>& dataCache,
    const HalCacheToken& token,
    const sp<V1_2::IPreparedModelCallback>& callback) {
  return delegate_->prepareModel_1_2(model, preference, modelCache, dataCache,
                                     token, callback);
}

hardware::Return<V1_3::ErrorStatus> IPCDriver::prepareModel_1_3(
    const V1_3::Model& model,
    V1_1::ExecutionPreference preference,
    V1_3::Priority priority,
    const V1_3::OptionalTimePoint& deadline,
    const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
    const hardware::hidl_vec<hardware::hidl_handle>& dataCache,
    const HalCacheToken& token,
    const sp<V1_3::IPreparedModelCallback>& callback) {
  return delegate_->prepareModel_1_3(model, preference, priority, deadline,
                                     modelCache, dataCache, token, callback);
}

hardware::Return<V1_0::ErrorStatus> IPCDriver::prepareModelFromCache(
    const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
    const hardware::hidl_vec<hardware::hidl_handle>& dataCache,
    const HalCacheToken& token,
    const sp<V1_2::IPreparedModelCallback>& callback) {
  return delegate_->prepareModelFromCache(modelCache, dataCache, token,
                                          callback);
}

hardware::Return<V1_3::ErrorStatus> IPCDriver::prepareModelFromCache_1_3(
    const V1_3::OptionalTimePoint& deadline,
    const hardware::hidl_vec<hardware::hidl_handle>& modelCache,
    const hardware::hidl_vec<hardware::hidl_handle>& dataCache,
    const HalCacheToken& token,
    const sp<V1_3::IPreparedModelCallback>& callback) {
  return delegate_->prepareModelFromCache_1_3(deadline, modelCache, dataCache,
                                              token, callback);
}

hardware::Return<void> IPCDriver::allocate(
    const V1_3::BufferDesc& desc,
    const hardware::hidl_vec<sp<V1_3::IPreparedModel>>& preparedModels,
    const hardware::hidl_vec<V1_3::BufferRole>& inputRoles,
    const hardware::hidl_vec<V1_3::BufferRole>& outputRoles,
    allocate_cb cb) {
  return delegate_->allocate(desc, preparedModels, inputRoles, outputRoles, cb);
}

}  // namespace nn
}  // namespace android
