// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "mojo_controller.h"

#include <base/strings/stringprintf.h>
#include <base/task/task_traits.h>
#include <mojo/core/embedder/embedder.h>
#include <mojo/public/cpp/bindings/remote.h>
#include <mojo/public/cpp/bindings/self_owned_receiver.h>
#include <mojo/public/cpp/system/invitation.h>

#include "nnapi_hal_impl.h"

namespace android {
namespace nn {

using namespace chromeos::nnapi;

MojoController::MojoController() : ipc_thread_("IpcThread") {
  ipc_thread_.StartWithOptions(
      ::base::Thread::Options(::base::MessagePumpType::IO, 0));

  mojo::core::Init();

  ipc_support_ = std::make_unique<mojo::core::ScopedIPCSupport>(
      ipc_thread_.task_runner(),
      mojo::core::ScopedIPCSupport::ShutdownPolicy::CLEAN);

  pid_t worker_pid;
  mojo::PlatformChannel channel;
  if (!SpawnWorkerProcessAndGetPid(channel, &worker_pid)) {
    LOG(ERROR) << "Failed to spawn worker process";
  } else {
    LOG(INFO) << "Spawned worker process: " << worker_pid;
  }

  MojoController::SendMojoInvitationAndGetRemote(worker_pid,
                                                 std::move(channel));
}

void MojoController::SendMojoInvitationAndGetRemote(
    pid_t child_pid,
    mojo::PlatformChannel channel) {
  // Send the Mojo invitation to the worker process.
  mojo::OutgoingInvitation invitation;
  mojo::ScopedMessagePipeHandle pipe =
      invitation.AttachMessagePipe("mojo_driver");

  remote_ = mojo::Remote<mojom::IDevice>(
      mojo::PendingRemote<mojom::IDevice>(std::move(pipe), 0u /* version */));

  mojo::OutgoingInvitation::Send(std::move(invitation), child_pid,
                                 channel.TakeLocalEndpoint());
  remote_.set_disconnect_handler(::base::BindOnce(
      [](pid_t child) {
        LOG(ERROR) << "remote_.disconnect_handler";
        kill(child, SIGKILL);
      },
      child_pid));
}

bool MojoController::SpawnWorkerProcessAndGetPid(
    const mojo::PlatformChannel& channel,
    pid_t* worker_pid) {
  DCHECK(worker_pid != nullptr);

  auto mojo_bootstrap_fd =
      channel.remote_endpoint().platform_handle().GetFD().get();

  std::string worker_path = "/usr/bin/nnapi_worker";
  std::string fd_argv = ::base::StringPrintf("%d", mojo_bootstrap_fd);

  char* argv[3] = {&worker_path[0], &fd_argv[0], nullptr};

  // TODO(b/222592905): Replace with libminijail and proper sandbox
  if ((*worker_pid = fork()) == 0) {
    int result = execv(&worker_path[0], argv);
    if (result < 0) {
      LOG(FATAL) << "Failed to spawn worker process";
      LOG(ERROR) << "FAILED" << result;
      perror("execve 1 fail");
      exit(0);
    }
  }

  return true;
}

hardware::Return<void> MojoController::getCapabilities_1_3(
    hardware::neuralnetworks::V1_3::IDevice::getCapabilities_1_3_cb cb) {
  V1_3::Capabilities cap;
  V1_0::ErrorStatus status;
  remote_->getCapabilities(&status, &cap);
  cb(static_cast<V1_3::ErrorStatus>(status), cap);
  return hardware::Void();
}

hardware::Return<V1_0::ErrorStatus> MojoController::prepareModel(
    const V1_0::Model& model,
    const sp<V1_0::IPreparedModelCallback>& callback) {
  V1_0::ErrorStatus error_status;
  mojo::PendingRemote<mojom::IPreparedModelCallback> pmc_remote;
  auto receiver = pmc_remote.InitWithNewPipeAndPassReceiver();

  auto fn = [](mojo::PendingReceiver<mojom::IPreparedModelCallback> receiver,
               const sp<V1_0::IPreparedModelCallback>& callback) {
    mojo::MakeSelfOwnedReceiver(
        std::make_unique<IPreparedModelCallbackImpl>(callback),
        std::move(receiver));
  };
  ipc_thread_.task_runner()->PostTask(
      FROM_HERE,
      ::base::BindOnce(fn, std::move(receiver), std::move(callback)));

  remote_->prepareModel(model, std::move(pmc_remote), &error_status);

  return error_status;
}

}  // namespace nn
}  // namespace android
