// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "nnapi_stubs.h"

#include <mojo/public/cpp/bindings/self_owned_receiver.h>

namespace android {
namespace nn {

using namespace chromeos::nnapi;

hardware::Return<void> PreparedModelCallbackStub::notify(
    V1_0::ErrorStatus status,
    const sp<V1_0::IPreparedModel>& preparedModel) {
  auto fn =
      [](mojo::PendingRemote<mojom::IPreparedModelCallback> pending_remote,
         V1_0::ErrorStatus status,
         const sp<V1_0::IPreparedModel> preparedModel) {
        mojo::PendingRemote<mojom::IPreparedModel> pm_remote;

        mojo::MakeSelfOwnedReceiver(
            std::make_unique<IPreparedModelImpl>(preparedModel),
            pm_remote.InitWithNewPipeAndPassReceiver());

        auto remote = mojo::Remote<mojom::IPreparedModelCallback>(
            std::move(pending_remote));
        remote->notify(status, std::move(pm_remote));
      };
  task_runner_->PostTask(
      FROM_HERE,
      ::base::BindOnce(fn, std::move(pending_remote_), status, preparedModel));

  return hardware::Void();
}

hardware::Return<V1_0::ErrorStatus> PreparedModelStub::execute(
    const V1_0::Request& request,
    const sp<V1_0::IExecutionCallback>& callback) {
  auto error_status = V1_0::ErrorStatus::NONE;

  mojo::PendingRemote<mojom::IExecutionCallback> ec_remote;
  auto pending_receiver = ec_remote.InitWithNewPipeAndPassReceiver();

  auto fn = [](mojo::PendingReceiver<mojom::IExecutionCallback> receiver,
               const sp<V1_0::IExecutionCallback> callback) {
    mojo::MakeSelfOwnedReceiver(
        std::make_unique<IExecutionCallbackImpl>(callback),
        std::move(receiver));
  };
  task_runner_->PostTask(
      FROM_HERE,
      ::base::BindOnce(fn, std::move(pending_receiver), std::move(callback)));

  auto remote = mojo::Remote<mojom::IPreparedModel>(std::move(pending_remote_));
  remote->execute(request, std::move(ec_remote), &error_status);
  pending_remote_ = remote.Unbind();

  return error_status;
}

hardware::Return<void> ExecutionCallbackStub::notify(V1_0::ErrorStatus status) {
  auto fn = [](mojo::PendingRemote<mojom::IExecutionCallback> pending_remote,
               const V1_0::ErrorStatus status) {
    auto remote =
        mojo::Remote<mojom::IExecutionCallback>(std::move(pending_remote));
    remote->notify(status);
  };
  task_runner_->PostTask(
      FROM_HERE, ::base::BindOnce(fn, std::move(pending_remote_), status));

  return hardware::Void();
}

}  // namespace nn
}  // namespace android
