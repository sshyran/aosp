// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ML_NN_CHROMEOS_MOJO_CONTROLLER_H_
#define ML_NN_CHROMEOS_MOJO_CONTROLLER_H_

#include <HalInterfaces.h>
#include <base/threading/thread.h>
#include <mojo/core/embedder/scoped_ipc_support.h>
#include <mojo/public/cpp/platform/platform_channel.h>
#include <nnapi/hal/1.0/Device.h>

#include "nnapi_hal_impl.h"

namespace android {
namespace nn {

// This class contains the Mojo implementations
// of the V1_3::IDevice interface. Ideally we would fold
// this into the IPCDriver class, but this isn't
// possible due to the incompatability of ChromeOS
// and Android headers. This class is also responsible
// for spawning the remote HAL driver process, which is
// done upon construction.
class MojoController {
 public:
  MojoController();

  hardware::Return<void> getCapabilities_1_3(
      hardware::neuralnetworks::V1_3::IDevice::getCapabilities_1_3_cb cb);
  hardware::Return<V1_0::ErrorStatus> prepareModel(
      const V1_0::Model& model,
      const sp<V1_0::IPreparedModelCallback>& callback);

 private:
  void SendMojoInvitationAndGetRemote(pid_t child_pid,
                                      mojo::PlatformChannel channel);
  bool SpawnWorkerProcessAndGetPid(const mojo::PlatformChannel& channel,
                                   pid_t* worker_pid);

  mojo::Remote<chromeos::nnapi::mojom::IDevice> remote_;
  std::unique_ptr<mojo::core::ScopedIPCSupport> ipc_support_;
  ::base::Thread ipc_thread_;
};

}  // namespace nn
}  // namespace android

#endif  // ML_NN_CHROMEOS_MOJO_CONTROLLER_H_
