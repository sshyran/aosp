/*
 * Copyright (C) 2020 The Android Open Source Project
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

#ifndef ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_TYPE_UTILS_H
#define ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_TYPE_UTILS_H

#include <ostream>
#include <utility>
#include <vector>

#include "nnapi/OperandTypes.h"
#include "nnapi/OperationTypes.h"
#include "nnapi/Result.h"
#include "nnapi/Types.h"

namespace android::nn {

bool isExtension(OperandType type);
bool isExtension(OperationType type);

bool isNonExtensionScalar(OperandType operandType);

size_t getNonExtensionSize(OperandType operandType);

std::optional<size_t> getNonExtensionSize(OperandType operandType, const Dimensions& dimensions);
std::optional<size_t> getNonExtensionSize(const Operand& operand);

size_t getOffsetFromInts(int lower, int higher);
std::pair<int32_t, int32_t> getIntsFromOffset(size_t offset);

std::vector<uint32_t> countNumberOfConsumers(size_t numberOfOperands,
                                             const std::vector<nn::Operation>& operations);

// Combine two tensor dimensions, both may have unspecified dimensions or rank.
Result<Dimensions> combineDimensions(const Dimensions& lhs, const Dimensions& rhs);

// Set of output utility functions.
std::ostream& operator<<(std::ostream& os, const DeviceStatus& deviceStatus);
std::ostream& operator<<(std::ostream& os, const ExecutionPreference& executionPreference);
std::ostream& operator<<(std::ostream& os, const DeviceType& deviceType);
std::ostream& operator<<(std::ostream& os, const MeasureTiming& measureTiming);
std::ostream& operator<<(std::ostream& os, const OperandType& operandType);
std::ostream& operator<<(std::ostream& os, const Operand::LifeTime& lifetime);
std::ostream& operator<<(std::ostream& os, const OperationType& operationType);
std::ostream& operator<<(std::ostream& os, const Request::Argument::LifeTime& lifetime);
std::ostream& operator<<(std::ostream& os, const Priority& priority);
std::ostream& operator<<(std::ostream& os, const ErrorStatus& errorStatus);
std::ostream& operator<<(std::ostream& os, const OutputShape& outputShape);
std::ostream& operator<<(std::ostream& os, const Timing& timing);
std::ostream& operator<<(std::ostream& os, const Capabilities::PerformanceInfo& performanceInfo);
std::ostream& operator<<(std::ostream& os,
                         const Capabilities::OperandPerformance& operandPerformance);
std::ostream& operator<<(std::ostream& os,
                         const Capabilities::OperandPerformanceTable& operandPerformances);
std::ostream& operator<<(std::ostream& os, const Capabilities& capabilities);
std::ostream& operator<<(std::ostream& os,
                         const Extension::OperandTypeInformation& operandTypeInformation);
std::ostream& operator<<(std::ostream& os, const Extension& extension);
std::ostream& operator<<(std::ostream& os, const DataLocation& location);
std::ostream& operator<<(std::ostream& os,
                         const Operand::SymmPerChannelQuantParams& symmPerChannelQuantParams);
std::ostream& operator<<(std::ostream& os, const Operand::ExtraParams& extraParams);
std::ostream& operator<<(std::ostream& os, const Operand& operand);
std::ostream& operator<<(std::ostream& os, const Operation& operation);
std::ostream& operator<<(std::ostream& os, const NativeHandle& handle);
std::ostream& operator<<(std::ostream& os, const Memory& memory);
std::ostream& operator<<(std::ostream& os, const Model::Subgraph& subgraph);
std::ostream& operator<<(std::ostream& os, const Model::OperandValues& operandValues);
std::ostream& operator<<(std::ostream& os,
                         const Model::ExtensionNameAndPrefix& extensionNameAndPrefix);
std::ostream& operator<<(std::ostream& os, const Model& model);
std::ostream& operator<<(std::ostream& os, const BufferDesc& bufferDesc);
std::ostream& operator<<(std::ostream& os, const BufferRole& bufferRole);
std::ostream& operator<<(std::ostream& os, const Request::Argument& requestArgument);
std::ostream& operator<<(std::ostream& os, const Request::MemoryPool& memoryPool);
std::ostream& operator<<(std::ostream& os, const Request& request);
std::ostream& operator<<(std::ostream& os, const TimePoint& timePoint);
std::ostream& operator<<(std::ostream& os, const OptionalTimePoint& optionalTimePoint);
std::ostream& operator<<(std::ostream& os, const TimeoutDuration& timeoutDuration);
std::ostream& operator<<(std::ostream& os, const OptionalTimeoutDuration& optionalTimeoutDuration);
std::ostream& operator<<(std::ostream& os, const Version& version);

bool operator==(const Timing& a, const Timing& b);
bool operator!=(const Timing& a, const Timing& b);
bool operator==(const Capabilities::PerformanceInfo& a, const Capabilities::PerformanceInfo& b);
bool operator==(const Capabilities::OperandPerformance& a,
                const Capabilities::OperandPerformance& b);
bool operator==(const Capabilities& a, const Capabilities& b);
bool operator==(const Extension::OperandTypeInformation& a,
                const Extension::OperandTypeInformation& b);
bool operator==(const Extension& a, const Extension& b);
bool operator==(const Operand::SymmPerChannelQuantParams& a,
                const Operand::SymmPerChannelQuantParams& b);
bool operator!=(const Operand::SymmPerChannelQuantParams& a,
                const Operand::SymmPerChannelQuantParams& b);
bool operator==(const Operand& a, const Operand& b);
bool operator!=(const Operand& a, const Operand& b);
bool operator==(const Operation& a, const Operation& b);
bool operator!=(const Operation& a, const Operation& b);

}  // namespace android::nn

#endif  // ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_TYPE_UTILS_H
