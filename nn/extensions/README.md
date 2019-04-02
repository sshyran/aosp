# NNAPI vendor extensions

In Android Q, Neural Networks API introduced vendor extensions -- a better,
more structured alternative to the OEM operation and data types. Extensions
allow vendors to provide custom hardware-accellerated operations via NNAPI.

TODO(pszczepaniak): Which apps can use vendor extensions?

This document explains how to create and use extensions.

## Extension definition

The vendor is expected to create and maintain a header file with the
extension specification. A complete sample extension definition is provided in
`test_vendor/fibonacci/FibonacciExtension.h`.

Each extension must have a unique name that starts with the reverse domain name
of the vendor:
```c
const char* const MY_EXTENSION_NAME = "com.example.my_extension";
```

This name acts as a namespace for operation and operand types.
The driver uses this name to distinguish between extensions.

Operations and data types are declared in a way similar to
`../runtime/include/NeuralNetworks.h`:
```c
enum {
    /**
     * A custom scalar type.
     */
    MY_SCALAR = 0,

    /**
     * A custom tensor type.
     *
     * Attached to this tensor is {@link MyTensorParams}.
     */
    MY_TENSOR = 1,
};

enum {
    /**
     * Computes my function.
     *
     * Inputs:
     * * 0: A scalar of {@link MY_SCALAR}.
     *
     * Outputs:
     * * 0: A tensor of {@link MY_TENSOR}.
     */
    MY_FUNCTION = 0,
};
```

Extensions may also declare custom structures to accompany extension operands:
```c
/**
 * Quantization parameters for {@link MY_TENSOR}.
 */
typedef struct MyTensorParams {
    double scale;
    int64_t zeroPoint;
} MyTensorParams;
```

## Using extensions in NNAPI clients

Runtime extension support is provided by
`../runtime/include/NeuralNetworksExtensions.h` (C API) and
`../runtime/include/NeuralNetworksWrapperExtensions.h` (C++ API).
This section provides an overview of the former.

Use `ANeuralNetworksDevice_getExtensionSupport` to check if a device supports
an extension:
```c
bool isExtensionSupported;
CHECK_EQ(ANeuralNetworksDevice_getExtensionSupport(device, MY_EXTENSION_NAME,
                                                   &isExtensionSupported),
         ANEURALNETWORKS_NO_ERROR);
if (isExtensionSupported) {
    // The device supports the extension.
    ...
}
```

To build a model with an extension operand, use
`ANeuralNetworksModel_getExtensionOperandType` to obtain the operand type.
Then call `ANeuralNetworksModel_addOperand` as usual:
```c
int32_t type;
CHECK_EQ(ANeuralNetworksModel_getExtensionOperandType(model, MY_EXTENSION_NAME, MY_TENSOR, &type),
         ANEURALNETWORKS_NO_ERROR);
ANeuralNetworksOperandType operandType{
        .type = type,
        .dimensionCount = dimensionCount,
        .dimensions = dimensions,
};
CHECK_EQ(ANeuralNetworksModel_addOperand(model, &operandType), ANEURALNETWORKS_NO_ERROR);
```

Optionally, use `ANeuralNetworksModel_setOperandExtensionData` to
associate additional data with an extension operand.
```c
MyTensorParams params{
        .scale = 0.5,
        .zeroPoint = 128,
};
CHECK_EQ(ANeuralNetworksModel_setOperandExtensionData(model, operandIndex, &params, sizeof(params)),
         ANEURALNETWORKS_NO_ERROR);
```

To build a model with an extension operation, use
`ANeuralNetworksModel_getExtensionOperationType` to obtain the operation type.
Then call `ANeuralNetworksModel_addOperation` as usual:
```c
ANeuralNetworksOperationType type;
CHECK_EQ(ANeuralNetworksModel_getExtensionOperationType(model, MY_EXTENSION_NAME, MY_OPERATION,
                                                        &type),
         ANEURALNETWORKS_NO_ERROR);
CHECK_EQ(ANeuralNetworksModel_addOperation(model, type, inputCount, inputs, outputCount, outputs),
         ANEURALNETWORKS_NO_ERROR);
```

## Adding extension support to an NNAPI driver

The driver reports supported extensions via the
`IDevice::getSupportedExtensions()` method.
For each supported extension, the returned list must contain an entry
describing it:
```c++
Extension {
    .name = MY_EXTENSION_NAME,
    .operandTypes = {
        {
            .type = MY_SCALAR,
            .isTensor = false,
            .byteSize = 8,
        },
        {
            .type = MY_TENSOR,
            .isTensor = true,
            .byteSize = 8,
        },
    },
}
```

When handling operation and operand types, the driver must check the
`Model::ExtensionTypeEncoding::HIGH_BITS_PREFIX` high bits of the type.
These bits constitute the extension _prefix_. A zero prefix means no extension,
whereas a non-zero prefix maps uniquely within a model to an extension name via
`model.extensionNameToPrefix`.
The low `Model::ExtensionTypeEncoding::LOW_BITS_TYPE` bits of the type
correspond to the type within the extension.

The driver must validate operands and operations.

Extension operands may have associated data in `operand.extraParams.extension`.
