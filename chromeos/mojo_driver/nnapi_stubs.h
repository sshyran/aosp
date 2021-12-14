// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ML_NN_CHROMEOS_NNAPI_WRAPPERS_H_
#define ML_NN_CHROMEOS_NNAPI_WRAPPERS_H_

#include <base/memory/weak_ptr.h>

#include "nnapi_hal_impl.h"

// These classes are stub implementations of the NNAPI HAL
// interfaces which wrap around a Mojo remote. They are needed
// when passing a Mojo remote into an NNAPI method.

namespace android {
namespace nn {

// Created by IDeviceImpl::prepareModel and passed into
// the Vendor HAL driver's prepareModel() interface. Used
// to pipe the 'notify' method back to the NNAPI delegate.
class PreparedModelCallbackStub : public V1_0::IPreparedModelCallback {
 public:
  PreparedModelCallbackStub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback>
          pm_callback)
      : pending_remote_(std::move(pm_callback)) {
    task_runner_ = ::base::SequencedTaskRunnerHandle::Get();
  }

  hardware::Return<void> notify(V1_0::ErrorStatus status,
                                const sp<V1_0::IPreparedModel>& preparedModel);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback>
      pending_remote_;
  scoped_refptr<::base::SequencedTaskRunner> task_runner_;
};

// Created by IPreparedModelCallbackImpl::notify() and passed into
// the NNAPI delegate's 'notify' call. Used to call the 'execute'
// method on the worker process.
class PreparedModelStub : public V1_0::IPreparedModel {
 public:
  PreparedModelStub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel> pm)
      : pending_remote_(std::move(pm)) {
    task_runner_ = ::base::SequencedTaskRunnerHandle::Get();
  }

  hardware::Return<V1_0::ErrorStatus> execute(
      const V1_0::Request& request,
      const sp<V1_0::IExecutionCallback>& callback);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel> pending_remote_;
  scoped_refptr<::base::SequencedTaskRunner> task_runner_;
};

// Created by IPreparedModelImpl::execute() and passed into
// the Vendor HAL driver's PreparedModel::execute() interface.
// Used to pipe back the 'notify' method back to the NNAPI
// delegate.
class ExecutionCallbackStub : public V1_0::IExecutionCallback {
 public:
  ExecutionCallbackStub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback>
          e_callback)
      : pending_remote_(std::move(e_callback)) {
    task_runner_ = ::base::SequencedTaskRunnerHandle::Get();
  }
  hardware::Return<void> notify(V1_0::ErrorStatus status);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback>
      pending_remote_;
  scoped_refptr<::base::SequencedTaskRunner> task_runner_;
};

}  // namespace nn
}  // namespace android

#endif  // ML_NN_CHROMEOS_NNAPI_WRAPPERS_H_
