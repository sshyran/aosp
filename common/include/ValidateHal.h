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

#ifndef ANDROID_FRAMEWORKS_ML_NN_COMMON_VALIDATE_HAL_H
#define ANDROID_FRAMEWORKS_ML_NN_COMMON_VALIDATE_HAL_H

#include "HalInterfaces.h"

namespace android {
namespace nn {

enum class HalVersion : int32_t {
    UNKNOWN,
    V1_0,
    V1_1,
    V1_2,
    V1_3,
    LATEST = V1_3,
};

// Verifies that the model is valid, i.e. it is consistent, takes
// only acceptable values, the constants don't extend outside the memory
// regions they are part of, etc.
// IMPORTANT: This function cannot validate that OEM operation and operands
// are correctly defined, as these are specific to each implementation.
// Each driver should do their own validation of OEM types.
template <class T_Model>
bool validateModel(const T_Model& model);

// Verfies that the request for the given model is valid.
// IMPORTANT: This function cannot validate that OEM operation and operands
// are correctly defined, as these are specific to each implementation.
// Each driver should do their own validation of OEM types.
// For HAL version 1.3 or higher, this function cannot validate that the
// buffer tokens are valid. Each driver should do their own validation of
// buffer tokens.
template <class T_Request, class T_Model>
bool validateRequest(const T_Request& request, const T_Model& model,
                     bool allowUnspecifiedOutput = true);

// Verfies that the execution preference is valid.
bool validateExecutionPreference(hal::ExecutionPreference preference);

// Verfies that the priority is valid.
bool validatePriority(hal::Priority priority);

bool validOperationType(hal::V1_0::OperationType operation);
bool validOperationType(hal::V1_1::OperationType operation);
bool validOperationType(hal::V1_2::OperationType operation);

bool validOperandType(hal::V1_0::OperandType operand);
bool validOperandType(hal::V1_2::OperandType operand);
bool validOperandType(hal::V1_3::OperandType operand);

// Verfies that the memory pool is valid in the specified HAL version.
bool validatePool(const hal::hidl_memory& pool, HalVersion ver = HalVersion::LATEST);
bool validatePool(const hal::V1_3::Request::MemoryPool& pool, HalVersion ver = HalVersion::LATEST);

}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORKS_ML_NN_COMMON_VALIDATE_HAL_H
