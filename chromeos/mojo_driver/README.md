This directory contains a prototype implementation of an NNAPI HAL
driver that transports the interface over a Mojo IPC connection to
another process that wraps a "real" vendor NNHAL Driver. For this
prototype, only the NNAPI 1.0 spec has been implemented, and it
currently passes the VTS tests for 1.0.

Things that need doing:
* Think through the naming scheme. At the moment it's very hard to
  read through the object lifecycle due to the same names being used
  in the NNAPI HIDL as well as the Mojo definitions. Check the diagram
  below that attempts to clear this up.
* Implement rest of the IDevice methods.
* NNAPI 1.3 spec / implementation.

To use:

Apply http://crrev.com/c/3505647

```
## Assume a volteer build
$ USE="-vendor-nnhal ipc-driver" FEATURES=noclean emerge-volteer aosp-frameworks-ml-nn  aosp-frameworks-ml-nn-vts
$ sudo chroot /build/volteer
# cros_nnapi_vts_1_0
<tests run>
[----------] Global test environment tear-down
[==========] 534 tests from 4 test suites ran. (5950 ms total)
[  PASSED  ] 534 tests.
Aborted
```

This crude diagram tries to illustrate how
the different objects work together to achieve
the MOJO IPC NNAPI HAL Driver.
=======================================================


TFLite Process                         Worker Process                           Vendor HAL Driver
     |                                                                    (exists in the Worker Process)
   Start
     |
Create NNAPI Device
     |
IPCDriver Start
     |
MojoController Start
     |
Spawn Worker Process
     |
     |        execve, pass fd
     |  (replace with libminijail)
     ------------------------------------->|
     |                                     |
     |                              Accept invitation
     |                                     |
     |                                     |
     |                           Create Vendor HAL Driver
     |                                     |
     |                                     --------------------------------------------->|
     |                                     |                                             |
     |                                     |                                           Start
     |                     IDeviceImpl start (wraps Vendor driver)                       |
     |                                     |                                             |
     |                                     |                                             |
     |                                     |                                             |
IPCDriver::getCapabilities_1_3()           |                                             |
     |                                     |                                             |
MojoController::::GetCapabilities()------->|                                             |
     |                                     |                                             |
     |                         IDeviceImpl::getCapabilities() <-----------------> getCapabilities()
     |<----------getCapabilitiesCallback----                                             |
     |                                     |                                             |
     |                                     |                                             |
IPCDriver::prepareModel()                  |                                             |
     |                                     |                                             |
MojoController::::PrepareModel() --------->|                                             |
     | (creates and passes a               |                                             |
     |  IPreparedModelCallbackImpl[1]      |                                             |
     |  as a remote that wraps the         |                                             |
     |  callers IPreparedModelCallback[0]) |                                             |
     |                                     |                                             |
     |                         IDeviceImpl::prepareModel()------------------------------>|
     |                                     |   (creates and passes a                     |
     |                                     |    PreparedModelCallback[2] that wraps      |
     |                                     |    the remote TFLite process'               |
     |                                     |    IPreparedModelCallbackImpl[1])           |
     |                                     |                                             |
     |                                     |<------------------ ErrorStatus-------prepareModel()
     |<-prepareModelCallback (ErrorStatus)--                                             |
     |                                     |                                             |
     |                                     |<------------------ PreparedModelCallback[2]::notify()
     |                                     |   (creates and passes a                     |
     |                                     |    IPreparedModelImpl[3] that wraps the     |
     |                                     |    Vendor HALs PreparedModel[4])            |
     |                                     |                                             |
IPreparedModelCallbackImpl[1]::notify()<-- |                                             |
     |  (creates a PreparedModel[5] wrapper|                                             |
     |   around the workers remote         |                                             |
     |   IPreparedModelImpl[3] and calls   |                                             |
     |   IPreparedModelCallback[0]::notify |                                             |
     |   with it)                          |                                             |
     |                                     |                                             |
     |                                     |                                             |
     |                                     |                                             |
PreparedModel[5]::execute()--------------->|                                             |
     |    (creates and passes an           |                                             |
     |     IExecutionCallbackImpl[6] as a  |                                             |
     |     remote that wraps the callers   |                                             |
     |     IExecutionCallback[7])          |                                             |
     |                                     |                                             |
     |               IPreparedModelImpl[3]::execute()----------------------------------->|
     |                                     |  (creates and passes an ExecutionCallback[8]|
     |                                     |   that wraps the remote                     |
     |                                     |   IExecutionCallbackImpl[6])                |
     |                                     |                                             |
     |                                     |<------------ ErrorStatus---PreparedModel[4]::execute()
     |<----executeCallback  (ErrorStatus)---                                             |
     |                                     |                                             |
     |                                     |                                             |
     |                                     |<-----------------------ExecutionCallback[8]::notify()
IExecutionCallbackImpl[6]::notify()<--------                                             |
     |(calls IExecutionCallback[7]::notify)|                                             |
     |                                     |                                             |
