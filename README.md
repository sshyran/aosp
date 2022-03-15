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
[ML Service](https://chromium.googlesource.com/chromiumos/platform2/+/HEAD/ml/README.md).

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
[this](https://chromium.googlesource.com/aosp/platform/frameworks/ml/+/refs/heads/main/BUILD.gn#82)
example).

## Building NNAPI

NNAPI can be built by using the
[USE flag](https://wiki.gentoo.org/wiki/USE_flag) "nnapi", e.g.

```bash
$ export BOARD=<your board>
$ setup_board --board=${BOARD}
$ USE="nnapi" ./build_packages --board=${BOARD}
$ USE="nnapi" ./build_image --board=${BOARD} test
```

This will build NNAPI, as well as a
[sample CPU implementation](https://chromium.googlesource.com/aosp/platform/frameworks/ml/+/refs/heads/main/BUILD.gn#662)
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

The basics of authoring a vendor HAL require 4 things.

1. Disable the in built sample CPU HAL, by specifying the USE flag
`vendor-nnhal`.

1. The `aosp-frameworks-ml-nn` will install `libvendor-nn-hal.so` and it will load the HAL provided by the vendor. The `libvendor-nn-hal.so` is the entry for loading different drivers in system, default implementation will try to require `libfull-driver.so`; Other drivers like `libxnn-driver.so` and `libminimal-driver.so` are available when passing `USE=xnnpack` and `USE=minimal` while building;
The NNAPI implementation `libneuralnetworks.so` is configured
to load a shared library with this name.

1. The entry point for the vendor NN HAL will be the symbol
[android::hardware::neuralnetworks::V1_0::IDevice::getService](https://chromium.googlesource.com/aosp/platform/frameworks/ml/+/refs/heads/main/chromeos/sampledriver.cpp#70), which will be called to register the HAL.

1. For each driver's implementation, you need to inherit from `hal::IDevice` and implemente a class that contains the driver logic (See [SampleDriverFull.cpp](https://chromium.googlesource.com/aosp/platform/frameworks/ml/+/refs/heads/main/driver/sample/SampleDriverFull.cpp) for a better understanding), and export a function named `[get_driver]`(https://chromium.googlesource.com/aosp/platform/frameworks/ml/+/refs/heads/main/driver/sample/SampleDriverFull.cpp#28) that will handle the logic of initialization of a driver and return a `void *`; This function will be used in `getService` that will handle the register driver logic.

1. Successful execution of the supplied test suites (See [Testing an NN HAL](#testing-an-nn-hal)).

1. The default NN HAL provides a set of drivers (`full driver`, `minimal driver` and `xnnpack driver`) and the availability depends on the host.

1. By default, the system will only enable `full driver` and if you want to specify any other drivers, you can set an environmental variable `DRIVERS` to change this behavior (Seperated by ":"):
```bash
export DRIVERS="xnnpack:minimal"
```

1. The mapping for each driver's shared library and its name are stored at `/etc/env.d/drivers` by default; You can modify it in case you want to install a new driver / change a driver name. The default config is (Seperated by `\n` and `:`):
```
full:libfull-driver.so
default:libfull-driver.so
xnnpack:libxnn-driver.so
minimal:libminimal-driver.so
```

Remember that the HAL will be loaded into the same process as NNAPI, so there will be no use of HardwareBuffers or Android IPC.

### Testing an NN HAL

We provide a set of tools to verify the correct functioning of a vendor HAL. To
use them, follow these steps.

1. Build `chromeos-base/aosp-frameworks-ml-nn-vts` and `cros deploy` to your DUT.
   You may need to use `--root=/usr/local` depending on disk space.

1. Check that the following executables are now available on your DUT:
   * Vendor Test Suites. These test the HAL directly through the IDevice
     interface.
     * `/usr/bin/cros_nnapi_vts_1_0`
     * `/usr/bin/cros_nnapi_vts_1_1`
     * `/usr/bin/cros_nnapi_vts_1_2`
     * `/usr/bin/cros_nnapi_vts_1_3`
   * Compatability Test Suite. This tests the HAL via the NNAPI public interface
     (`ANeuralNetworks_*`)
     * `/usr/bin/cros_nnapi_cts`

2. These are GTest based executables. Run them, and all the tests should pass.
   ```bash
   $ ssh <DUT IP>
   (DUT) $ export ANDROID_LOG_TAGS="*:f" # This will suppress excess logging
   (DUT) $ cros_nnapi_cts
   [==========] Running 32124 tests from 33 test suites.
   [----------] Global test environment set-up.
   [----------] 2 tests from ControlFlowTest
   [ RUN      ] ControlFlowTest.InfiniteLoop
   <snip>
   [       OK ] TestRandomGraph/RandomGraphTest.LargeGraph_TENSOR_BOOL8_Rank1/49 (12 ms)
   [----------] 1600 tests from TestRandomGraph/RandomGraphTest (52604 ms total)
   [----------] Global test environment tear-down
   [==========] 32124 tests from 33 test suites ran. (265834 ms total)
   [  PASSED  ] 32124 tests.
   YOU HAVE 2 DISABLED TESTS  # This is normal.
   ```

## Debugging

### Logging

Currently there are two separate logging methods to assist in debugging.

#### VLOG

[NNAPI VLogging](https://source.android.com/devices/neural-networks#utility_functions) is available through the environment variable [DEBUG_NN_VLOG](https://source.corp.google.com/chromeos_internal/src/platform/nest-nn/nn/common/Utils.cpp;rcl=965c8c8c59271bc17dfd63a5a784cec9c609a6ad;l=66). This environment variable must be set before NNAPI loads, as it is only read on startup.

The value of the environment variable must be one of the following:

* An empty string, indicating that no logging is to be done.
* The token 1 or all, indicating that all logging is to be done.
* A list of tags, delimited by spaces, commas, or colons, indicating which logging is to be done. The tags are `compilation`, `cpuexe`, `driver`, `execution`, `manager`, and `model`.

#### ANDROID_LOG_TAGS

The `ANDROID_LOG_TAGS` environment variable can be set to emit logging from the underlying ported android libraries. See the [Android Filtering log output](https://developer.android.com/studio/command-line/logcat#filteringOutput) instructions for details on how to configure this environment variable for logging output.

### TODO

1. Debugging shared library loading issues.
1. Running tast tests on a DUT.

## Testing

### Running the label\_image tensorflow sample

Building for board named 'betty':

1.  Follow instructions above to build and deploy NNAPI
1.  Then build tensorflow with USE="label_image benchmark\_model" and deploy it:
    ```
    $ USE="label_image benchmark_model" emerge-betty sci-libs/tensorflow
    $ cros deploy $DUP_IP sci-libs/tensorflow
    ```
1.  Build and deploy ml test models. This will deploy various ML test models and data to the folder `/usr/share/ml-test-assets` on the DUT.
    ```
    $ USE="label_image benchmark_model" emerge-betty chromeos-base/ml-test-assets
    $ cros deploy ${DUT_IP} chromeos-base/ml-test-assets
    ```

1.  On a terminal inside DUT run label\_image and benchmark\_model without
    NNAPI:
    ```
    # cd /usr/share/ml-test-assets/label_image
    # label_image
    Loaded model ./mobilenet_quant_v1_224.tflite
    resolved reporter
    INFO: Initialized TensorFlow Lite runtime.
    invoked
    average time: 178.725 ms
    0.780392: 653 military uniform
    0.105882: 907 windsor tie
    0.0156863: 458 bow tie
    0.0117647: 466 bulletproof vest
    0.00784314: 835 suit

    # benchmark_model --graph=mobilenet_quant_v1_224.tflite
    <...>
    count=50 first=128709 curr=128080 min=127952 max=130551 avg=128344 std=381
    ```
1.  Then run with NNAPI:
    ```
    # label_image --accelerated 1
    Loaded model ./mobilenet_quant_v1_224.tflite
    resolved reporter
    INFO: Initialized TensorFlow Lite runtime.
    INFO: Created TensorFlow Lite delegate for NNAPI.
    Applied NNAPI delegate.invoked
    average time: 447.802 ms
    0.780392: 653 military uniform
    0.105882: 907 windsor tie
    0.0156863: 458 bow tie
    0.0117647: 466 bulletproof vest
    0.00784314: 835 suit

    localhost ~ # benchmark_model --graph=mobilenet_quant_v1_224.tflite --use_nnapi=true
    <...>
    count=50 first=406697 curr=416490 min=324026 max=478962 avg=406625 std=29184
    ```

1.  Running with NNAPI and debug logging:
    ```
    # DEBUG_NN_VLOG="all" label_image --accelerated 1
    Loaded model ./mobilenet_quant_v1_224.tflite
    resolved reporter
    INFO: Initialized TensorFlow Lite runtime.
    INFO: Created TensorFlow Lite delegate for NNAPI.
    <Loads of logging statements>
    <...>
    ```
### TODO

Provide instructions for:

1. The tensorflow benchmarking tool.
1. The Chrome OS ML benchmarking tool.
