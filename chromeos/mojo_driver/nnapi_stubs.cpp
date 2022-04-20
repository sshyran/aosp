// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "nnapi_stubs.h"

#include <mojo/public/cpp/bindings/self_owned_receiver.h>

namespace android {
namespace nn {

using namespace chromeos::nnapi;

template <typename T_IPreparedModelCallback>
hardware::Return<void> notify_base(
    V1_0::ErrorStatus status,
    const sp<V1_0::IPreparedModel>& preparedModel,
    mojo::PendingRemote<T_IPreparedModelCallback>& pending_remote,
    scoped_refptr<::base::SequencedTaskRunner>& task_runner) {
  auto fn =
      [](mojo::PendingRemote<T_IPreparedModelCallback> pending_remote,
         V1_0::ErrorStatus status,
         const sp<V1_0::IPreparedModel> preparedModel) {
        mojo::PendingRemote<mojom::IPreparedModel> pm_remote;

        mojo::MakeSelfOwnedReceiver(
            std::make_unique<IPreparedModelImpl>(preparedModel),
            pm_remote.InitWithNewPipeAndPassReceiver());

        auto remote =
            mojo::Remote<T_IPreparedModelCallback>(std::move(pending_remote));
        remote->notify(status, std::move(pm_remote));
      };
  task_runner->PostTask(
      FROM_HERE,
      ::base::BindOnce(fn, std::move(pending_remote), status, preparedModel));

  return hardware::Void();
}

template <typename T_IPreparedModelCallback>
hardware::Return<void> notify_1_2_base(
    V1_0::ErrorStatus status,
    const sp<V1_2::IPreparedModel>& preparedModel,
    mojo::PendingRemote<T_IPreparedModelCallback>& pending_remote,
    scoped_refptr<::base::SequencedTaskRunner>& task_runner) {
  auto fn =
      [](mojo::PendingRemote<T_IPreparedModelCallback> pending_remote,
         V1_0::ErrorStatus status,
         const sp<V1_2::IPreparedModel> preparedModel) {
        mojo::PendingRemote<mojom::IPreparedModel_1_2> pm_remote;

        mojo::MakeSelfOwnedReceiver(
            std::make_unique<IPreparedModel_1_2Impl>(preparedModel),
            pm_remote.InitWithNewPipeAndPassReceiver());

        auto remote =
            mojo::Remote<T_IPreparedModelCallback>(std::move(pending_remote));
        remote->notify_1_2(status, std::move(pm_remote));
      };
  task_runner->PostTask(
      FROM_HERE,
      ::base::BindOnce(fn, std::move(pending_remote), status, preparedModel));

  return hardware::Void();
}

hardware::Return<void> PreparedModelCallbackStub::notify(
    V1_0::ErrorStatus status,
    const sp<V1_0::IPreparedModel>& preparedModel) {
  return notify_base(status, preparedModel, pending_remote_, task_runner_);
}

hardware::Return<void> PreparedModelCallback_1_2Stub::notify(
    V1_0::ErrorStatus status,
    const sp<V1_0::IPreparedModel>& preparedModel) {
  return notify_base(status, preparedModel, pending_remote_, task_runner_);
}

hardware::Return<void> PreparedModelCallback_1_2Stub::notify_1_2(
    V1_0::ErrorStatus status,
    const sp<V1_2::IPreparedModel>& preparedModel) {
  return notify_1_2_base(status, preparedModel, pending_remote_, task_runner_);
}

hardware::Return<void> PreparedModelCallback_1_3Stub::notify(
    V1_0::ErrorStatus status,
    const sp<V1_0::IPreparedModel>& preparedModel) {
  return notify_base(status, preparedModel, pending_remote_, task_runner_);
}

hardware::Return<void> PreparedModelCallback_1_3Stub::notify_1_2(
    V1_0::ErrorStatus status,
    const sp<V1_2::IPreparedModel>& preparedModel) {
  return notify_1_2_base(status, preparedModel, pending_remote_, task_runner_);
}

hardware::Return<void> PreparedModelCallback_1_3Stub::notify_1_3(
    V1_3::ErrorStatus status,
    const sp<V1_3::IPreparedModel>& preparedModel) {
  auto fn =
      [](mojo::PendingRemote<mojom::IPreparedModelCallback_1_3> pending_remote,
         V1_3::ErrorStatus status,
         const sp<V1_3::IPreparedModel> preparedModel) {
        mojo::PendingRemote<mojom::IPreparedModel_1_3> pm_remote;

        mojo::MakeSelfOwnedReceiver(
            std::make_unique<IPreparedModel_1_3Impl>(preparedModel),
            pm_remote.InitWithNewPipeAndPassReceiver());

        auto remote = mojo::Remote<mojom::IPreparedModelCallback_1_3>(
            std::move(pending_remote));
        remote->notify_1_3(status, std::move(pm_remote));
      };
  task_runner_->PostTask(
      FROM_HERE,
      ::base::BindOnce(fn, std::move(pending_remote_), status, preparedModel));

  return hardware::Void();
}

template <typename T_IPreparedModel>
hardware::Return<V1_0::ErrorStatus> execute_base(
    const V1_0::Request& request,
    const sp<V1_0::IExecutionCallback>& callback,
    mojo::PendingRemote<T_IPreparedModel>& pending_remote,
    scoped_refptr<::base::SequencedTaskRunner>& task_runner) {
  auto error_status = V1_0::ErrorStatus::NONE;

  mojo::PendingRemote<mojom::IExecutionCallback> ec_remote;
  auto pending_receiver = ec_remote.InitWithNewPipeAndPassReceiver();

  auto fn = [](mojo::PendingReceiver<mojom::IExecutionCallback> receiver,
               const sp<V1_0::IExecutionCallback> callback) {
    mojo::MakeSelfOwnedReceiver(
        std::make_unique<IExecutionCallbackImpl>(callback),
        std::move(receiver));
  };
  task_runner->PostTask(
      FROM_HERE,
      ::base::BindOnce(fn, std::move(pending_receiver), std::move(callback)));

  auto remote = mojo::Remote<T_IPreparedModel>(std::move(pending_remote));
  remote->execute(request, std::move(ec_remote), &error_status);
  pending_remote = remote.Unbind();

  return error_status;
}

template <typename T_IPreparedModel>
hardware::Return<V1_0::ErrorStatus> execute_1_2_base(
    const V1_0::Request& request,
    V1_2::MeasureTiming measure,
    const sp<V1_2::IExecutionCallback>& callback,
    mojo::PendingRemote<T_IPreparedModel>& pending_remote,
    scoped_refptr<::base::SequencedTaskRunner>& task_runner) {
  auto error_status = V1_0::ErrorStatus::NONE;

  mojo::PendingRemote<mojom::IExecutionCallback_1_2> ec_remote;
  auto pending_receiver = ec_remote.InitWithNewPipeAndPassReceiver();

  auto fn = [](mojo::PendingReceiver<mojom::IExecutionCallback_1_2> receiver,
               const sp<V1_2::IExecutionCallback> callback) {
    mojo::MakeSelfOwnedReceiver(
        std::make_unique<IExecutionCallback_1_2Impl>(callback),
        std::move(receiver));
  };
  task_runner->PostTask(
      FROM_HERE,
      ::base::BindOnce(fn, std::move(pending_receiver), std::move(callback)));

  auto remote = mojo::Remote<T_IPreparedModel>(std::move(pending_remote));
  remote->execute_1_2(request, measure, std::move(ec_remote), &error_status);
  pending_remote = remote.Unbind();

  return error_status;
}

hardware::Return<V1_0::ErrorStatus> PreparedModelStub::execute(
    const V1_0::Request& request,
    const sp<V1_0::IExecutionCallback>& callback) {
  return execute_base(request, callback, pending_remote_, task_runner_);
}

hardware::Return<V1_0::ErrorStatus> PreparedModel_1_2Stub::execute(
    const V1_0::Request& request,
    const sp<V1_0::IExecutionCallback>& callback) {
  return execute_base(request, callback, pending_remote_, task_runner_);
}

hardware::Return<V1_0::ErrorStatus> PreparedModel_1_2Stub::execute_1_2(
    const V1_0::Request& request,
    V1_2::MeasureTiming measure,
    const sp<V1_2::IExecutionCallback>& callback) {
  return execute_1_2_base(request, measure, callback, pending_remote_,
                          task_runner_);
}

hardware::Return<V1_0::ErrorStatus> PreparedModel_1_3Stub::execute(
    const V1_0::Request& request,
    const sp<V1_0::IExecutionCallback>& callback) {
  return execute_base(request, callback, pending_remote_, task_runner_);
}

hardware::Return<V1_0::ErrorStatus> PreparedModel_1_3Stub::execute_1_2(
    const V1_0::Request& request,
    V1_2::MeasureTiming measure,
    const sp<V1_2::IExecutionCallback>& callback) {
  return execute_1_2_base(request, measure, callback, pending_remote_,
                          task_runner_);
}

hardware::Return<V1_3::ErrorStatus> PreparedModel_1_3Stub::execute_1_3(
    const V1_3::Request& request,
    V1_2::MeasureTiming measure,
    const V1_3::OptionalTimePoint& deadline,
    const V1_3::OptionalTimeoutDuration& loopTimeoutDuration,
    const sp<V1_3::IExecutionCallback>& callback) {
  auto error_status = V1_3::ErrorStatus::NONE;

  mojo::PendingRemote<mojom::IExecutionCallback_1_3> ec_remote;
  auto pending_receiver = ec_remote.InitWithNewPipeAndPassReceiver();

  auto fn = [](mojo::PendingReceiver<mojom::IExecutionCallback_1_3> receiver,
               const sp<V1_3::IExecutionCallback> callback) {
    mojo::MakeSelfOwnedReceiver(
        std::make_unique<IExecutionCallback_1_3Impl>(callback),
        std::move(receiver));
  };
  task_runner_->PostTask(
      FROM_HERE,
      ::base::BindOnce(fn, std::move(pending_receiver), std::move(callback)));

  auto remote =
      mojo::Remote<mojom::IPreparedModel_1_3>(std::move(pending_remote_));
  remote->execute_1_3(request, measure, deadline, loopTimeoutDuration,
                      std::move(ec_remote), &error_status);
  pending_remote_ = remote.Unbind();

  return error_status;
}

template <typename T_IPreparedModel>
hardware::Return<void> executeSynchronously_base(
    const V1_0::Request& request,
    V1_2::MeasureTiming measure,
    V1_2::IPreparedModel::executeSynchronously_cb& cb,
    mojo::PendingRemote<T_IPreparedModel>& pending_remote) {
  auto remote = mojo::Remote<T_IPreparedModel>(std::move(pending_remote));
  V1_0::ErrorStatus status;
  std::vector<V1_2::OutputShape> outputShapes;
  V1_2::Timing timing;
  remote->executeSynchronously(request, measure, &status, &outputShapes,
                               &timing);
  cb(status, outputShapes, timing);
  pending_remote = remote.Unbind();
  return hardware::Void();
}

hardware::Return<void> PreparedModel_1_2Stub::executeSynchronously(
    const V1_0::Request& request,
    V1_2::MeasureTiming measure,
    executeSynchronously_cb cb) {
  return executeSynchronously_base(request, measure, cb, pending_remote_);
}

hardware::Return<void> PreparedModel_1_3Stub::executeSynchronously(
    const V1_0::Request& request,
    V1_2::MeasureTiming measure,
    executeSynchronously_cb cb) {
  return executeSynchronously_base(request, measure, cb, pending_remote_);
}

hardware::Return<void> PreparedModel_1_3Stub::executeSynchronously_1_3(
    const V1_3::Request& request,
    V1_2::MeasureTiming measure,
    const V1_3::OptionalTimePoint& deadline,
    const V1_3::OptionalTimeoutDuration& loopTimeoutDuration,
    executeSynchronously_1_3_cb cb) {
  auto remote =
      mojo::Remote<mojom::IPreparedModel_1_3>(std::move(pending_remote_));
  V1_3::ErrorStatus status;
  std::vector<V1_2::OutputShape> outputShapes;
  V1_2::Timing timing;
  remote->executeSynchronously_1_3(request, measure, deadline,
                                   loopTimeoutDuration, &status, &outputShapes,
                                   &timing);
  cb(status, outputShapes, timing);
  pending_remote_ = remote.Unbind();
  return hardware::Void();
}

hardware::Return<void> PreparedModel_1_2Stub::configureExecutionBurst(
    const ::android::sp<V1_2::IBurstCallback>& callback,
    const ::android::hardware::MQDescriptorSync<V1_2::FmqRequestDatum>&
        requestChannel,
    const ::android::hardware::MQDescriptorSync<V1_2::FmqResultDatum>&
        resultChannel,
    configureExecutionBurst_cb cb) {
  // TODO: burst execution is not supported yet
  LOG(FATAL) << "IPreparedModel::configureExecutionBurst is not supported!";
  return hardware::Void();
}

hardware::Return<void> PreparedModel_1_3Stub::configureExecutionBurst(
    const ::android::sp<V1_2::IBurstCallback>& callback,
    const ::android::hardware::MQDescriptorSync<V1_2::FmqRequestDatum>&
        requestChannel,
    const ::android::hardware::MQDescriptorSync<V1_2::FmqResultDatum>&
        resultChannel,
    configureExecutionBurst_cb cb) {
  // TODO: burst execution is not supported yet
  LOG(FATAL) << "IPreparedModel::configureExecutionBurst is not supported!";
  return hardware::Void();
}

template <typename T_IExecutionCallback>
hardware::Return<void> notify_base(
    V1_0::ErrorStatus status,
    mojo::PendingRemote<T_IExecutionCallback>& pending_remote,
    scoped_refptr<::base::SequencedTaskRunner>& task_runner) {
  auto fn = [](mojo::PendingRemote<T_IExecutionCallback> pending_remote,
               const V1_0::ErrorStatus status) {
    auto remote = mojo::Remote<T_IExecutionCallback>(std::move(pending_remote));
    remote->notify(status);
  };
  task_runner->PostTask(
      FROM_HERE, ::base::BindOnce(fn, std::move(pending_remote), status));

  return hardware::Void();
}

template <typename T_IExecutionCallback>
hardware::Return<void> notify_1_2_base(
    V1_0::ErrorStatus status,
    const ::android::hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
    const V1_2::Timing& timing,
    mojo::PendingRemote<T_IExecutionCallback>& pending_remote,
    scoped_refptr<::base::SequencedTaskRunner>& task_runner) {
  auto fn =
      [](mojo::PendingRemote<T_IExecutionCallback> pending_remote,
         const V1_0::ErrorStatus status,
         const ::android::hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
         const V1_2::Timing& timing) {
        auto remote =
            mojo::Remote<T_IExecutionCallback>(std::move(pending_remote));
        remote->notify_1_2(status, outputShapes, timing);
      };
  task_runner->PostTask(FROM_HERE,
                        ::base::BindOnce(fn, std::move(pending_remote), status,
                                         outputShapes, timing));

  return hardware::Void();
}

hardware::Return<void> ExecutionCallbackStub::notify(V1_0::ErrorStatus status) {
  return notify_base(status, pending_remote_, task_runner_);
}

hardware::Return<void> ExecutionCallback_1_2Stub::notify(
    V1_0::ErrorStatus status) {
  return notify_base(status, pending_remote_, task_runner_);
}

hardware::Return<void> ExecutionCallback_1_2Stub::notify_1_2(
    V1_0::ErrorStatus status,
    const ::android::hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
    const V1_2::Timing& timing) {
  return notify_1_2_base(status, outputShapes, timing, pending_remote_,
                         task_runner_);
}

hardware::Return<void> ExecutionCallback_1_3Stub::notify(
    V1_0::ErrorStatus status) {
  return notify_base(status, pending_remote_, task_runner_);
}

hardware::Return<void> ExecutionCallback_1_3Stub::notify_1_2(
    V1_0::ErrorStatus status,
    const ::android::hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
    const V1_2::Timing& timing) {
  return notify_1_2_base(status, outputShapes, timing, pending_remote_,
                         task_runner_);
}

hardware::Return<void> ExecutionCallback_1_3Stub::notify_1_3(
    V1_3::ErrorStatus status,
    const hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
    const V1_2::Timing& timing) {
  auto fn =
      [](mojo::PendingRemote<mojom::IExecutionCallback_1_3> pending_remote,
         const V1_3::ErrorStatus status,
         const ::android::hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
         const V1_2::Timing& timing) {
        auto remote = mojo::Remote<mojom::IExecutionCallback_1_3>(
            std::move(pending_remote));
        remote->notify_1_3(status, outputShapes, timing);
      };
  task_runner_->PostTask(
      FROM_HERE, ::base::BindOnce(fn, std::move(pending_remote_), status,
                                  outputShapes, timing));
  return hardware::Void();
}

hardware::Return<void> PreparedModel_1_3Stub::executeFenced(
    const V1_3::Request& request,
    const hardware::hidl_vec<hardware::hidl_handle>& waitFor,
    V1_2::MeasureTiming measure,
    const V1_3::OptionalTimePoint& deadline,
    const V1_3::OptionalTimeoutDuration& loopTimeoutDuration,
    const V1_3::OptionalTimeoutDuration& duration,
    executeFenced_cb cb) {
  auto remote =
      mojo::Remote<mojom::IPreparedModel_1_3>(std::move(pending_remote_));
  V1_3::ErrorStatus status;
  android::hardware::hidl_handle sync_fence;
  mojo::PendingRemote<chromeos::nnapi::mojom::IFencedExecutionCallback>
      fe_callback;
  remote->executeFenced(request, waitFor, measure, deadline,
                        loopTimeoutDuration, duration, &status, &sync_fence,
                        &fe_callback);
  sp<V1_3::IFencedExecutionCallback> wrapped_callback = nullptr;
  if (status == V1_3::ErrorStatus::NONE) {
    wrapped_callback = sp<V1_3::IFencedExecutionCallback>(
        new FencedExecutionCallbackStub(std::move(fe_callback)));
  }
  cb(status, sync_fence, wrapped_callback);
  pending_remote_ = remote.Unbind();
  return hardware::Void();
}

hardware::Return<void> FencedExecutionCallbackStub::getExecutionInfo(
    getExecutionInfo_cb cb) {
  auto remote =
      mojo::Remote<mojom::IFencedExecutionCallback>(std::move(pending_remote_));
  V1_3::ErrorStatus status;
  V1_2::Timing timingLaunched;
  V1_2::Timing timingFenced;
  remote->getExecutionInfo(&status, &timingLaunched, &timingFenced);
  cb(status, timingLaunched, timingFenced);
  pending_remote_ = remote.Unbind();
  return hardware::Void();
}

}  // namespace nn
}  // namespace android
