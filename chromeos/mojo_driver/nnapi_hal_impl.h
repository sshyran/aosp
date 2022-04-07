// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ML_NN_CHROMEOS_NNAPI_HAL_IMPL_H_
#define ML_NN_CHROMEOS_NNAPI_HAL_IMPL_H_

#include <HalInterfaces.h>
#include <mojo/public/cpp/bindings/pending_receiver.h>
#include <mojo/public/cpp/bindings/receiver.h>
#include <mojo/public/cpp/bindings/receiver_set.h>
#include <nnapi/hal/1.0/Device.h>
#include <nnapi/hal/1.3/Device.h>

#include <base/task_runner.h>

#include "aosp/frameworks/ml/chromeos/mojo_driver/mojom/nnapi_hal.mojom.h"

// These classes will wrap the "real" HAL driver in the worker process
// and receive the IPC calls from the client IPC driver in the
// main application / NNAPI process. These are the implementation for
// all of the 'remote' interfaces used in the system.

namespace android {
namespace nn {

class IDeviceImpl : public chromeos::nnapi::mojom::IDevice {
 public:
  IDeviceImpl(V1_3::IDevice* underlying_driver)
      : wrapped_driver_(underlying_driver) {}

 private:
  void getCapabilities(getCapabilitiesCallback callback) override;
  void prepareModel(
      android::nn::V1_1::Model model,
      android::nn::V1_1::ExecutionPreference preference,
      ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback>
          pm_callback,
      prepareModelCallback callback) override;
  void getVersionString(getVersionStringCallback callback) override;
  void getSupportedOperations(android::nn::V1_1::Model model,
                              getSupportedOperationsCallback callback) override;
  void getStatus(getStatusCallback callback) override;
  void getType(getTypeCallback callback) override;
  void getSupportedExtensions(getSupportedExtensionsCallback callback) override;
  void getNumberOfCacheFilesNeeded(
      getNumberOfCacheFilesNeededCallback cb) override;

  V1_3::IDevice* wrapped_driver_;
};

class IPreparedModelCallbackImpl
    : public chromeos::nnapi::mojom::IPreparedModelCallback {
 public:
  IPreparedModelCallbackImpl(const sp<V1_0::IPreparedModelCallback>& callback)
      : wrapped_callback_(callback) {}

 private:
  void notify(android::nn::V1_0::ErrorStatus status,
              mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel>
                  preparedModel) override;
  sp<V1_0::IPreparedModelCallback> wrapped_callback_;
  sp<V1_0::IPreparedModel> wrapped_prepared_model_;
};

class IPreparedModelImpl : public chromeos::nnapi::mojom::IPreparedModel {
 public:
  IPreparedModelImpl(sp<V1_0::IPreparedModel> preparedModel)
      : wrapped_model_(preparedModel) {}

 private:
  void execute(V1_0::Request request,
               mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback>
                   e_callback,
               executeCallback cb) override;
  sp<V1_0::IPreparedModel> wrapped_model_;
  sp<V1_0::IExecutionCallback> wrapped_callback_;
};

class IExecutionCallbackImpl
    : public chromeos::nnapi::mojom::IExecutionCallback {
 public:
  IExecutionCallbackImpl(sp<V1_0::IExecutionCallback> callback)
      : wrapped_callback_(callback) {}

 private:
  void notify(android::nn::V1_0::ErrorStatus status) override;
  sp<V1_0::IExecutionCallback> wrapped_callback_;
};

}  // namespace nn
}  // namespace android

#endif  // ML_NN_CHROMEOS_NNAPI_HAL_IMPL_H_
