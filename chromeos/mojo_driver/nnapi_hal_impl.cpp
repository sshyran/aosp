// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "nnapi_hal_impl.h"

#include "nnapi_stubs.h"

#include <mojo/public/cpp/bindings/self_owned_receiver.h>

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

void IDeviceImpl::getSupportedOperations(
    V1_1::Model model,
    getSupportedOperationsCallback callback) {
  auto fn = [callback = std::move(callback)](
                V1_0::ErrorStatus status,
                const hardware::hidl_vec<bool>& supportedOperations) mutable {
    std::move(callback).Run(static_cast<V1_0::ErrorStatus>(status),
                            supportedOperations);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_0::ErrorStatus status,
                         const hardware::hidl_vec<bool>& supportedOperations) {
    (*shared_fn)(status, supportedOperations);
  };
  wrapped_driver_->getSupportedOperations_1_1(model, std::move(copyable_fn));
}

void IDeviceImpl::getSupportedOperations_1_2(
    V1_2::Model model,
    getSupportedOperations_1_2Callback callback) {
  auto fn = [callback = std::move(callback)](
                V1_0::ErrorStatus status,
                const hardware::hidl_vec<bool>& supportedOperations) mutable {
    std::move(callback).Run(static_cast<V1_0::ErrorStatus>(status),
                            supportedOperations);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_0::ErrorStatus status,
                         const hardware::hidl_vec<bool>& supportedOperations) {
    (*shared_fn)(status, supportedOperations);
  };
  wrapped_driver_->getSupportedOperations_1_2(model, std::move(copyable_fn));
}

void IDeviceImpl::getSupportedOperations_1_3(
    V1_3::Model model,
    getSupportedOperations_1_3Callback callback) {
  auto fn = [callback = std::move(callback)](
                V1_3::ErrorStatus status,
                const hardware::hidl_vec<bool>& supportedOperations) mutable {
    std::move(callback).Run(static_cast<V1_3::ErrorStatus>(status),
                            supportedOperations);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_3::ErrorStatus status,
                         const hardware::hidl_vec<bool>& supportedOperations) {
    (*shared_fn)(status, supportedOperations);
  };
  wrapped_driver_->getSupportedOperations_1_3(model, std::move(copyable_fn));
}

void IDeviceImpl::prepareModel(
    V1_1::Model model,
    V1_1::ExecutionPreference preference,
    ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback>
        pm_callback,
    prepareModelCallback callback) {
  auto pm_callback_stub = sp<V1_0::IPreparedModelCallback>(
      new PreparedModelCallbackStub(std::move(pm_callback)));

  V1_0::ErrorStatus result =
      wrapped_driver_->prepareModel_1_1(model, preference, pm_callback_stub);
  std::move(callback).Run(result);
}

void IDeviceImpl::prepareModel_1_2(
    V1_2::Model model,
    V1_1::ExecutionPreference preference,
    const std::vector<android::hardware::hidl_handle>& modelCache,
    const std::vector<android::hardware::hidl_handle>& dataCache,
    const android::nn::HalCacheToken token,
    ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_2>
        pm_callback,
    prepareModel_1_2Callback callback) {
  auto pm_callback_stub = sp<V1_2::IPreparedModelCallback>(
      new PreparedModelCallback_1_2Stub(std::move(pm_callback)));

  V1_0::ErrorStatus result = wrapped_driver_->prepareModel_1_2(
      model, preference, modelCache, dataCache, token, pm_callback_stub);
  std::move(callback).Run(result);
}

void IDeviceImpl::prepareModel_1_3(
    V1_3::Model model,
    V1_1::ExecutionPreference preference,
    V1_3::Priority priority,
    V1_3::OptionalTimePoint deadline,
    const std::vector<android::hardware::hidl_handle>& modelCache,
    const std::vector<android::hardware::hidl_handle>& dataCache,
    const android::nn::HalCacheToken token,
    ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_3>
        pm_callback,
    prepareModel_1_3Callback callback) {
  auto pm_callback_stub = sp<V1_3::IPreparedModelCallback>(
      new PreparedModelCallback_1_3Stub(std::move(pm_callback)));

  V1_3::ErrorStatus result = wrapped_driver_->prepareModel_1_3(
      model, preference, priority, deadline, modelCache, dataCache, token,
      pm_callback_stub);
  std::move(callback).Run(result);
}

void IDeviceImpl::getStatus(getStatusCallback cb) {
  V1_0::DeviceStatus result = wrapped_driver_->getStatus();
  std::move(cb).Run(result);
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

void IDeviceImpl::getType(getTypeCallback callback) {
  auto fn = [callback = std::move(callback)](
                V1_0::ErrorStatus status,
                const V1_2::DeviceType& type) mutable {
    std::move(callback).Run(static_cast<V1_0::ErrorStatus>(status), type);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_0::ErrorStatus status,
                         const V1_2::DeviceType& type) {
    (*shared_fn)(status, type);
  };
  wrapped_driver_->getType(std::move(copyable_fn));
}

void IDeviceImpl::getSupportedExtensions(
    getSupportedExtensionsCallback callback) {
  auto fn = [callback = std::move(callback)](
                V1_0::ErrorStatus status,
                const std::vector<V1_2::Extension>& extension) mutable {
    std::move(callback).Run(status, extension);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_0::ErrorStatus status,
                         const std::vector<V1_2::Extension>& extension) {
    (*shared_fn)(status, extension);
  };
  wrapped_driver_->getSupportedExtensions(std::move(copyable_fn));
}

void IDeviceImpl::getNumberOfCacheFilesNeeded(
    getNumberOfCacheFilesNeededCallback callback) {
  auto fn = [callback = std::move(callback)](
                V1_0::ErrorStatus status, const uint32_t& numModelCache,
                const uint32_t& numDataCache) mutable {
    std::move(callback).Run(status, numModelCache, numDataCache);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_0::ErrorStatus status,
                         const uint32_t& numModelCache,
                         const uint32_t& numDataCache) {
    (*shared_fn)(status, numModelCache, numDataCache);
  };
  wrapped_driver_->getNumberOfCacheFilesNeeded(std::move(copyable_fn));
}

void IDeviceImpl::prepareModelFromCache(
    const std::vector<android::hardware::hidl_handle>& modelCache,
    const std::vector<android::hardware::hidl_handle>& dataCache,
    const android::nn::HalCacheToken token,
    ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_2>
        pm_callback,
    prepareModelFromCacheCallback callback) {
  auto pm_callback_stub = sp<V1_2::IPreparedModelCallback>(
      new PreparedModelCallback_1_2Stub(std::move(pm_callback)));

  V1_0::ErrorStatus result = wrapped_driver_->prepareModelFromCache(
      modelCache, dataCache, token, pm_callback_stub);
  std::move(callback).Run(result);
}

void IDeviceImpl::prepareModelFromCache_1_3(
    android::nn::V1_3::OptionalTimePoint deadline,
    const std::vector<android::hardware::hidl_handle>& modelCache,
    const std::vector<android::hardware::hidl_handle>& dataCache,
    const android::nn::HalCacheToken token,
    ::mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_3>
        pm_callback,
    prepareModelFromCache_1_3Callback callback) {
  auto pm_callback_stub = sp<V1_3::IPreparedModelCallback>(
      new PreparedModelCallback_1_3Stub(std::move(pm_callback)));

  V1_3::ErrorStatus result = wrapped_driver_->prepareModelFromCache_1_3(
      deadline, modelCache, dataCache, token, pm_callback_stub);
  std::move(callback).Run(result);
}

void IPreparedModelCallbackImpl::notify(
    V1_0::ErrorStatus status,
    mojo::PendingRemote<mojom::IPreparedModel> preparedModel) {
  sp<V1_0::IPreparedModel> prepared_model_stub = nullptr;
  if (status == V1_0::ErrorStatus::NONE) {
    prepared_model_stub = sp<V1_0::IPreparedModel>(
        new PreparedModelStub(std::move(preparedModel)));
  }
  wrapped_callback_->notify(status, prepared_model_stub);
}

void IPreparedModelCallback_1_2Impl::notify(
    V1_0::ErrorStatus status,
    mojo::PendingRemote<mojom::IPreparedModel> preparedModel) {
  prepared_model_callback_impl_.notify(status, std::move(preparedModel));
}

void IPreparedModelCallback_1_2Impl::notify_1_2(
    V1_0::ErrorStatus status,
    mojo::PendingRemote<mojom::IPreparedModel_1_2> preparedModel) {
  sp<V1_2::IPreparedModel> prepared_model_stub = nullptr;
  if (status == V1_0::ErrorStatus::NONE) {
    prepared_model_stub = sp<V1_2::IPreparedModel>(
        new PreparedModel_1_2Stub(std::move(preparedModel)));
  }
  wrapped_callback_->notify_1_2(status, prepared_model_stub);
}

void IPreparedModelCallback_1_3Impl::notify(
    V1_0::ErrorStatus status,
    mojo::PendingRemote<mojom::IPreparedModel> preparedModel) {
  prepared_model_callback_1_2_impl_.notify(status, std::move(preparedModel));
}

void IPreparedModelCallback_1_3Impl::notify_1_2(
    V1_0::ErrorStatus status,
    mojo::PendingRemote<mojom::IPreparedModel_1_2> preparedModel) {
  prepared_model_callback_1_2_impl_.notify_1_2(status,
                                               std::move(preparedModel));
}

void IPreparedModelCallback_1_3Impl::notify_1_3(
    V1_3::ErrorStatus status,
    mojo::PendingRemote<mojom::IPreparedModel_1_3> preparedModel) {
  sp<V1_3::IPreparedModel> prepared_model_stub = nullptr;
  if (status == V1_3::ErrorStatus::NONE) {
    prepared_model_stub = sp<V1_3::IPreparedModel>(
        new PreparedModel_1_3Stub(std::move(preparedModel)));
  }
  wrapped_callback_->notify_1_3(status, prepared_model_stub);
}

void IPreparedModelImpl::execute(
    V1_0::Request request,
    mojo::PendingRemote<mojom::IExecutionCallback> e_callback,
    executeCallback callback) {
  sp<V1_0::IExecutionCallback> e_callback_stub = sp<V1_0::IExecutionCallback>(
      new ExecutionCallbackStub(std::move(e_callback)));
  V1_0::ErrorStatus result = wrapped_model_->execute(request, e_callback_stub);
  std::move(callback).Run(result);
}

void IPreparedModel_1_2Impl::execute(
    V1_0::Request request,
    mojo::PendingRemote<mojom::IExecutionCallback> e_callback,
    executeCallback callback) {
  prepared_model_impl_.execute(request, std::move(e_callback),
                               std::move(callback));
}

void IPreparedModel_1_2Impl::execute_1_2(
    V1_0::Request request,
    V1_2::MeasureTiming measure,
    mojo::PendingRemote<mojom::IExecutionCallback_1_2> e_callback,
    execute_1_2Callback callback) {
  sp<V1_2::IExecutionCallback> e_callback_stub = sp<V1_2::IExecutionCallback>(
      new ExecutionCallback_1_2Stub(std::move(e_callback)));
  V1_0::ErrorStatus result =
      wrapped_model_->execute_1_2(request, measure, e_callback_stub);
  std::move(callback).Run(result);
}

void IPreparedModel_1_2Impl::executeSynchronously(
    V1_0::Request request,
    V1_2::MeasureTiming measure,
    executeSynchronouslyCallback callback) {
  auto fn = [callback = std::move(callback)](
                V1_0::ErrorStatus status,
                const std::vector<V1_2::OutputShape>& outputShape,
                V1_2::Timing timing) mutable {
    std::move(callback).Run(status, outputShape, timing);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_0::ErrorStatus status,
                         const std::vector<V1_2::OutputShape>& outputShape,
                         V1_2::Timing timing) {
    (*shared_fn)(status, outputShape, timing);
  };
  wrapped_model_->executeSynchronously(request, measure,
                                       std::move(copyable_fn));
}

void IPreparedModel_1_3Impl::execute(
    V1_0::Request request,
    mojo::PendingRemote<mojom::IExecutionCallback> e_callback,
    executeCallback callback) {
  prepared_model_1_2_impl_.execute(request, std::move(e_callback),
                                   std::move(callback));
}

void IPreparedModel_1_3Impl::execute_1_2(
    V1_0::Request request,
    V1_2::MeasureTiming measure,
    mojo::PendingRemote<mojom::IExecutionCallback_1_2> e_callback,
    execute_1_2Callback callback) {
  prepared_model_1_2_impl_.execute_1_2(request, measure, std::move(e_callback),
                                       std::move(callback));
}

void IPreparedModel_1_3Impl::execute_1_3(
    V1_3::Request request,
    V1_2::MeasureTiming measure,
    V1_3::OptionalTimePoint deadline,
    V1_3::OptionalTimeoutDuration loopTimeoutDuration,
    mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback_1_3>
        e_callback,
    execute_1_3Callback callback) {
  auto e_callback_stub = sp<V1_3::IExecutionCallback>(
      new ExecutionCallback_1_3Stub(std::move(e_callback)));
  V1_3::ErrorStatus result = wrapped_model_->execute_1_3(
      request, measure, deadline, loopTimeoutDuration, e_callback_stub);
  std::move(callback).Run(result);
}

void IPreparedModel_1_3Impl::executeSynchronously(
    V1_0::Request request,
    V1_2::MeasureTiming measure,
    executeSynchronouslyCallback callback) {
  prepared_model_1_2_impl_.executeSynchronously(request, measure,
                                                std::move(callback));
}

void IPreparedModel_1_3Impl::executeSynchronously_1_3(
    V1_3::Request request,
    V1_2::MeasureTiming measure,
    V1_3::OptionalTimePoint deadline,
    V1_3::OptionalTimeoutDuration loopTimeoutDuration,
    executeSynchronously_1_3Callback callback) {
  auto fn = [callback = std::move(callback)](
                V1_3::ErrorStatus status,
                const std::vector<V1_2::OutputShape>& outputShape,
                V1_2::Timing timing) mutable {
    std::move(callback).Run(status, outputShape, timing);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_3::ErrorStatus status,
                         const std::vector<V1_2::OutputShape>& outputShape,
                         V1_2::Timing timing) {
    (*shared_fn)(status, outputShape, timing);
  };
  wrapped_model_->executeSynchronously_1_3(
      request, measure, deadline, loopTimeoutDuration, std::move(copyable_fn));
}

void IPreparedModel_1_3Impl::executeFenced(
    V1_3::Request request,
    const std::vector<android::hardware::hidl_handle>& waitFor,
    V1_2::MeasureTiming measure,
    V1_3::OptionalTimePoint deadline,
    V1_3::OptionalTimeoutDuration loopTimeoutDuration,
    V1_3::OptionalTimeoutDuration duration,
    executeFencedCallback callback) {
  auto fn = [callback = std::move(callback), task_runner = task_runner_](
                V1_3::ErrorStatus status,
                const hardware::hidl_handle& syncFence,
                const sp<V1_3::IFencedExecutionCallback>& fe_cb) mutable {
    mojo::PendingRemote<mojom::IFencedExecutionCallback> fe_cb_remote;
    auto fe_cb_receiver = fe_cb_remote.InitWithNewPipeAndPassReceiver();
    if (V1_3::ErrorStatus::NONE == status) {
      auto fn =
          [](mojo::PendingReceiver<mojom::IFencedExecutionCallback> receiver,
             const sp<V1_3::IFencedExecutionCallback> cb) {
            mojo::MakeSelfOwnedReceiver(
                std::make_unique<IFencedExecutionCallbackImpl>(cb),
                std::move(receiver));
          };

      task_runner->PostTask(
          FROM_HERE,
          ::base::BindOnce(fn, std::move(fe_cb_receiver), std::move(fe_cb)));
    }
    std::move(callback).Run(status, syncFence, std::move(fe_cb_remote));
  };

  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_3::ErrorStatus status,
                         const hardware::hidl_handle& syncFence,
                         const sp<V1_3::IFencedExecutionCallback>& e_callback) {
    (*shared_fn)(status, syncFence, e_callback);
  };
  wrapped_model_->executeFenced(request, waitFor, measure, deadline,
                                loopTimeoutDuration, duration,
                                std::move(copyable_fn));
}

void IExecutionCallbackImpl::notify(V1_0::ErrorStatus status) {
  wrapped_callback_->notify(status);
}

void IExecutionCallback_1_2Impl::notify(V1_0::ErrorStatus status) {
  execution_callback_impl_.notify(status);
}

void IExecutionCallback_1_2Impl::notify_1_2(
    V1_0::ErrorStatus status,
    const std::vector<V1_2::OutputShape>& outputShapes,
    V1_2::Timing timing) {
  wrapped_callback_->notify_1_2(status, outputShapes, timing);
}

void IExecutionCallback_1_3Impl::notify(V1_0::ErrorStatus status) {
  execution_callback_1_2_impl_.notify(status);
}

void IExecutionCallback_1_3Impl::notify_1_2(
    V1_0::ErrorStatus status,
    const std::vector<V1_2::OutputShape>& outputShapes,
    V1_2::Timing timing) {
  execution_callback_1_2_impl_.notify_1_2(status, outputShapes, timing);
}

void IExecutionCallback_1_3Impl::notify_1_3(
    V1_3::ErrorStatus status,
    const std::vector<V1_2::OutputShape>& outputShapes,
    V1_2::Timing timing) {
  wrapped_callback_->notify_1_3(status, outputShapes, timing);
}

void IFencedExecutionCallbackImpl::getExecutionInfo(
    getExecutionInfoCallback callback) {
  auto fn = [callback = std::move(callback)](
                V1_3::ErrorStatus status, V1_2::Timing timingLaunched,
                V1_2::Timing timingFenced) mutable {
    std::move(callback).Run(status, timingLaunched, timingFenced);
  };
  auto shared_fn = std::make_shared<decltype(fn)>(std::move(fn));
  auto copyable_fn = [shared_fn = std::move(shared_fn)](
                         V1_3::ErrorStatus status, V1_2::Timing timingLaunched,
                         V1_2::Timing timingFenced) {
    (*shared_fn)(status, timingLaunched, timingFenced);
  };

  wrapped_callback_->getExecutionInfo(std::move(copyable_fn));
}

}  // namespace nn
}  // namespace android
