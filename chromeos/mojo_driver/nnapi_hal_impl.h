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
  void prepareModel_1_2(
      android::nn::V1_2::Model model,
      android::nn::V1_1::ExecutionPreference preference,
      const std::vector<android::hardware::hidl_handle>& modelCache,
      const std::vector<android::hardware::hidl_handle>& dataCache,
      const android::nn::HalCacheToken token,
      ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_2>
          pm_callback,
      prepareModel_1_2Callback callback) override;
  void prepareModel_1_3(
      android::nn::V1_3::Model model,
      android::nn::V1_1::ExecutionPreference preference,
      android::nn::V1_3::Priority priority,
      android::nn::V1_3::OptionalTimePoint deadline,
      const std::vector<android::hardware::hidl_handle>& modelCache,
      const std::vector<android::hardware::hidl_handle>& dataCache,
      const android::nn::HalCacheToken token,
      ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_3>
          pm_callback,
      prepareModel_1_3Callback callback) override;
  void getVersionString(getVersionStringCallback callback) override;
  void getSupportedOperations(android::nn::V1_1::Model model,
                              getSupportedOperationsCallback callback) override;
  void getSupportedOperations_1_2(
      android::nn::V1_2::Model model,
      getSupportedOperationsCallback callback) override;
  void getSupportedOperations_1_3(
      android::nn::V1_3::Model model,
      getSupportedOperations_1_3Callback callback) override;
  void getStatus(getStatusCallback callback) override;
  void getType(getTypeCallback callback) override;
  void getSupportedExtensions(getSupportedExtensionsCallback callback) override;
  void getNumberOfCacheFilesNeeded(
      getNumberOfCacheFilesNeededCallback callback) override;
  void prepareModelFromCache(
      const std::vector<android::hardware::hidl_handle>& modelCache,
      const std::vector<android::hardware::hidl_handle>& dataCache,
      const android::nn::HalCacheToken token,
      ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_2>
          pm_callback,
      prepareModelFromCacheCallback callback) override;
  void prepareModelFromCache_1_3(
      android::nn::V1_3::OptionalTimePoint deadline,
      const std::vector<android::hardware::hidl_handle>& modelCache,
      const std::vector<android::hardware::hidl_handle>& dataCache,
      const android::nn::HalCacheToken token,
      ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_3>
          pm_callback,
      prepareModelFromCache_1_3Callback callback) override;

  V1_3::IDevice* wrapped_driver_;
};

class IPreparedModelCallbackImpl
    : public chromeos::nnapi::mojom::IPreparedModelCallback {
 public:
  IPreparedModelCallbackImpl(const sp<V1_0::IPreparedModelCallback>& callback)
      : wrapped_callback_(callback) {}

  void notify(android::nn::V1_0::ErrorStatus status,
              mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel>
                  preparedModel) override;

 private:
  sp<V1_0::IPreparedModelCallback> wrapped_callback_;
};

class IPreparedModelCallback_1_2Impl
    : public chromeos::nnapi::mojom::IPreparedModelCallback_1_2 {
 public:
  IPreparedModelCallback_1_2Impl(
      const sp<V1_2::IPreparedModelCallback>& callback)
      : wrapped_callback_(callback), prepared_model_callback_impl_{callback} {}

  void notify(android::nn::V1_0::ErrorStatus status,
              mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel>
                  preparedModel) override;
  void notify_1_2(
      android::nn::V1_0::ErrorStatus status,
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel_1_2>
          preparedModel) override;

 private:
  sp<V1_2::IPreparedModelCallback> wrapped_callback_;
  IPreparedModelCallbackImpl prepared_model_callback_impl_;
};

class IPreparedModelCallback_1_3Impl
    : public chromeos::nnapi::mojom::IPreparedModelCallback_1_3 {
 public:
  IPreparedModelCallback_1_3Impl(
      const sp<V1_3::IPreparedModelCallback>& callback)
      : wrapped_callback_(callback),
        prepared_model_callback_1_2_impl_{callback} {}

  void notify(android::nn::V1_0::ErrorStatus status,
              mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel>
                  preparedModel) override;
  void notify_1_2(
      android::nn::V1_0::ErrorStatus status,
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel_1_2>
          preparedModel) override;
  void notify_1_3(
      android::nn::V1_3::ErrorStatus status,
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel_1_3>
          preparedModel) override;

 private:
  sp<V1_3::IPreparedModelCallback> wrapped_callback_;
  IPreparedModelCallback_1_2Impl prepared_model_callback_1_2_impl_;
};

class IPreparedModelImpl : public chromeos::nnapi::mojom::IPreparedModel {
 public:
  IPreparedModelImpl(sp<V1_0::IPreparedModel> preparedModel)
      : wrapped_model_(preparedModel) {}

  void execute(V1_0::Request request,
               mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback>
                   e_callback,
               executeCallback callback) override;

 private:
  sp<V1_0::IPreparedModel> wrapped_model_;
};

class IPreparedModel_1_2Impl
    : public chromeos::nnapi::mojom::IPreparedModel_1_2 {
 public:
  IPreparedModel_1_2Impl(sp<V1_2::IPreparedModel> preparedModel)
      : wrapped_model_(preparedModel), prepared_model_impl_{preparedModel} {}

  void execute(V1_0::Request request,
               mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback>
                   e_callback,
               executeCallback callback) override;
  void execute_1_2(
      V1_0::Request request,
      V1_2::MeasureTiming measure,
      mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback_1_2>
          e_callback,
      execute_1_2Callback callback) override;
  void executeSynchronously(V1_0::Request request,
                            V1_2::MeasureTiming measure,
                            executeSynchronouslyCallback callback) override;

 private:
  sp<V1_2::IPreparedModel> wrapped_model_;
  IPreparedModelImpl prepared_model_impl_;
};

class IPreparedModel_1_3Impl
    : public chromeos::nnapi::mojom::IPreparedModel_1_3 {
 public:
  IPreparedModel_1_3Impl(sp<V1_3::IPreparedModel> preparedModel)
      : wrapped_model_(preparedModel), prepared_model_1_2_impl_{preparedModel} {
    task_runner_ = ::base::SequencedTaskRunnerHandle::Get();
  }

  void execute(V1_0::Request request,
               mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback>
                   e_callback,
               executeCallback callback) override;
  void execute_1_2(
      V1_0::Request request,
      V1_2::MeasureTiming measure,
      mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback_1_2>
          e_callback,
      execute_1_2Callback callback) override;
  void execute_1_3(
      V1_3::Request request,
      V1_2::MeasureTiming measure,
      V1_3::OptionalTimePoint deadline,
      V1_3::OptionalTimeoutDuration loopTimeoutDuration,
      mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback_1_3>
          e_callback,
      execute_1_3Callback callback) override;
  void executeSynchronously(V1_0::Request request,
                            V1_2::MeasureTiming measure,
                            executeSynchronouslyCallback callback) override;
  void executeSynchronously_1_3(
      android::nn::V1_3::Request request,
      android::nn::V1_2::MeasureTiming measure,
      android::nn::V1_3::OptionalTimePoint deadline,
      android::nn::V1_3::OptionalTimeoutDuration loopTimeoutDuration,
      executeSynchronously_1_3Callback callback);
  void executeFenced(
      android::nn::V1_3::Request request,
      const std::vector<android::hardware::hidl_handle>& waitFor,
      android::nn::V1_2::MeasureTiming measure,
      android::nn::V1_3::OptionalTimePoint deadline,
      android::nn::V1_3::OptionalTimeoutDuration loopTimeoutDuration,
      android::nn::V1_3::OptionalTimeoutDuration duration,
      executeFencedCallback callback);

 private:
  sp<V1_3::IPreparedModel> wrapped_model_;
  scoped_refptr<::base::SequencedTaskRunner> task_runner_;
  IPreparedModel_1_2Impl prepared_model_1_2_impl_;
};

class IExecutionCallbackImpl
    : public chromeos::nnapi::mojom::IExecutionCallback {
 public:
  IExecutionCallbackImpl(sp<V1_0::IExecutionCallback> callback)
      : wrapped_callback_(callback) {}

  void notify(android::nn::V1_0::ErrorStatus status) override;

 private:
  sp<V1_0::IExecutionCallback> wrapped_callback_;
};

class IExecutionCallback_1_2Impl
    : public chromeos::nnapi::mojom::IExecutionCallback_1_2 {
 public:
  IExecutionCallback_1_2Impl(sp<V1_2::IExecutionCallback> callback)
      : wrapped_callback_(callback), execution_callback_impl_{callback} {}

  void notify(V1_0::ErrorStatus status) override;
  void notify_1_2(V1_0::ErrorStatus status,
                  const std::vector<V1_2::OutputShape>& outputShapes,
                  V1_2::Timing timing) override;

 private:
  sp<V1_2::IExecutionCallback> wrapped_callback_;
  IExecutionCallbackImpl execution_callback_impl_;
};

class IExecutionCallback_1_3Impl
    : public chromeos::nnapi::mojom::IExecutionCallback_1_3 {
 public:
  IExecutionCallback_1_3Impl(sp<V1_3::IExecutionCallback> callback)
      : wrapped_callback_(callback), execution_callback_1_2_impl_{callback} {}

  void notify(V1_0::ErrorStatus status) override;
  void notify_1_2(V1_0::ErrorStatus status,
                  const std::vector<V1_2::OutputShape>& outputShapes,
                  V1_2::Timing timing) override;
  void notify_1_3(
      android::nn::V1_3::ErrorStatus status,
      const std::vector<android::nn::V1_2::OutputShape>& outputShapes,
      android::nn::V1_2::Timing timing);

 private:
  sp<V1_3::IExecutionCallback> wrapped_callback_;
  IExecutionCallback_1_2Impl execution_callback_1_2_impl_;
};

class IFencedExecutionCallbackImpl
    : public chromeos::nnapi::mojom::IFencedExecutionCallback {
 public:
  IFencedExecutionCallbackImpl(sp<V1_3::IFencedExecutionCallback> callback)
      : wrapped_callback_(callback) {}

  void getExecutionInfo(getExecutionInfoCallback callback) override;

 private:
  sp<V1_3::IFencedExecutionCallback> wrapped_callback_;
};

}  // namespace nn
}  // namespace android

#endif  // ML_NN_CHROMEOS_NNAPI_HAL_IMPL_H_
