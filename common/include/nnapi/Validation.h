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

#ifndef ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_VALIDATION_H
#define ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_VALIDATION_H

#include <memory>
#include <set>
#include <tuple>
#include <vector>

#include "nnapi/Types.h"

namespace android::nn {

// Utility functions

Version combineVersions(Version lhs, Version rhs);

Version validate(const DeviceStatus& deviceStatus);
Version validate(const ExecutionPreference& executionPreference);
Version validate(const DeviceType& deviceType);
Version validate(const MeasureTiming& measureTiming);
Version validate(const Priority& priority);
Version validate(const ErrorStatus& errorStatus);
Version validate(const OutputShape& outputShape);
Version validate(const Timing& timing);
Version validate(const Capabilities& capabilities);
Version validate(const Extension& extension);
Version validate(const NativeHandle& handle);
Version validate(const Memory& memory);
Version validate(const Model& model);
Version validate(const BufferDesc& bufferDesc);
Version validate(const BufferRole& bufferRole);
Version validate(const Request& request);
Version validate(const OptionalTimePoint& optionalTimePoint);
Version validate(const OptionalTimeoutDuration& optionalTimeoutDuration);

Version validate(const std::vector<OutputShape>& outputShapes);
Version validate(const std::vector<Extension>& extensions);
Version validate(const std::vector<NativeHandle>& handles);
Version validate(const std::vector<BufferRole>& bufferRoles);

// Validate request applied to model.
Version validateRequestForModel(const Request& request, const Model& model);

// Validate memory descriptor.
enum class IOType { INPUT, OUTPUT };
using PreparedModelRole = std::tuple<const IPreparedModel*, IOType, uint32_t>;

// Verifies that the input arguments to IDevice::allocate are valid.
// Optionally, this function can return a flattened prepared model roles and a combined operand.
// Pass nullptr if either value is not needed.
// IMPORTANT: This function cannot validate dimensions and extraParams with extension operand type.
// Each driver should do their own validation of extension type dimensions and extraParams.
Version validateMemoryDesc(
        const BufferDesc& desc,
        const std::vector<std::shared_ptr<const IPreparedModel>>& preparedModels,
        const std::vector<BufferRole>& inputRoles, const std::vector<BufferRole>& outputRoles,
        const std::function<const Model*(const std::shared_ptr<const IPreparedModel>&)>& getModel,
        std::set<PreparedModelRole>* preparedModelRoles, Operand* combinedOperand);

bool isValidOperandSymmPerChannelQuantParams(const Operand& operand,
                                             const Operand::SymmPerChannelQuantParams& channelQuant,
                                             const char* tag);

// Validates an operand type.
//
// extensionOperandTypeInfo must be nullptr iff the type is not an extension type.
//
// If allowPartial is true, the dimensions may be underspecified.
bool isValidOperandType(const Operand& type,
                        const Extension::OperandTypeInformation* extensionOperandTypeInfo,
                        const char* tag, bool allowPartial);
bool isValidOperandList(const std::vector<uint32_t>& list, size_t operandCount, const char* tag);

Version validateOperation(const Operation& operation, const std::vector<Operand>& operands,
                          const std::vector<Model::Subgraph>& subgraphs);

}  // namespace android::nn

#endif  // ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_VALIDATION_H
