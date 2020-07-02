# NNAPI on Chrome OS

This repository contains a port of the Android
[Neural Networks API](https://developer.android.com/ndk/guides/neuralnetworks)
for use on Chrome OS.
On Chrome OS NNAPI is used as an abstraction layer for hardware acceleration of
AI workloads, allowing vendors to develop a specific
[Neural Networks HAL](https://source.android.com/devices/neural-networks)
driver using a framework that is shared with Android.

NNAPI will be used as a [tensorflow lite](https://www.tensorflow.org/lite)
[delegate](https://www.tensorflow.org/lite/performance/nnapi), most likely
invoked by the
[ML Service](https://chromium.googlesource.com/chromiumos/platform2/+/master/ml/README.md).

## Implementation Details

As of time of writing, we are using
[NNAPI 1.3](https://developer.android.com/preview/features#nnapi),
which is being released with
[Android 11](https://developer.android.com/android11).

However the following features are not yet available on Chrome OS:

1. [AHardwareBuffer](https://source.android.com/devices/neural-networks/ahardwarebuffer)
: HALs will be loaded in process, and do not require this type of shared memory.
1. [Vendor Extensions](https://source.android.com/devices/neural-networks/vendor-extensions)
: There is a outstanding TODO to determine the need for Chrome OS to support
thee, and how that might be done.

The required Android system libraries have also either been ported to, or
re-implemented, on Chrome OS. This list includes:

1. [base](https://chromium.googlesource.com/aosp/platform/system/core/base/):
Only the required functionality used by NNAPI.
1. [libcutils](https://chromium.googlesource.com/aosp/platform/system/core/libcutils/)
1. [liblog](https://chromium.googlesource.com/aosp/platform/system/core/liblog/)
1. [libutils](https://chromium.googlesource.com/aosp/platform/system/core/libutils/)
1. [libfmq](https://chromium.googlesource.com/aosp/platform/system/libfmq/)
1. [libhidl](https://chromium.googlesource.com/aosp/platform/system/libhidl/)

This functionality is implemented in the shared library
[nnapi-support.so](https://chromium.googlesource.com/chromiumos/platform2/+/HEAD/nnapi).
Vendor HALS should link in this library (you can follow
[this](https://chromium.googlesource.com/aosp/platform/frameworks/ml/+/refs/heads/master/nn/BUILD.gn#74)
example).

## Building NNAPI

NNAPI can be built by using the
[USE flag](https://wiki.gentoo.org/wiki/USE_flag) "nnapi", e.g.

```bash
$ export BOARD=<your board>
$ setup_board --board=${BOARD}
$ USE="nnapi" ./setup_packages --board=${BOARD}
$ USE="nnapi" ./build_image --board=${BOARD} test
```

This will build NNAPI, as well as a
[sample CPU implementation](https://chromium.googlesource.com/aosp/platform/frameworks/ml/+/refs/heads/master/nn/BUILD.gn#509)
of a NN HAL.

If you build a test image, you can use a the sample executable `ml_cmdline` to
verify that everything was built and deployed correctly.

```bash
$ ssh <DUT IP>
localhost ~ # ml_cmdline --nnapi
Adding 1 and 4 with NNAPI
INFO: Initialized TensorFlow Lite runtime.
INFO: Created TensorFlow Lite delegate for NNAPI.
Status: OK
Sum: 5
```


## Authoring an NN HAL

The basics of authoring a vendor HAL require 3 things.

1. Disable the in built sample CPU HAL, by specifying the USE flag
`vendor-nnhal`.

1. The vendor HAL must install a shared library named `libvendor-nn-hal.so` to
the board image. The NNAPI implementation `libneuralnetworks.so` is configured
to load a shared library with this name.

1. The entry point for the vendor NN HAL will be the symbol
[android::hardware::neuralnetworks::V1_0::IDevice::getService](https://chromium.googlesource.com/aosp/platform/frameworks/ml/+/refs/heads/master/nn/chromeos/sampledriver.cpp#14), which will be called to register the HAL.

Remember that the HAL will be loaded into the same process as NNAPI, so there will be no use of HardwareBuffers or Android IPC.

## Debugging

TODO, provide instructions for

1. Enabling logging.
2. Debugging shared library loading issues.
3. Running tast tests on a DUT.

## Testing

TODO, provide instructions for

1. The label_image tensorflow sample.
1. The tensorflow benchmarking tool.
1. The Chrome OS ML benchmarking tool.
