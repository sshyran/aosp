/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "Utils"

#include "Utils.h"
#include "NeuralNetworks.h"

#include <android-base/logging.h>
#include <android-base/properties.h>
#include <android-base/strings.h>
#include <sys/system_properties.h>
#include <unordered_map>

using ::android::hidl::allocator::V1_0::IAllocator;

namespace android {
namespace nn {

const char kVLogPropKey[] = "debug.nn.vlog";
int vLogMask = ~0;

// Split the space separated list of tags from verbose log setting and build the
// logging mask from it. note that '1' and 'all' are special cases to enable all
// verbose logging.
//
// NN API verbose logging setting comes from system property debug.nn.vlog.
// Example:
// setprop debug.nn.vlog 1 : enable all logging tags.
// setprop debug.nn.vlog "model compilation" : only enable logging for MODEL and
//                                             COMPILATION tags.
void initVLogMask() {
    vLogMask = 0;
    const std::string vLogSetting = android::base::GetProperty(kVLogPropKey, "");
    if (vLogSetting.empty()) {
        return;
    }

    std::unordered_map<std::string, int> vLogFlags = {
        {"1", -1},
        {"all", -1},
        {"model", MODEL},
        {"compilation", COMPILATION},
        {"execution", EXECUTION},
        {"cpuexe", CPUEXE},
        {"manager", MANAGER},
        {"driver", DRIVER}};

    std::vector<std::string> elements = android::base::Split(vLogSetting, " ");
    for (const auto& elem : elements) {
        const auto& flag = vLogFlags.find(elem);
        if (flag == vLogFlags.end()) {
            LOG(ERROR) << "Unknown trace flag: " << elem;
            continue;
        }

        if (flag->second == -1) {
            // -1 is used for the special values "1" and "all" that enable all
            // tracing.
            vLogMask = ~0;
            return;
        } else {
            vLogMask |= 1 << flag->second;
        }
    }
}

namespace {

template <typename EntryType, uint32_t entryCount, uint32_t entryCountOEM>
EntryType tableLookup(const EntryType (&table)[entryCount],
                      const EntryType (&tableOEM)[entryCountOEM],
                      uint32_t code) {
    if (code < entryCount) {
        return table[code];
    } else if (code >= kOEMCodeBase && (code - kOEMCodeBase) < entryCountOEM) {
        return tableOEM[code - kOEMCodeBase];
    } else {
        nnAssert(!"tableLookup: bad code");
        return EntryType();
    }
}

};  // anonymous namespace

#define COUNT(X) (sizeof(X) / sizeof(X[0]))

const char* kTypeNames[kNumberOfDataTypes] = {
        "FLOAT32",        "INT32",        "UINT32",
        "TENSOR_FLOAT32", "TENSOR_INT32", "TENSOR_QUANT8_ASYMM",
};

static_assert(COUNT(kTypeNames) == kNumberOfDataTypes, "kTypeNames is incorrect");

const char* kTypeNamesOEM[kNumberOfDataTypesOEM] = {
        "OEM",            "TENSOR_OEM_BYTE",
};

static_assert(COUNT(kTypeNamesOEM) == kNumberOfDataTypesOEM, "kTypeNamesOEM is incorrect");

const char* getOperandTypeName(OperandType type) {
    uint32_t n = static_cast<uint32_t>(type);
    return tableLookup(kTypeNames, kTypeNamesOEM, n);
}

// TODO Check if this useful
const char* kErrorNames[] = {
        "NO_ERROR", "OUT_OF_MEMORY", "INCOMPLETE", "NULL", "BAD_DATA",
};

const char* kOperationNames[kNumberOfOperationTypes] = {
        "ADD",
        "AVERAGE_POOL",
        "CONCATENATION",
        "CONV",
        "DEPTHWISE_CONV",
        "DEPTH_TO_SPACE",
        "DEQUANTIZE",
        "EMBEDDING_LOOKUP",
        "FLOOR",
        "FULLY_CONNECTED",
        "HASHTABLE_LOOKUP",
        "L2_NORMALIZATION",
        "L2_POOL",
        "LOCAL_RESPONSE_NORMALIZATION",
        "LOGISTIC",
        "LSH_PROJECTION",
        "LSTM",
        "MAX_POOL",
        "MUL",
        "RELU",
        "RELU1",
        "RELU6",
        "RESHAPE",
        "RESIZE_BILINEAR",
        "RNN",
        "SOFTMAX",
        "SPACE_TO_DEPTH",
        "SVDF",
        "TANH",
        "BATCH_TO_SPACE_ND",
        "DIV",
        "MEAN",
        "PAD",
        "SPACE_TO_BATCH_ND",
        "SQUEEZE",
        "STRIDED_SLICE",
        "SUB",
        "TRANSPOSE",
};

static_assert(COUNT(kOperationNames) == kNumberOfOperationTypes, "kOperationNames is incorrect");

const char* kOperationNamesOEM[kNumberOfOperationTypesOEM] = {
        "OEM_OPERATION",
};

static_assert(COUNT(kOperationNamesOEM) == kNumberOfOperationTypesOEM,
              "kOperationNamesOEM is incorrect");

const char* getOperationName(OperationType type) {
    uint32_t n = static_cast<uint32_t>(type);
    return tableLookup(kOperationNames, kOperationNamesOEM, n);
}

const uint32_t kSizeOfDataType[]{
        4, // ANEURALNETWORKS_FLOAT32
        4, // ANEURALNETWORKS_INT32
        4, // ANEURALNETWORKS_UINT32
        4, // ANEURALNETWORKS_TENSOR_FLOAT32
        4, // ANEURALNETWORKS_TENSOR_INT32
        1  // ANEURALNETWORKS_TENSOR_SYMMETRICAL_QUANT8
};

static_assert(COUNT(kSizeOfDataType) == kNumberOfDataTypes, "kSizeOfDataType is incorrect");

const bool kScalarDataType[]{
        true,  // ANEURALNETWORKS_FLOAT32
        true,  // ANEURALNETWORKS_INT32
        true,  // ANEURALNETWORKS_UINT32
        false, // ANEURALNETWORKS_TENSOR_FLOAT32
        false, // ANEURALNETWORKS_TENSOR_INT32
        false, // ANEURALNETWORKS_TENSOR_SYMMETRICAL_QUANT8
};

static_assert(COUNT(kScalarDataType) == kNumberOfDataTypes, "kScalarDataType is incorrect");

const uint32_t kSizeOfDataTypeOEM[]{
        0, // ANEURALNETWORKS_OEM
        1, // ANEURALNETWORKS_TENSOR_OEM_BYTE
};

static_assert(COUNT(kSizeOfDataTypeOEM) == kNumberOfDataTypesOEM,
              "kSizeOfDataTypeOEM is incorrect");

const bool kScalarDataTypeOEM[]{
        true,  // ANEURALNETWORKS_OEM
        false, // ANEURALNETWORKS_TENSOR_OEM_BYTE
};

static_assert(COUNT(kScalarDataTypeOEM) == kNumberOfDataTypesOEM,
              "kScalarDataTypeOEM is incorrect");

uint32_t sizeOfData(OperandType type, const std::vector<uint32_t>& dimensions) {
    int n = static_cast<int>(type);

    uint32_t size = tableLookup(kSizeOfDataType, kSizeOfDataTypeOEM, n);

    if (tableLookup(kScalarDataType, kScalarDataTypeOEM, n) == true) {
        return size;
    }

    for (auto d : dimensions) {
        size *= d;
    }
    return size;
}

hidl_memory allocateSharedMemory(int64_t size) {
    static const std::string type = "ashmem";
    static sp<IAllocator> allocator = IAllocator::getService(type);

    hidl_memory memory;

    // TODO: should we align memory size to nearest page? doesn't seem necessary...
    allocator->allocate(size, [&](bool success, const hidl_memory& mem) {
        if (!success) {
            LOG(ERROR) << "unable to allocate " << size << " bytes of " << type;
        } else {
            memory = mem;
        }
    });

    return memory;
}

uint32_t alignBytesNeeded(uint32_t index, size_t length) {
    uint32_t pattern;
    if (length < 2) {
        pattern = 0; // No alignment necessary
    } else if (length < 4) {
        pattern = 1; // Align on 2-byte boundary
    } else {
        pattern = 3; // Align on 4-byte boundary
    }
    uint32_t extra = (~(index - 1)) & pattern;
    return extra;
}

void logModelToInfo(const V1_0::Model& model) {
    LOG(INFO) << "V1_0::Model start";
    LOG(INFO) << "operands" << toString(model.operands);
    LOG(INFO) << "operations" << toString(model.operations);
    LOG(INFO) << "inputIndexes" << toString(model.inputIndexes);
    LOG(INFO) << "outputIndexes" << toString(model.outputIndexes);
    LOG(INFO) << "operandValues size" << model.operandValues.size();
    LOG(INFO) << "pools" << toString(model.pools);
}

void logModelToInfo(const V1_1::Model& model) {
    LOG(INFO) << "V1_1::Model start";
    LOG(INFO) << "operands" << toString(model.operands);
    LOG(INFO) << "operations" << toString(model.operations);
    LOG(INFO) << "inputIndexes" << toString(model.inputIndexes);
    LOG(INFO) << "outputIndexes" << toString(model.outputIndexes);
    LOG(INFO) << "operandValues size" << model.operandValues.size();
    LOG(INFO) << "pools" << toString(model.pools);
}

// Validates the type. The used dimensions can be underspecified.
int validateOperandType(const ANeuralNetworksOperandType& type, const char* tag,
                        bool allowPartial) {
    if (!allowPartial) {
        for (uint32_t i = 0; i < type.dimensionCount; i++) {
            if (type.dimensions[i] == 0) {
                LOG(ERROR) << tag << " OperandType invalid dimensions[" << i
                           << "] = " << type.dimensions[i];
                return ANEURALNETWORKS_BAD_DATA;
            }
        }
    }
    if (!validCode(kNumberOfDataTypes, kNumberOfDataTypesOEM, type.type)) {
        LOG(ERROR) << tag << " OperandType invalid type " << type.type;
        return ANEURALNETWORKS_BAD_DATA;
    }
    if (type.type == ANEURALNETWORKS_TENSOR_QUANT8_ASYMM) {
        if (type.zeroPoint < 0 || type.zeroPoint > 255) {
            LOG(ERROR) << tag << " OperandType invalid zeroPoint " << type.zeroPoint;
            return ANEURALNETWORKS_BAD_DATA;
        }
        if (type.scale < 0.f) {
            LOG(ERROR) << tag << " OperandType invalid scale " << type.scale;
            return ANEURALNETWORKS_BAD_DATA;
        }
    }
    return ANEURALNETWORKS_NO_ERROR;
}

int validateOperandList(uint32_t count, const uint32_t* list, uint32_t operandCount,
                        const char* tag) {
    for (uint32_t i = 0; i < count; i++) {
        if (list[i] >= operandCount) {
            LOG(ERROR) << tag << " invalid operand index at " << i << " = " << list[i]
                       << ", operandCount " << operandCount;
            return ANEURALNETWORKS_BAD_DATA;
        }
    }
    return ANEURALNETWORKS_NO_ERROR;
}

// Versioning

bool compliantWithV1_0(V1_0::OperationType) {
    return true;
}

bool compliantWithV1_0(V1_1::OperationType operation) {
    switch (static_cast<V1_0::OperationType>(operation)) {
        case V1_0::OperationType::ADD:
        case V1_0::OperationType::AVERAGE_POOL_2D:
        case V1_0::OperationType::CONCATENATION:
        case V1_0::OperationType::CONV_2D:
        case V1_0::OperationType::DEPTHWISE_CONV_2D:
        case V1_0::OperationType::DEPTH_TO_SPACE:
        case V1_0::OperationType::DEQUANTIZE:
        case V1_0::OperationType::EMBEDDING_LOOKUP:
        case V1_0::OperationType::FLOOR:
        case V1_0::OperationType::FULLY_CONNECTED:
        case V1_0::OperationType::HASHTABLE_LOOKUP:
        case V1_0::OperationType::L2_NORMALIZATION:
        case V1_0::OperationType::L2_POOL_2D:
        case V1_0::OperationType::LOCAL_RESPONSE_NORMALIZATION:
        case V1_0::OperationType::LOGISTIC:
        case V1_0::OperationType::LSH_PROJECTION:
        case V1_0::OperationType::LSTM:
        case V1_0::OperationType::MAX_POOL_2D:
        case V1_0::OperationType::MUL:
        case V1_0::OperationType::RELU:
        case V1_0::OperationType::RELU1:
        case V1_0::OperationType::RELU6:
        case V1_0::OperationType::RESHAPE:
        case V1_0::OperationType::RESIZE_BILINEAR:
        case V1_0::OperationType::RNN:
        case V1_0::OperationType::SOFTMAX:
        case V1_0::OperationType::SPACE_TO_DEPTH:
        case V1_0::OperationType::SVDF:
        case V1_0::OperationType::TANH:
        case V1_0::OperationType::OEM_OPERATION:
            return true;
        default:
            return false;
    }
}

bool compliantWithV1_1(V1_0::OperationType) {
    return true;
}

bool compliantWithV1_1(V1_1::OperationType) {
    return true;
}

bool compliantWithV1_0(const V1_0::Operation&) {
    return true;
}

bool compliantWithV1_0(const V1_1::Operation& operation) {
    return compliantWithV1_0(operation.type);
}

bool compliantWithV1_1(const V1_0::Operation&) {
    return true;
}

bool compliantWithV1_1(const V1_1::Operation&) {
    return true;
}

static bool compliantWithV1_0(const hidl_vec<V1_1::Operation>& operations) {
    return std::all_of(operations.begin(), operations.end(),
                       [](const V1_1::Operation& operation) {
                           return compliantWithV1_0(operation);
                       });
}

bool compliantWithV1_0(const V1_0::Model&) {
    return true;
}

bool compliantWithV1_0(const V1_1::Model& model) {
    // In addition to new enumeration values being introduced in V1_1::Model, a
    // new flag was introduced to indicate whether or not float32 data can be
    // calculated using float16 units. This 'relaxComputationFloat32toFloat16'
    // flag is not relevant in whether a V1_1::Model is compliant with a
    // V1_0::Model because all 1.0 drivers require strict calculation by default
    // in the P NN runtime. Even if fp16 calculations are allowed, they can
    // still be computed by a strict fp32 driver.
    return compliantWithV1_0(model.operations);
}

bool compliantWithV1_1(const V1_0::Model&) {
    return true;
}

bool compliantWithV1_1(const V1_1::Model&) {
    return true;
}

V1_0::OperationType convertToV1_0(V1_0::OperationType type) {
    return type;
}

V1_0::OperationType convertToV1_0(V1_1::OperationType type) {
    if (!compliantWithV1_0(type)) {
        LOG(ERROR) << "Upcasting non-compliant type " << toString(type)
                   << " from V1_1::OperationType to V1_0::OperationType";
    }
    return static_cast<V1_0::OperationType>(type);
}

V1_1::OperationType convertToV1_1(V1_0::OperationType type) {
    return static_cast<V1_1::OperationType>(type);
}

V1_1::OperationType convertToV1_1(V1_1::OperationType type) {
    return type;
}

V1_0::Operation convertToV1_0(const V1_0::Operation& operation) {
    return operation;
}

V1_0::Operation convertToV1_0(const V1_1::Operation& operation) {
    if (!compliantWithV1_0(operation)) {
        LOG(ERROR) << "Upcasting non-compliant operation " << toString(operation)
                   << " from V1_1::Operation to V1_0::Operation";
    }
    return {.type = convertToV1_0(operation.type),
            .inputs = operation.inputs,
            .outputs = operation.outputs};
}

V1_1::Operation convertToV1_1(const V1_0::Operation& operation) {
    return {.type = convertToV1_1(operation.type),
            .inputs = operation.inputs,
            .outputs = operation.outputs};
}

V1_1::Operation convertToV1_1(const V1_1::Operation& operation) {
    return operation;
}

static hidl_vec<V1_0::Operation> convertToV1_0(const hidl_vec<V1_1::Operation>& operations) {
    hidl_vec<V1_0::Operation> result(operations.size());
    std::transform(operations.begin(), operations.end(), result.begin(),
                   [](const V1_1::Operation& operation) { return convertToV1_0(operation); });
    return result;
}

static hidl_vec<V1_1::Operation> convertToV1_1(const hidl_vec<V1_0::Operation>& operations) {
    hidl_vec<V1_1::Operation> result(operations.size());
    std::transform(operations.begin(), operations.end(), result.begin(),
                   [](const V1_0::Operation& operation) { return convertToV1_1(operation); });
    return result;
}

V1_0::Model convertToV1_0(const V1_0::Model& model) {
    return model;
}

V1_0::Model convertToV1_0(const V1_1::Model& model) {
    if (!compliantWithV1_0(model)) {
        LOG(ERROR) << "Upcasting non-compliant model " << toString(model)
                   << " from V1_1::Model to V1_0::Model";
    }
    return {.operands = model.operands,
            .operations = convertToV1_0(model.operations),
            .inputIndexes = model.inputIndexes,
            .outputIndexes = model.outputIndexes,
            .operandValues = model.operandValues,
            .pools = model.pools};
}

V1_1::Model convertToV1_1(const V1_0::Model& model) {
    return {.operands = model.operands,
            .operations = convertToV1_1(model.operations),
            .inputIndexes = model.inputIndexes,
            .outputIndexes = model.outputIndexes,
            .operandValues = model.operandValues,
            .pools = model.pools,
            .relaxComputationFloat32toFloat16 = false};
}

V1_1::Model convertToV1_1(const V1_1::Model& model) {
    return model;
}

#ifdef NN_DEBUGGABLE
uint32_t getProp(const char* str, uint32_t defaultValue) {
    const std::string propStr = android::base::GetProperty(str, "");
    if (propStr.size() > 0) {
        return std::stoi(propStr);
    } else {
        return defaultValue;
    }
}
#endif  // NN_DEBUGGABLE

} // namespace nn
} // namespace android