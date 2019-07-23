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
#include <android/hidl/allocator/1.0/IAllocator.h>
#include <android/hidl/memory/1.0/IMemory.h>
#include <hidlmemory/mapping.h>

namespace android::nn::hal {

using android::sp;
using hardware::hidl_array;
using hardware::hidl_death_recipient;
using hardware::hidl_enum_range;
using hardware::hidl_handle;
using hardware::hidl_memory;
using hardware::hidl_string;
using hardware::hidl_vec;
using hardware::Return;
using hardware::Void;
using hardware::neuralnetworks::V1_0::DataLocation;
using hardware::neuralnetworks::V1_0::DeviceStatus;
using hardware::neuralnetworks::V1_0::ErrorStatus;
using hardware::neuralnetworks::V1_0::FusedActivationFunc;
using hardware::neuralnetworks::V1_0::OperandLifeTime;
using hardware::neuralnetworks::V1_0::PerformanceInfo;
using hardware::neuralnetworks::V1_0::Request;
using hardware::neuralnetworks::V1_0::RequestArgument;
using hardware::neuralnetworks::V1_1::ExecutionPreference;
using hardware::neuralnetworks::V1_2::Capabilities;
using hardware::neuralnetworks::V1_2::Constant;
using hardware::neuralnetworks::V1_2::DeviceType;
using hardware::neuralnetworks::V1_2::Extension;
using hardware::neuralnetworks::V1_2::FmqRequestDatum;
using hardware::neuralnetworks::V1_2::FmqResultDatum;
using hardware::neuralnetworks::V1_2::IBurstCallback;
using hardware::neuralnetworks::V1_2::IBurstContext;
using hardware::neuralnetworks::V1_2::IDevice;
using hardware::neuralnetworks::V1_2::IExecutionCallback;
using hardware::neuralnetworks::V1_2::IPreparedModel;
using hardware::neuralnetworks::V1_2::IPreparedModelCallback;
using hardware::neuralnetworks::V1_2::MeasureTiming;
using hardware::neuralnetworks::V1_2::Model;
using hardware::neuralnetworks::V1_2::Operand;
using hardware::neuralnetworks::V1_2::OperandType;
using hardware::neuralnetworks::V1_2::OperandTypeRange;
using hardware::neuralnetworks::V1_2::Operation;
using hardware::neuralnetworks::V1_2::OperationType;
using hardware::neuralnetworks::V1_2::OperationTypeRange;
using hardware::neuralnetworks::V1_2::OutputShape;
using hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams;
using hardware::neuralnetworks::V1_2::Timing;
using hidl::allocator::V1_0::IAllocator;
using hidl::memory::V1_0::IMemory;

namespace V1_0 = hardware::neuralnetworks::V1_0;
namespace V1_1 = hardware::neuralnetworks::V1_1;
namespace V1_2 = hardware::neuralnetworks::V1_2;

}  // namespace android::nn::hal

#endif  // ANDROID_FRAMEWORKS_ML_NN_COMMON_HAL_INTERFACES_H
