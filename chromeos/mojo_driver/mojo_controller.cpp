// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "mojo_controller.h"

#include <base/logging.h>
#include <base/strings/stringprintf.h>
#include <base/task/task_traits.h>
#include <libminijail.h>
#include <mojo/core/embedder/embedder.h>
#include <mojo/public/cpp/bindings/remote.h>
#include <mojo/public/cpp/bindings/self_owned_receiver.h>
#include <mojo/public/cpp/system/invitation.h>
#include <scoped_minijail.h>

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
    LOG(FATAL) << "Failed to spawn worker process";
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
  LOG(INFO) << "Starting to spawn nnapi worker process...";
  DCHECK(worker_pid != nullptr);

  // Start the process.
  ScopedMinijail jail(minijail_new());

  minijail_namespace_ipc(jail.get());
  minijail_namespace_uts(jail.get());
  minijail_namespace_net(jail.get());
  minijail_namespace_cgroups(jail.get());
  minijail_namespace_pids(jail.get());
  minijail_namespace_vfs(jail.get());

  auto mojo_bootstrap_fd =
      channel.remote_endpoint().platform_handle().GetFD().get();

  // Closes the unused FDs in the worker process.
  // We keep the standard FDs here (should all point to `/dev/null`).
  // Also we need to keep the FD used in bootstrapping the mojo connection.
  CHECK(minijail_preserve_fd(jail.get(), STDIN_FILENO, STDIN_FILENO) == 0);
  CHECK(minijail_preserve_fd(jail.get(), STDOUT_FILENO, STDOUT_FILENO) == 0);
  CHECK(minijail_preserve_fd(jail.get(), STDERR_FILENO, STDERR_FILENO) == 0);
  CHECK(minijail_preserve_fd(jail.get(), mojo_bootstrap_fd,
                             mojo_bootstrap_fd) == 0);
  minijail_close_open_fds(jail.get());

  std::string worker_path = "/usr/bin/nnapi_worker";
  std::string fd_argv = ::base::StringPrintf("%d", mojo_bootstrap_fd);

#ifdef STRACE_NNAPI_HAL_IPC_DRIVER
  // We use strace to create the log file to generate seccomp policy only for
  // the nnapi_worker. When we use strace, we do not call
  // minijail_use_seccomp_filter to use seccomp policy in minijail.
  LOG(INFO) << "Running strace on nnapi_worker...";

  std::string strace_path = "/usr/local/bin/strace";
  std::string strace_arg_1 = "-f";
  std::string strace_arg_2 = "-o";
  std::string strace_arg_3 = "/tmp/nnapi_worker_strace.log";
  char* argv[7] = {&strace_path[0],  &strace_arg_1[0], &strace_arg_2[0],
                   &strace_arg_3[0], &worker_path[0],  &fd_argv[0],
                   nullptr};

  if (minijail_run_pid(jail.get(), &strace_path[0], argv, worker_pid) != 0) {
    LOG(FATAL) << "Failed to spawn worker process using minijail";
    return false;
  }
#else
  std::string seccomp_policy_path =
      "/usr/share/policy/nnapi-hal-driver-seccomp.policy";
  char* argv[3] = {&worker_path[0], &fd_argv[0], nullptr};

  minijail_parse_seccomp_filters(jail.get(), &seccomp_policy_path[0]);
  minijail_use_seccomp_filter(jail.get());

  if (minijail_run_pid(jail.get(), &worker_path[0], argv, worker_pid) != 0) {
    LOG(FATAL) << "Failed to spawn worker process using minijail";
    return false;
  }
#endif

  LOG(INFO) << "Worker process spawned successfully!";
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
