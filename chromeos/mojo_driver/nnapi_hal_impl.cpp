// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "nnapi_hal_impl.h"

#include "nnapi_stubs.h"

using namespace android::hardware::neuralnetworks::V1_3::utils;

namespace android {
namespace nn {

using namespace chromeos::nnapi;

void IDeviceImpl::getCapabilities(getCapabilitiesCallback callback) {
  auto fn = [callback = std::move(callback)](
                V1_3::ErrorStatus status,
                const V1_3::Capabilities& capabilities) mutable {
    std::move(callback).Run(static_cast<V1_0::ErrorStatus>(status),
                            capabilities);
  };

  // A bit of C++ magic to allow the std::move in the callback
  // capture above.
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_3::ErrorStatus status,
                         const V1_3::Capabilities& capabilities) {
    (*shared_fn)(status, capabilities);
  };
  wrapped_driver_->getCapabilities_1_3(std::move(copyable_fn));
}

void IDeviceImpl::getVersionString(getVersionStringCallback callback) {
  auto fn = [callback = std::move(callback)](
                V1_0::ErrorStatus status, const std::string& version) mutable {
    std::move(callback).Run(static_cast<V1_0::ErrorStatus>(status), version);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_0::ErrorStatus status, const std::string& version) {
    (*shared_fn)(status, version);
  };
  wrapped_driver_->getVersionString(std::move(copyable_fn));
}

void IDeviceImpl::getSupportedOperations(
    android::nn::V1_0::Model model,
    getSupportedOperationsCallback callback) {
  auto fn = [callback = std::move(callback)](
                V1_0::Model model, V1_0::ErrorStatus status,
                const hardware::hidl_vec<bool>& supportedOperations) mutable {
    std::move(callback).Run(static_cast<V1_0::ErrorStatus>(status),
                            supportedOperations);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn), model](
                         V1_0::ErrorStatus status,
                         const hardware::hidl_vec<bool>& supportedOperations) {
    (*shared_fn)(model, status, supportedOperations);
  };
  wrapped_driver_->getSupportedOperations(model, std::move(copyable_fn));
}

void IDeviceImpl::prepareModel(
    android::nn::V1_0::Model model,
    mojo::PendingRemote<mojom::IPreparedModelCallback> pm_callback,
    prepareModelCallback callback) {
  auto wrapped_callback = sp<V1_0::IPreparedModelCallback>(
      new PreparedModelCallbackStub(std::move(pm_callback)));

  V1_0::ErrorStatus result =
      wrapped_driver_->prepareModel(model, wrapped_callback);
  std::move(callback).Run(result);
}

void IPreparedModelCallbackImpl::notify(
    V1_0::ErrorStatus status,
    mojo::PendingRemote<mojom::IPreparedModel> preparedModel) {
  wrapped_prepared_model_ = nullptr;
  if (status == V1_0::ErrorStatus::NONE) {
    wrapped_prepared_model_ = sp<V1_0::IPreparedModel>(
        new PreparedModelStub(std::move(preparedModel)));
  }
  wrapped_callback_->notify(status, wrapped_prepared_model_);
}

void IPreparedModelImpl::execute(
    V1_0::Request request,
    mojo::PendingRemote<mojom::IExecutionCallback> e_callback,
    executeCallback callback) {
  wrapped_callback_ = sp<V1_0::IExecutionCallback>(
      new ExecutionCallbackStub(std::move(e_callback)));
  V1_0::ErrorStatus result =
      wrapped_model_->execute(request, wrapped_callback_);
  std::move(callback).Run(result);
}

void IExecutionCallbackImpl::notify(V1_0::ErrorStatus status) {
  wrapped_callback_->notify(status);
}

void IDeviceImpl::getStatus(getStatusCallback callback) {
  V1_0::DeviceStatus result = wrapped_driver_->getStatus();
  std::move(callback).Run(result);
}

}  // namespace nn
}  // namespace android
