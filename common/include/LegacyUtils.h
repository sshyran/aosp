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

#ifndef ANDROID_FRAMEWORKS_ML_NN_COMMON_UTILS_H
#define ANDROID_FRAMEWORKS_ML_NN_COMMON_UTILS_H

#include <android-base/logging.h>

#include <set>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

#include "HalInterfaces.h"
#include "NeuralNetworks.h"
#include "OperationResolver.h"
#include "ValidateHal.h"
#include "nnapi/TypeUtils.h"
#include "nnapi/Types.h"

namespace android {
namespace nn {

// The number of data types (OperandCode) defined in NeuralNetworks.h.
const int kNumberOfDataTypes = 16;

// The number of operation types (OperationCode) defined in NeuralNetworks.h.
const int kNumberOfOperationTypes = 102;
static_assert(kNumberOfOperationTypes == BuiltinOperationResolver::kNumberOfOperationTypes);

// The number of execution preferences defined in NeuralNetworks.h.
const int kNumberOfPreferences = 3;

// The number of data types (OperandCode) defined in NeuralNetworksOEM.h.
const int kNumberOfDataTypesOEM = 2;

// The number of operation types (OperationCode) defined in NeuralNetworksOEM.h.
const int kNumberOfOperationTypesOEM = 1;

// The lowest number assigned to any OEM Code in NeuralNetworksOEM.h.
const int kOEMCodeBase = 10000;

/* IMPORTANT: if you change the following list, don't
 * forget to update the corresponding 'tags' table in
 * the initVlogMask() function implemented in Utils.cpp.
 */
enum VLogFlags { MODEL = 0, COMPILATION, EXECUTION, CPUEXE, MANAGER, DRIVER, MEMORY };

#define VLOG_IS_ON(TAG) ((vLogMask & (1 << (TAG))) != 0)

#define VLOG(TAG)                 \
    if (LIKELY(!VLOG_IS_ON(TAG))) \
        ;                         \
    else                          \
        LOG(INFO)

extern int vLogMask;
void initVLogMask();

#ifdef NN_DEBUGGABLE
#define SHOW_IF_DEBUG(msg) msg
#else
#define SHOW_IF_DEBUG(msg) ""
#endif

// DEPRECATED(b/118737105). Use CHECK.
#define nnAssert(v) CHECK(v)

#define NN_RETURN_IF_ERROR(expr)                      \
    do {                                              \
        int _errorCode = (expr);                      \
        if (_errorCode != ANEURALNETWORKS_NO_ERROR) { \
            return _errorCode;                        \
        }                                             \
    } while (0)

// Make an TimeoutDuration from a duration in nanoseconds. If the value exceeds
// the max duration, return the maximum expressible duration.
TimeoutDuration makeTimeoutDuration(uint64_t nanoseconds);

// Type to represent a deadline time point across processes.
using Deadline = std::chrono::steady_clock::time_point;

// Make an Deadline from a duration. If the sum of the current time and the
// duration exceeds the max time, return a time point holding the maximum
// expressible time.
Deadline makeDeadline(TimeoutDuration duration);
inline Deadline makeDeadline(uint64_t duration) {
    return makeDeadline(makeTimeoutDuration(duration));
}

// Convenience function. If the duration is provided, this function creates a
// Deadline using makeDeadline. If the duration is not provided, this function
// returns std::nullopt.
inline std::optional<Deadline> makeDeadline(OptionalTimeoutDuration duration) {
    return duration.has_value() ? makeDeadline(*duration) : std::optional<Deadline>{};
}
inline std::optional<Deadline> makeDeadline(std::optional<uint64_t> duration) {
    return duration.has_value() ? makeDeadline(*duration) : std::optional<Deadline>{};
}

// Make an optional Deadline from an OptionalTimePoint. If
// timePoint.nanosecondsSinceEpoch cannot be represented in Deadline, return a
// time point holding the maximum Deadline. If the OptionalTimePoint is none,
// this function returns std::nullopt.
std::optional<Deadline> makeDeadline(const V1_3::OptionalTimePoint& timePoint);

// Returns true if the deadline has passed. Returns false if either the deadline
// has not been exceeded or if the deadline is not present.
bool hasDeadlinePassed(const std::optional<Deadline>& deadline);

// Make an OptionalTimePoint from an optional Deadline. If the Deadline is not
// provided, this function returns none for OptionalTimePoint.
OptionalTimePoint makeTimePoint(const std::optional<Deadline>& deadline);

// Ensure that every user of FalseyErrorStream is linked to the
// correct instance, using the correct LOG_TAG
namespace {

template <HalVersion version>
struct VersionedType {};

template <>
struct VersionedType<HalVersion::V1_2> {
    using OperandPerformance = V1_2::Capabilities::OperandPerformance;
    using OperandType = V1_2::OperandType;
};

template <>
struct VersionedType<HalVersion::V1_3> {
    using OperandPerformance = V1_3::Capabilities::OperandPerformance;
    using OperandType = V1_3::OperandType;
};

template <HalVersion version>
using VersionedOperandPerformance = typename VersionedType<version>::OperandPerformance;
template <HalVersion version>
using VersionedOperandType = typename VersionedType<version>::OperandType;

}  // namespace

// Return a vector with one entry for each non-extension OperandType except
// SUBGRAPH, set to the specified PerformanceInfo value.  The vector will be
// sorted by OperandType.
//
// Control flow (OperandType::SUBGRAPH) operation performance is specified
// separately using Capabilities::ifPerformance and
// Capabilities::whilePerformance.
template <HalVersion version>
hardware::hidl_vec<VersionedOperandPerformance<version>> nonExtensionOperandPerformance(
        V1_0::PerformanceInfo perf);

// Update the vector entry corresponding to the specified OperandType with the
// specified PerformanceInfo value.  The vector must already have an entry for
// that OperandType, and must be sorted by OperandType.
void update(hardware::hidl_vec<V1_2::Capabilities::OperandPerformance>* operandPerformance,
            V1_2::OperandType type, V1_0::PerformanceInfo perf);
void update(hardware::hidl_vec<V1_3::Capabilities::OperandPerformance>* operandPerformance,
            V1_3::OperandType type, V1_0::PerformanceInfo perf);

// Look for a vector entry corresponding to the specified OperandType.  If
// found, return the associated PerformanceInfo.  If not, return a pessimistic
// PerformanceInfo (FLT_MAX).  The vector must be sorted by OperandType.
V1_0::PerformanceInfo lookup(
        const hardware::hidl_vec<V1_2::Capabilities::OperandPerformance>& operandPerformance,
        V1_2::OperandType type);
V1_0::PerformanceInfo lookup(
        const hardware::hidl_vec<V1_3::Capabilities::OperandPerformance>& operandPerformance,
        V1_3::OperandType type);

// Returns true if an operand type is an extension type.
bool isExtensionOperandType(V1_3::OperandType type);

// Returns true if an operation type is an extension type.
bool isExtensionOperationType(V1_3::OperationType type);

// Returns the amount of space needed to store a value of the specified
// dimensions and type. For a tensor with unspecified rank or at least one
// unspecified dimension, returns zero.
//
// Aborts if the specified type is an extension type.
// Aborts if the size would overflow the return type.
//
// See also TypeManager::getSizeOfData(OperandType, const std::vector<uint32_t>&).
uint32_t nonExtensionOperandSizeOfData(V1_3::OperandType type,
                                       const std::vector<uint32_t>& dimensions);
uint32_t nonExtensionOperandSizeOfData(OperandType type, const std::vector<uint32_t>& dimensions);

// Returns the amount of space needed to store a value of the dimensions and
// type of this operand. For a tensor with unspecified rank or at least one
// unspecified dimension, returns zero.
//
// Aborts if the specified type is an extension type.
// Aborts if the size would overflow the return type.
//
// See also TypeManager::getSizeOfData(const Operand&).
inline uint32_t nonExtensionOperandSizeOfData(const Operand& operand) {
    return nonExtensionOperandSizeOfData(operand.type, operand.dimensions);
}
inline uint32_t nonExtensionOperandSizeOfData(const V1_3::Operand& operand) {
    return nonExtensionOperandSizeOfData(operand.type, operand.dimensions);
}

// Returns the amount of space needed to store a value of the specified
// dimensions and element size. For a tensor with unspecified rank or at least
// one unspecified dimension, returns zero.
//
// Aborts if the size would overflow the return type.
//
// See also TypeManager::getSizeOfData(const Operand&).
uint32_t sizeOfTensorData(uint32_t sizeOfElement, const std::vector<uint32_t>& dimensions);

// Returns true if the amount of space needed to store a value of the specified
// dimensions and element size overflows the uint32_t type.
//
// Aborts if the specified type is an extension type.
//
// See also TypeManager::sizeOfDataOverflowsUInt32(OperandType, const std::vector<uint32_t>&).
bool nonExtensionOperandSizeOfDataOverflowsUInt32(OperandType type,
                                                  const std::vector<uint32_t>& dimensions);
bool nonExtensionOperandSizeOfDataOverflowsUInt32(V1_3::OperandType type,
                                                  const std::vector<uint32_t>& dimensions);

// Returns true if the amount of space needed to store a value of the specified
// dimensions and element size overflows the uint32_t type.
//
// See also TypeManager::sizeOfDataOverflowsUInt32(OperandType, const std::vector<uint32_t>&).
bool sizeOfTensorDataOverflowsUInt32(uint32_t elementSize, const std::vector<uint32_t>& dimensions);

// Returns true if a non-extension operand type is a scalar type.
//
// Aborts if the specified type is an extension type.
//
// See also TypeManager::isTensorType(OperandType).
bool nonExtensionOperandTypeIsScalar(int type);

// Returns the name of the operation type in ASCII.
std::string getOperationName(V1_3::OperationType opCode);

// Returns the name of the operand type in ASCII.
std::string getOperandTypeName(V1_3::OperandType type);

// Whether an operand of tensor type has unspecified dimensions.
//
// Undefined behavior if the operand type is a scalar type.
bool tensorHasUnspecifiedDimensions(int type, const uint32_t* dim, uint32_t dimCount);
bool tensorHasUnspecifiedDimensions(V1_3::OperandType type,
                                    const std::vector<uint32_t>& dimensions);
bool tensorHasUnspecifiedDimensions(OperandType type, const std::vector<uint32_t>& dimensions);
bool tensorHasUnspecifiedDimensions(OperandType type, const Dimensions& dimensions);
bool tensorHasUnspecifiedDimensions(const Operand& operand);
bool tensorHasUnspecifiedDimensions(const V1_3::Operand& operand);
bool tensorHasUnspecifiedDimensions(const ANeuralNetworksOperandType* type);

// Returns the number of padding bytes needed to align data of the
// specified length.  It aligns object of length:
// 2, 3 on a 2 byte boundary,
// 4+ on a 4 byte boundary.
// We may want to have different alignments for tensors.
// TODO: This is arbitrary, more a proof of concept.  We need
// to determine what this should be.
uint32_t alignBytesNeeded(uint32_t index, size_t length);

// Does a detailed LOG(INFO) of the model
void logModelToInfo(const V1_0::Model& model);
void logModelToInfo(const V1_1::Model& model);
void logModelToInfo(const V1_2::Model& model);
void logModelToInfo(const V1_3::Model& model);
void logModelToInfo(const Model& model);

inline std::string toString(uint32_t obj) {
    return std::to_string(obj);
}

template <typename Type>
std::string toString(const std::vector<Type>& range) {
    std::string os = "[";
    for (size_t i = 0; i < range.size(); ++i) {
        os += (i == 0 ? "" : ", ") + toString(range[i]);
    }
    return os += "]";
}

template <typename A, typename B>
std::string toString(const std::pair<A, B>& pair) {
    std::ostringstream oss;
    oss << "(" << pair.first << ", " << pair.second << ")";
    return oss.str();
}

inline bool validCode(uint32_t codeCount, uint32_t codeCountOEM, uint32_t code) {
    return (code < codeCount) || (code >= kOEMCodeBase && (code - kOEMCodeBase) < codeCountOEM);
}

bool validateOperandSymmPerChannelQuantParams(
        const V1_3::Operand& halOperand,
        const ANeuralNetworksSymmPerChannelQuantParams& channelQuant, const char* tag);

// Validates an operand type.
//
// extensionOperandTypeInfo must be nullptr iff the type is not an extension type.
//
// If allowPartial is true, the dimensions may be underspecified.
int validateOperandType(const ANeuralNetworksOperandType& type,
                        const Extension::OperandTypeInformation* const extensionOperandTypeInfo,
                        const char* tag, bool allowPartial);
int validateOperandList(uint32_t count, const uint32_t* list, uint32_t operandCount,
                        const char* tag);

// A set of functions to help validate models containing IF or WHILE operations.
struct SubgraphValidationHelper {
    // Checks if a given operand is a SUBGRAPH operand with a valid offset.
    std::function<bool(const Operand&)> isValidSubgraphReference;
    // Gets the input count of a subgraph referenced by a given operand.
    std::function<uint32_t(const Operand&)> getSubgraphInputCount;
    // Gets the output count of a subgraph referenced by a given operand.
    std::function<uint32_t(const Operand&)> getSubgraphOutputCount;
    // Gets the specified input operand of a subgraph referenced by a given operand.
    std::function<const Operand*(const Operand&, uint32_t)> getSubgraphInputOperand;
    // Gets the specified output operand of a subgraph referenced by a given operand.
    std::function<const Operand*(const Operand&, uint32_t)> getSubgraphOutputOperand;
    // Whether control flow operations with inner or outer input or output
    // operands of unknown size are allowed.
    bool allowControlFlowOperationWithOperandOfUnknownSize;
};

// Returns ANEURALNETWORKS_NO_ERROR if the corresponding operation is defined and can handle the
// provided operand types in the given HAL version, otherwise returns ANEURALNETWORKS_BAD_DATA.
// The last argument is only used for validating IF and WHILE operations.
int validateOperation(ANeuralNetworksOperationType opType, uint32_t inputCount,
                      const uint32_t* inputIndexes, uint32_t outputCount,
                      const uint32_t* outputIndexes, const std::vector<Operand>& operands,
                      HalVersion halVersion, const SubgraphValidationHelper& helper);

inline size_t getSizeFromInts(int lower, int higher) {
    return (uint32_t)(lower) + ((uint64_t)(uint32_t)(higher) << 32);
}

// Convert ANEURALNETWORKS_* result code to ErrorStatus.
// Not guaranteed to be a 1-to-1 mapping.
ErrorStatus convertResultCodeToErrorStatus(int resultCode);
V1_3::ErrorStatus convertResultCodeToHalErrorStatus(int resultCode);

// Convert ErrorStatus to ANEURALNETWORKS_* result code.
// Not guaranteed to be a 1-to-1 mapping.
int convertErrorStatusToResultCode(ErrorStatus status);
int convertErrorStatusToResultCode(V1_3::ErrorStatus status);

// Convert execution results to runtime format. Additionally checks that the
// returned results abide by the HAL specification, and logs an error if the
// result violates the specification.
std::tuple<int, std::vector<OutputShape>, Timing> getExecutionResult(
        V1_3::ErrorStatus status, const hardware::hidl_vec<V1_2::OutputShape>& outputShapes,
        const V1_2::Timing& timing);
std::tuple<int, std::vector<OutputShape>, Timing> getExecutionResult(
        ErrorStatus status, std::vector<OutputShape> outputShapes, Timing timing);

// Versioning

bool compliantWithV1_0(const V1_0::Capabilities& capabilities);
bool compliantWithV1_0(const V1_1::Capabilities& capabilities);
bool compliantWithV1_0(const V1_2::Capabilities& capabilities);
bool compliantWithV1_0(const V1_3::Capabilities& capabilities);
bool compliantWithV1_1(const V1_0::Capabilities& capabilities);
bool compliantWithV1_1(const V1_1::Capabilities& capabilities);
bool compliantWithV1_1(const V1_2::Capabilities& capabilities);
bool compliantWithV1_1(const V1_3::Capabilities& capabilities);
bool compliantWithV1_2(const V1_0::Capabilities& capabilities);
bool compliantWithV1_2(const V1_1::Capabilities& capabilities);
bool compliantWithV1_2(const V1_2::Capabilities& capabilities);
bool compliantWithV1_2(const V1_3::Capabilities& capabilities);
bool compliantWithV1_3(const V1_0::Capabilities& capabilities);
bool compliantWithV1_3(const V1_1::Capabilities& capabilities);
bool compliantWithV1_3(const V1_2::Capabilities& capabilities);
bool compliantWithV1_3(const V1_3::Capabilities& capabilities);

// If noncompliantOperations != nullptr, then
//     precondition: noncompliantOperations->empty()
//     postcondition: *noncompliantOperations consists of the indices of the noncompliant
//                    operations; if the compliance check fails for some reason
//                    other than a noncompliant operation,
//                    *noncompliantOperations consists of the indices of all operations
bool compliantWithV1_0(const V1_0::Model& model);
bool compliantWithV1_0(const V1_1::Model& model);
bool compliantWithV1_0(const V1_2::Model& model,
                       std::set<uint32_t>* noncompliantOperations = nullptr);
bool compliantWithV1_0(const V1_3::Model& model,
                       std::set<uint32_t>* noncompliantOperations = nullptr);
bool compliantWithV1_1(const V1_0::Model& model);
bool compliantWithV1_1(const V1_1::Model& model);
bool compliantWithV1_1(const V1_2::Model& model,
                       std::set<uint32_t>* noncompliantOperations = nullptr);
bool compliantWithV1_1(const V1_3::Model& model,
                       std::set<uint32_t>* noncompliantOperations = nullptr);
bool compliantWithV1_2(const V1_0::Model& model);
bool compliantWithV1_2(const V1_1::Model& model);
bool compliantWithV1_2(const V1_2::Model& model,
                       std::set<uint32_t>* noncompliantOperations = nullptr);
bool compliantWithV1_2(const V1_3::Model& model,
                       std::set<uint32_t>* noncompliantOperations = nullptr);

V1_0::ErrorStatus convertToV1_0(V1_0::ErrorStatus status);
V1_0::ErrorStatus convertToV1_0(V1_3::ErrorStatus status);
V1_3::ErrorStatus convertToV1_3(V1_0::ErrorStatus status);
V1_3::ErrorStatus convertToV1_3(V1_3::ErrorStatus status);

V1_0::Capabilities convertToV1_0(const V1_0::Capabilities& capabilities);
V1_0::Capabilities convertToV1_0(const V1_1::Capabilities& capabilities);
V1_0::Capabilities convertToV1_0(const V1_2::Capabilities& capabilities);
V1_0::Capabilities convertToV1_0(const V1_3::Capabilities& capabilities);
V1_1::Capabilities convertToV1_1(const V1_0::Capabilities& capabilities);
V1_1::Capabilities convertToV1_1(const V1_1::Capabilities& capabilities);
V1_1::Capabilities convertToV1_1(const V1_2::Capabilities& capabilities);
V1_1::Capabilities convertToV1_1(const V1_3::Capabilities& capabilities);
V1_2::Capabilities convertToV1_2(const V1_0::Capabilities& capabilities);
V1_2::Capabilities convertToV1_2(const V1_1::Capabilities& capabilities);
V1_2::Capabilities convertToV1_2(const V1_2::Capabilities& capabilities);
V1_2::Capabilities convertToV1_2(const V1_3::Capabilities& capabilities);
V1_3::Capabilities convertToV1_3(const V1_0::Capabilities& capabilities);
V1_3::Capabilities convertToV1_3(const V1_1::Capabilities& capabilities);
V1_3::Capabilities convertToV1_3(const V1_2::Capabilities& capabilities);
V1_3::Capabilities convertToV1_3(const V1_3::Capabilities& capabilities);

V1_0::Model convertToV1_0(const V1_0::Model& model);
V1_0::Model convertToV1_0(const V1_1::Model& model);
V1_0::Model convertToV1_0(const V1_2::Model& model);
V1_0::Model convertToV1_0(const V1_3::Model& model);
V1_1::Model convertToV1_1(const V1_0::Model& model);
V1_1::Model convertToV1_1(const V1_1::Model& model);
V1_1::Model convertToV1_1(const V1_2::Model& model);
V1_1::Model convertToV1_1(const V1_3::Model& model);
V1_2::Model convertToV1_2(const V1_0::Model& model);
V1_2::Model convertToV1_2(const V1_1::Model& model);
V1_2::Model convertToV1_2(const V1_2::Model& model);
V1_2::Model convertToV1_2(const V1_3::Model& model);
V1_3::Model convertToV1_3(const V1_0::Model& model);
V1_3::Model convertToV1_3(const V1_1::Model& model);
V1_3::Model convertToV1_3(const V1_2::Model& model);
V1_3::Model convertToV1_3(const V1_3::Model& model);

V1_0::OperationType uncheckedConvertToV1_0(V1_3::OperationType type);
V1_1::OperationType uncheckedConvertToV1_1(V1_3::OperationType type);
V1_2::OperationType uncheckedConvertToV1_2(V1_3::OperationType type);

V1_0::Operand convertToV1_0(const V1_2::Operand& operand);
V1_0::Operand convertToV1_0(const V1_3::Operand& operand);
V1_2::Operand convertToV1_2(const V1_0::Operand& operand);
V1_2::Operand convertToV1_2(const V1_3::Operand& operand);
V1_3::Operand convertToV1_3(const V1_0::Operand& operand);
V1_3::Operand convertToV1_3(const V1_2::Operand& operand);
V1_3::Operand convertToV1_3(const V1_3::Operand& operand);

hardware::hidl_vec<V1_0::Operand> convertToV1_0(const hardware::hidl_vec<V1_0::Operand>& operands);
hardware::hidl_vec<V1_0::Operand> convertToV1_0(const hardware::hidl_vec<V1_2::Operand>& operands);
hardware::hidl_vec<V1_0::Operand> convertToV1_0(const hardware::hidl_vec<V1_3::Operand>& operands);
hardware::hidl_vec<V1_2::Operand> convertToV1_2(const hardware::hidl_vec<V1_0::Operand>& operands);
hardware::hidl_vec<V1_2::Operand> convertToV1_2(const hardware::hidl_vec<V1_2::Operand>& operands);
hardware::hidl_vec<V1_2::Operand> convertToV1_2(const hardware::hidl_vec<V1_3::Operand>& operands);
hardware::hidl_vec<V1_3::Operand> convertToV1_3(const hardware::hidl_vec<V1_0::Operand>& operands);
hardware::hidl_vec<V1_3::Operand> convertToV1_3(const hardware::hidl_vec<V1_2::Operand>& operands);
hardware::hidl_vec<V1_3::Operand> convertToV1_3(const hardware::hidl_vec<V1_3::Operand>& operands);

bool compliantWithV1_0(const V1_0::Request& request);
bool compliantWithV1_0(const V1_3::Request& request);
bool compliantWithV1_2(const V1_3::Request& request);

V1_0::Request convertToV1_0(const V1_0::Request& request);
V1_0::Request convertToV1_0(const V1_3::Request& request);
V1_0::Request convertToV1_2(const V1_3::Request& request);
V1_3::Request convertToV1_3(const V1_0::Request& request);
V1_3::Request convertToV1_3(const V1_3::Request& request);

bool compliantWithV1_0(V1_0::OperandLifeTime lifetime);
bool compliantWithV1_0(V1_3::OperandLifeTime lifetime);
bool compliantWithV1_3(V1_0::OperandLifeTime lifetime);
bool compliantWithV1_3(V1_3::OperandLifeTime lifetime);

V1_0::OperandLifeTime convertToV1_0(V1_0::OperandLifeTime lifetime);
V1_0::OperandLifeTime convertToV1_0(V1_3::OperandLifeTime lifetime);
V1_3::OperandLifeTime convertToV1_3(V1_0::OperandLifeTime lifetime);
V1_3::OperandLifeTime convertToV1_3(V1_3::OperandLifeTime lifetime);

constexpr V1_3::Priority convertToHalPriority(int32_t priority) {
    switch (priority) {
        case ANEURALNETWORKS_PRIORITY_LOW:
            return V1_3::Priority::LOW;
        case ANEURALNETWORKS_PRIORITY_MEDIUM:
            return V1_3::Priority::MEDIUM;
        case ANEURALNETWORKS_PRIORITY_HIGH:
            return V1_3::Priority::HIGH;
    }
    LOG(FATAL) << "unrecognized priority: " << priority;
    return {};
}

constexpr Priority convertToCanonicalPriority(int32_t priority) {
    switch (priority) {
        case ANEURALNETWORKS_PRIORITY_LOW:
            return Priority::LOW;
        case ANEURALNETWORKS_PRIORITY_MEDIUM:
            return Priority::MEDIUM;
        case ANEURALNETWORKS_PRIORITY_HIGH:
            return Priority::HIGH;
    }
    LOG(FATAL) << "unrecognized priority: " << priority;
    return {};
}

// The function syncWait() has the same semantics as the system function
// ::sync_wait(), except that the syncWait() return value is semantically
// richer.  The timeout parameter is in msecs.
enum class FenceState {
    ACTIVE,    // fence has not been signaled
    SIGNALED,  // fence has been signaled
    ERROR,     // fence has been placed in the error state
    UNKNOWN,   // either bad argument passed to syncWait(), or internal error
};
FenceState syncWait(int fd, int timeout);

#ifdef NN_DEBUGGABLE
uint32_t getProp(const char* str, uint32_t defaultValue = 0);
#endif  // NN_DEBUGGABLE

// DEPRECATED. Use checked conversions from nnapi/hal/1.X/Conversions.h.
Capabilities::OperandPerformance uncheckedConvert(
        const V1_3::Capabilities::OperandPerformance& operandPerformance);
Capabilities::PerformanceInfo uncheckedConvert(const V1_0::PerformanceInfo& performanceInfo);
Capabilities uncheckedConvert(const V1_3::Capabilities& capabilities);
DataLocation uncheckedConvert(const V1_0::DataLocation& location);
ErrorStatus uncheckedConvert(V1_0::ErrorStatus status);
ErrorStatus uncheckedConvert(V1_3::ErrorStatus status);
Extension::OperandTypeInformation uncheckedConvert(const V1_2::Extension::OperandTypeInformation&);
Extension uncheckedConvert(const V1_2::Extension& extension);
hardware::hidl_vec<uint8_t> uncheckedConvert(const Operand::ExtensionParams& params);
MeasureTiming uncheckedConvert(V1_2::MeasureTiming measure);
Memory uncheckedConvert(const hardware::hidl_memory& memory);
Model::ExtensionNameAndPrefix uncheckedConvert(const V1_2::Model::ExtensionNameAndPrefix&);
Model::Subgraph uncheckedConvert(const V1_3::Subgraph& subgraph);
Model uncheckedConvert(const V1_3::Model& model);
Operand::ExtensionParams uncheckedConvert(const hardware::hidl_vec<uint8_t>& params);
Operand::ExtraParams uncheckedConvert(const V1_2::Operand::ExtraParams& params);
Operand::LifeTime uncheckedConvert(V1_3::OperandLifeTime lifetime);
Operand::SymmPerChannelQuantParams uncheckedConvert(const V1_2::SymmPerChannelQuantParams& params);
OperandType uncheckedConvert(V1_3::OperandType operandType);
Operand uncheckedConvert(const V1_3::Operand& operand);
OperationType uncheckedConvert(V1_3::OperationType operationType);
Operation uncheckedConvert(const V1_3::Operation& operation);
OptionalTimeoutDuration uncheckedConvert(const V1_3::OptionalTimeoutDuration& timeoutDuration);
OutputShape uncheckedConvert(const V1_2::OutputShape& outputShape);
Request::Argument uncheckedConvert(const V1_0::RequestArgument& requestArgument);
Request::MemoryPool uncheckedConvert(const V1_3::Request::MemoryPool& memoryPool);
Request uncheckedConvert(const V1_3::Request& request);
std::vector<Extension> uncheckedConvert(const hardware::hidl_vec<V1_2::Extension>& extensions);
std::vector<Memory> uncheckedConvert(const hardware::hidl_vec<hardware::hidl_memory>& memories);
std::vector<Model::Subgraph> uncheckedConvert(const hardware::hidl_vec<V1_3::Subgraph>& subgraphs);
std::vector<Operand> uncheckedConvert(const hardware::hidl_vec<V1_3::Operand>& operands);
std::vector<OutputShape> uncheckedConvert(
        const hardware::hidl_vec<V1_2::OutputShape>& outputShapes);
std::vector<Request::MemoryPool> uncheckedConvert(
        const hardware::hidl_vec<V1_3::Request::MemoryPool>& memoryPools);
Timing uncheckedConvert(const V1_2::Timing& timing);

// DEPRECATED. Use conversions from nnapi/hal/1.X/Conversions.h.
hardware::hidl_memory convertToV1_0(const Memory& memory);
hardware::hidl_vec<hardware::hidl_memory> convertToV1_0(const std::vector<Memory>& memories);
hardware::hidl_vec<uint8_t> convertToV1_0(const Model::OperandValues& operandValues);
hardware::hidl_vec<V1_2::OutputShape> convertToV1_2(const std::vector<OutputShape>& outputShapes);
hardware::hidl_vec<V1_3::BufferRole> convertToV1_3(const std::vector<BufferRole>& bufferRoles);
V1_0::DataLocation convertToV1_0(const DataLocation& location);
V1_0::ErrorStatus convertToV1_0(ErrorStatus status);
V1_0::RequestArgument convertToV1_0(const Request::Argument& requestArgument);
V1_1::ExecutionPreference convertToV1_1(ExecutionPreference preference);
V1_2::MeasureTiming convertToV1_2(MeasureTiming measure);
V1_2::Model::ExtensionNameAndPrefix convertToV1_2(const Model::ExtensionNameAndPrefix&);
V1_2::Operand::ExtraParams convertToV1_2(const Operand::ExtraParams& params);
V1_2::OutputShape convertToV1_2(const OutputShape& outputShape);
V1_2::SymmPerChannelQuantParams convertToV1_2(const Operand::SymmPerChannelQuantParams& params);
V1_2::Timing convertToV1_2(const Timing& timing);
V1_3::BufferRole convertToV1_3(const BufferRole& bufferRole);
V1_3::ErrorStatus convertToV1_3(ErrorStatus status);
V1_3::Model convertToV1_3(const Model& model);
V1_3::Operand convertToV1_3(const Operand& operand);
V1_3::OperandLifeTime convertToV1_3(Operand::LifeTime lifetime);
V1_3::OperandType convertToV1_3(OperandType operandType);
V1_3::Operation convertToV1_3(const Operation& operation);
V1_3::OperationType convertToV1_3(OperationType operationType);
V1_3::OptionalTimeoutDuration convertToV1_3(const OptionalTimeoutDuration& timeoutDuration);
V1_3::OptionalTimePoint convertToV1_3(const OptionalTimePoint& timePoint);
V1_3::Priority convertToV1_3(Priority priority);
V1_3::Request convertToV1_3(const Request& request);
V1_3::Request::MemoryPool convertToV1_3(const Request::MemoryPool& memoryPool);
V1_3::Subgraph convertToV1_3(const Model::Subgraph& model);

}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORKS_ML_NN_COMMON_UTILS_H
