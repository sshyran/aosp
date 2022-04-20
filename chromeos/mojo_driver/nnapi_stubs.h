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

class HasSequencedTaskRunner {
 public:
  HasSequencedTaskRunner()
      : task_runner_{::base::SequencedTaskRunnerHandle::Get()} {}

 protected:
  scoped_refptr<::base::SequencedTaskRunner> task_runner_;
};

// Created by IDeviceImpl::prepareModel and passed into
// the Vendor HAL driver's prepareModel() interface. Used
// to pipe the 'notify' method back to the NNAPI delegate.
class PreparedModelCallbackStub : public V1_0::IPreparedModelCallback,
                                  public HasSequencedTaskRunner {
 public:
  PreparedModelCallbackStub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback>
          pm_callback)
      : pending_remote_(std::move(pm_callback)) {}

  hardware::Return<void> notify(V1_0::ErrorStatus status,
                                const sp<V1_0::IPreparedModel>& preparedModel);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback>
      pending_remote_;
};

class PreparedModelCallback_1_2Stub : public V1_2::IPreparedModelCallback,
                                      public HasSequencedTaskRunner {
 public:
  PreparedModelCallback_1_2Stub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_2>
          pm_callback)
      : pending_remote_(std::move(pm_callback)) {}

  hardware::Return<void> notify(V1_0::ErrorStatus status,
                                const sp<V1_0::IPreparedModel>& preparedModel);

  hardware::Return<void> notify_1_2(
      V1_0::ErrorStatus status,
      const sp<V1_2::IPreparedModel>& preparedModel);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_2>
      pending_remote_;
};

// Created by IPreparedModelCallbackImpl::notify() and passed into
// the NNAPI delegate's 'notify' call. Used to call the 'execute'
// method on the worker process.
class PreparedModelStub : public V1_0::IPreparedModel,
                          public HasSequencedTaskRunner {
 public:
  PreparedModelStub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel> pm)
      : pending_remote_(std::move(pm)) {}

  hardware::Return<V1_0::ErrorStatus> execute(
      const V1_0::Request& request,
      const sp<V1_0::IExecutionCallback>& callback);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel> pending_remote_;
};

class PreparedModel_1_2Stub : public V1_2::IPreparedModel,
                              public HasSequencedTaskRunner {
 public:
  PreparedModel_1_2Stub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel_1_2> pm)
      : pending_remote_(std::move(pm)) {}

  hardware::Return<V1_0::ErrorStatus> execute(
      const V1_0::Request& request,
      const sp<V1_0::IExecutionCallback>& callback);

  hardware::Return<V1_0::ErrorStatus> execute_1_2(
      const V1_0::Request& request,
      V1_2::MeasureTiming measure,
      const sp<V1_2::IExecutionCallback>& callback);

  hardware::Return<void> executeSynchronously(const V1_0::Request& request,
                                              V1_2::MeasureTiming measure,
                                              executeSynchronously_cb cb);

  hardware::Return<void> configureExecutionBurst(
      const sp<V1_2::IBurstCallback>& callback,
      const hardware::MQDescriptorSync<V1_2::FmqRequestDatum>& requestChannel,
      const hardware::MQDescriptorSync<V1_2::FmqResultDatum>& resultChannel,
      configureExecutionBurst_cb _hidl_cb);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel_1_2>
      pending_remote_;
};

// Created by IPreparedModelImpl::execute() and passed into
// the Vendor HAL driver's PreparedModel::execute() interface.
// Used to pipe back the 'notify' method back to the NNAPI
// delegate.
class ExecutionCallbackStub : public V1_0::IExecutionCallback,
                              public HasSequencedTaskRunner {
 public:
  ExecutionCallbackStub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback>
          e_callback)
      : pending_remote_(std::move(e_callback)) {}
  hardware::Return<void> notify(V1_0::ErrorStatus status);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback>
      pending_remote_;
};

class ExecutionCallback_1_2Stub : public V1_2::IExecutionCallback,
                                  public HasSequencedTaskRunner {
 public:
  ExecutionCallback_1_2Stub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback_1_2>
          e_callback)
      : pending_remote_(std::move(e_callback)) {}
  hardware::Return<void> notify(V1_0::ErrorStatus status);
  hardware::Return<void> notify_1_2(
      V1_0::ErrorStatus status,
      const hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
      const V1_2::Timing& timing);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback_1_2>
      pending_remote_;
};

// V1_3
class PreparedModelCallback_1_3Stub : public V1_3::IPreparedModelCallback,
                                      public HasSequencedTaskRunner {
 public:
  PreparedModelCallback_1_3Stub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_3>
          pm_callback)
      : pending_remote_(std::move(pm_callback)) {}

  hardware::Return<void> notify(V1_0::ErrorStatus status,
                                const sp<V1_0::IPreparedModel>& preparedModel);
  hardware::Return<void> notify_1_2(
      V1_0::ErrorStatus status,
      const sp<V1_2::IPreparedModel>& preparedModel);
  hardware::Return<void> notify_1_3(
      V1_3::ErrorStatus status,
      const sp<V1_3::IPreparedModel>& preparedModel);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModelCallback_1_3>
      pending_remote_;
};

class ExecutionCallback_1_3Stub : public V1_3::IExecutionCallback,
                                  public HasSequencedTaskRunner {
 public:
  ExecutionCallback_1_3Stub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback_1_3>
          e_callback)
      : pending_remote_(std::move(e_callback)) {}
  hardware::Return<void> notify(V1_0::ErrorStatus status);
  hardware::Return<void> notify_1_2(
      V1_0::ErrorStatus status,
      const hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
      const V1_2::Timing& timing);
  hardware::Return<void> notify_1_3(
      V1_3::ErrorStatus status,
      const hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
      const V1_2::Timing& timing);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IExecutionCallback_1_3>
      pending_remote_;
};

class PreparedModel_1_3Stub : public V1_3::IPreparedModel,
                              public HasSequencedTaskRunner {
 public:
  PreparedModel_1_3Stub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel_1_3> pm)
      : pending_remote_(std::move(pm)) {}

  hardware::Return<V1_0::ErrorStatus> execute(
      const V1_0::Request& request,
      const sp<V1_0::IExecutionCallback>& callback) override;
  hardware::Return<V1_0::ErrorStatus> execute_1_2(
      const V1_0::Request& request,
      V1_2::MeasureTiming measure,
      const sp<V1_2::IExecutionCallback>& callback) override;

  hardware::Return<void> executeSynchronously(
      const V1_0::Request& request,
      V1_2::MeasureTiming measure,
      executeSynchronously_cb cb) override;

  hardware::Return<void> configureExecutionBurst(
      const sp<V1_2::IBurstCallback>& callback,
      const hardware::MQDescriptorSync<V1_2::FmqRequestDatum>& requestChannel,
      const hardware::MQDescriptorSync<V1_2::FmqResultDatum>& resultChannel,
      configureExecutionBurst_cb _hidl_cb) override;
  hardware::Return<V1_3::ErrorStatus> execute_1_3(
      const V1_3::Request& request,
      V1_2::MeasureTiming measure,
      const V1_3::OptionalTimePoint& deadline,
      const V1_3::OptionalTimeoutDuration& loopTimeoutDuration,
      const sp<V1_3::IExecutionCallback>& callback) override;
  hardware::Return<void> executeSynchronously_1_3(
      const V1_3::Request& request,
      V1_2::MeasureTiming measure,
      const V1_3::OptionalTimePoint& deadline,
      const V1_3::OptionalTimeoutDuration& loopTimeoutDuration,
      executeSynchronously_1_3_cb cb) override;
  hardware::Return<void> executeFenced(
      const V1_3::Request& request,
      const hardware::hidl_vec<hardware::hidl_handle>& waitFor,
      V1_2::MeasureTiming measure,
      const V1_3::OptionalTimePoint& deadline,
      const V1_3::OptionalTimeoutDuration& loopTimeoutDuration,
      const V1_3::OptionalTimeoutDuration& duration,
      executeFenced_cb cb) override;

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IPreparedModel_1_3>
      pending_remote_;
};

class FencedExecutionCallbackStub : public V1_3::IFencedExecutionCallback,
                                    public HasSequencedTaskRunner {
 public:
  FencedExecutionCallbackStub(
      mojo::PendingRemote<chromeos::nnapi::mojom::IFencedExecutionCallback>
          e_callback)
      : pending_remote_(std::move(e_callback)) {}
  hardware::Return<void> getExecutionInfo(getExecutionInfo_cb cb);

 private:
  mojo::PendingRemote<chromeos::nnapi::mojom::IFencedExecutionCallback>
      pending_remote_;
};

}  // namespace nn
}  // namespace android

#endif  // ML_NN_CHROMEOS_NNAPI_WRAPPERS_H_
