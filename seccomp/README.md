This directory contains a list of seccomp policy files for NNAPI HAL drivers. There are situations where we need to generate new or update existing seccomp policies files: support a new nnapi hal driver, upgrade an existing hal driver, or support an existing hal driver on a new architecture.

There are a couple of [ways](https://chromium.googlesource.com/chromiumos/docs/+/HEAD/sandboxing.md#seccomp-filters) to generate seccomp policy files. In order to generate the seccomp policies efficiently, we provide a mechanism which uses `strace` under the hood to help generate the seccomp policies.

Follow the steps below to generate a seccomp policy file:

1. For each target architecture (arm, arm64 or amd) to be supported, select a board and build a test image for it, then install the test image on the DUT.

2. Build `aosp-frameworks-ml-nn` and `aosp-frameworks-ml-nn-vts` with the use flag `strace_ipc_driver` turned on.
```
USE="-vendor-nnhal ipc-driver strace_ipc_driver" emerge-${BOARD} aosp-frameworks-ml-nn  aosp-frameworks-ml-nn-vts
```
Then deploy `aosp-frameworks-ml-nn` and `aosp-frameworks-ml-nn-vts` to the DUT.

In this step, the ebuild will define a macro `STRACE_NNAPI_HAL_IPC_DRIVER` if the use flag `strace_ipc_driver` is turned on. Then the MojoController will invoke `strace` to trace the system calls triggered by nnapi_worker process, and also it skips using seccomp policy which otherwise will be used by default.

3. Execute nnapi vts test, e.g. `cros_nnapi_vts_1_0`. The output strace logs can be found in `/tmp/nnapi_worker_strace.log`.

4. Generate the seccomp policy from strace logs.
Download the strace log file from the DUT to the desktop where we have the `chromiumos` workspace, we need the tool the place `~/chromiumos/src/aosp/external/minijail/tools/generate_seccomp_policy.py`, which can also be found [here](https://android.googlesource.com/platform/external/minijail/+/HEAD/tools/generate_seccomp_policy.py).

Execute the command below to get the seccomp policy file.
~/chromiumos/src/aosp/external/minijail/tools/generate_seccomp_policy.py ${PATH_TO_STRACE_LOG} > ${PATH_TO_OUTPUT_SECCOMP_FILE}


5. Create or update the relevant seccomp policy file in this directory after you have reviewed the change and make sure the updates all make sense.

A common problem of using the strace approach is the the strace log will include some system calls, especially the `execve` system call, at the beginning which is before the `nnapi_worker` itself is running, and `execve` is a dangerous system call, so we need to remove them if they are not needed by `nnapi_worker` itself.
For example, there following is the starting section from an strace log, `execve` and `access` are not needed in the final seccomp policy:
```
5     execve("/usr/bin/nnapi_worker", ["/usr/bin/nnapi_worker", "9"], 0x7ffefe451730 /* 25 vars */) = 0
5     brk(NULL)                         = 0x57011cc7e000
5     access("/etc/ld.so.preload", R_OK) = -1 ENOENT (No such file or directory)
```

Then you can rebuild and deploy the packages and run the vts test again to verify the update seccomp policy is sufficient for the hal driver run successfully.
```
USE="-vendor-nnhal ipc-driver" emerge-${BOARD} aosp-frameworks-ml-nn  aosp-frameworks-ml-nn-vts
```

If the seccomp file was correct, the vts test should have passed successfully, and the updated seccomp policy is ready to go.
