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

#ifndef ANDROID_FRAMEWORKS_ML_NN_COMMON_HAL_INTERFACES_H
#define ANDROID_FRAMEWORKS_ML_NN_COMMON_HAL_INTERFACES_H

#include <android/hardware/neuralnetworks/1.0/IDevice.h>
#include <android/hardware/neuralnetworks/1.0/IExecutionCallback.h>
#include <android/hardware/neuralnetworks/1.0/IPreparedModel.h>
#include <android/hardware/neuralnetworks/1.0/IPreparedModelCallback.h>
#include <android/hardware/neuralnetworks/1.0/types.h>
#include <android/hardware/neuralnetworks/1.1/IDevice.h>
#include <android/hardware/neuralnetworks/1.1/types.h>
#include <android/hardware/neuralnetworks/1.2/IDevice.h>
#include <android/hardware/neuralnetworks/1.2/IExecutionCallback.h>
#include <android/hardware/neuralnetworks/1.2/IPreparedModel.h>
#include <android/hardware/neuralnetworks/1.2/IPreparedModelCallback.h>
#include <android/hardware/neuralnetworks/1.2/types.h>
#include <android/hidl/memory/1.0/IMemory.h>
#include <hidlmemory/mapping.h>

namespace android::nn::hal {

using android::sp;

using hardware::hidl_death_recipient;
using hardware::hidl_enum_range;
using hardware::hidl_handle;
using hardware::hidl_memory;
using hardware::hidl_string;
using hardware::hidl_vec;
using hardware::Return;
using hardware::Void;

using hidl::memory::V1_0::IMemory;

namespace V1_0 = hardware::neuralnetworks::V1_0;
namespace V1_1 = hardware::neuralnetworks::V1_1;
namespace V1_2 = hardware::neuralnetworks::V1_2;

using V1_0::DataLocation;
using V1_0::DeviceStatus;
using V1_0::ErrorStatus;
using V1_0::FusedActivationFunc;
using V1_0::OperandLifeTime;
using V1_0::PerformanceInfo;
using V1_0::Request;
using V1_0::RequestArgument;
using V1_1::ExecutionPreference;
using V1_2::Capabilities;
using V1_2::Constant;
using V1_2::DeviceType;
using V1_2::Extension;
using V1_2::FmqRequestDatum;
using V1_2::FmqResultDatum;
using V1_2::IBurstCallback;
using V1_2::IBurstContext;
using V1_2::IDevice;
using V1_2::IExecutionCallback;
using V1_2::IPreparedModel;
using V1_2::IPreparedModelCallback;
using V1_2::MeasureTiming;
using V1_2::Model;
using V1_2::Operand;
using V1_2::OperandType;
using V1_2::OperandTypeRange;
using V1_2::Operation;
using V1_2::OperationType;
using V1_2::OperationTypeRange;
using V1_2::OutputShape;
using V1_2::SymmPerChannelQuantParams;
using V1_2::Timing;

using CacheToken =
        hardware::hidl_array<uint8_t, static_cast<uint32_t>(Constant::BYTE_SIZE_OF_CACHE_TOKEN)>;

}  // namespace android::nn::hal

#endif  // ANDROID_FRAMEWORKS_ML_NN_COMMON_HAL_INTERFACES_H
