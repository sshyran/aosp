/*
 * Copyright (C) 2019 The Android Open Source Project
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

#define LOG_TAG "ExecutionBurstController"

#include "ExecutionBurstController.h"

#include <android-base/logging.h>
#include <string>
#include "Tracing.h"

namespace android::nn {
namespace {

using FmqRequestDescriptor = MQDescriptorSync<FmqRequestDatum>;
using FmqResultDescriptor = MQDescriptorSync<FmqResultDatum>;

constexpr Timing kInvalidTiming = {UINT64_MAX, UINT64_MAX};

}  // anonymous namespace

Return<void> ExecutionBurstController::ExecutionBurstCallback::getMemories(
        const hidl_vec<int32_t>& slots, getMemories_cb cb) {
    std::lock_guard<std::mutex> guard(mMutex);

    // get all memories
    hidl_vec<hidl_memory> memories(slots.size());
    std::transform(slots.begin(), slots.end(), memories.begin(), [this](int32_t slot) {
        return slot < mMemoryCache.size() ? mMemoryCache[slot] : hidl_memory{};
    });

    // ensure all memories are valid
    if (!std::all_of(memories.begin(), memories.end(),
                     [](const hidl_memory& memory) { return memory.valid(); })) {
        cb(ErrorStatus::INVALID_ARGUMENT, {});
        return Void();
    }

    // return successful
    cb(ErrorStatus::NONE, std::move(memories));
    return Void();
}

std::vector<int32_t> ExecutionBurstController::ExecutionBurstCallback::getSlots(
        const hidl_vec<hidl_memory>& memories, const std::vector<intptr_t>& keys) {
    std::lock_guard<std::mutex> guard(mMutex);

    // retrieve (or bind) all slots corresponding to memories
    std::vector<int32_t> slots;
    slots.reserve(memories.size());
    for (size_t i = 0; i < memories.size(); ++i) {
        slots.push_back(getSlotLocked(memories[i], keys[i]));
    }
    return slots;
}

std::pair<bool, int32_t> ExecutionBurstController::ExecutionBurstCallback::freeMemory(
        intptr_t key) {
    std::lock_guard<std::mutex> guard(mMutex);

    auto iter = mMemoryIdToSlot.find(key);
    if (iter == mMemoryIdToSlot.end()) {
        return {false, 0};
    }
    const int32_t slot = iter->second;
    mMemoryIdToSlot.erase(key);
    mMemoryCache[slot] = {};
    mFreeSlots.push(slot);
    return {true, slot};
}

int32_t ExecutionBurstController::ExecutionBurstCallback::getSlotLocked(const hidl_memory& memory,
                                                                        intptr_t key) {
    auto iter = mMemoryIdToSlot.find(key);
    if (iter == mMemoryIdToSlot.end()) {
        const int32_t slot = allocateSlotLocked();
        mMemoryIdToSlot[key] = slot;
        mMemoryCache[slot] = memory;
        return slot;
    } else {
        const int32_t slot = iter->second;
        return slot;
    }
}

int32_t ExecutionBurstController::ExecutionBurstCallback::allocateSlotLocked() {
    constexpr size_t kMaxNumberOfSlots = std::numeric_limits<int32_t>::max();

    // if there is a free slot, use it
    if (mFreeSlots.size() > 0) {
        const int32_t slot = mFreeSlots.top();
        mFreeSlots.pop();
        return slot;
    }

    // otherwise use a slot for the first time
    CHECK(mMemoryCache.size() < kMaxNumberOfSlots) << "Exceeded maximum number of slots!";
    const int32_t slot = static_cast<int32_t>(mMemoryCache.size());
    mMemoryCache.emplace_back();

    return slot;
}

std::unique_ptr<ExecutionBurstController> ExecutionBurstController::create(
        const sp<IPreparedModel>& preparedModel, bool blocking) {
    // check inputs
    if (preparedModel == nullptr) {
        LOG(ERROR) << "ExecutionBurstController::create passed a nullptr";
        return nullptr;
    }

    // create callback object
    sp<ExecutionBurstCallback> callback = new ExecutionBurstCallback();
    if (callback == nullptr) {
        LOG(ERROR) << "ExecutionBurstController::create failed to create callback";
        return nullptr;
    }

    // create FMQ objects
    std::unique_ptr<FmqRequestChannel> fmqRequestChannel{new (std::nothrow) FmqRequestChannel(
            kExecutionBurstChannelLength, /*confEventFlag=*/blocking)};
    std::unique_ptr<FmqResultChannel> fmqResultChannel{new (std::nothrow) FmqResultChannel(
            kExecutionBurstChannelLength, /*confEventFlag=*/blocking)};

    // check FMQ objects
    if (!fmqRequestChannel || !fmqResultChannel || !fmqRequestChannel->isValid() ||
        !fmqResultChannel->isValid()) {
        LOG(ERROR) << "ExecutionBurstController::create failed to create FastMessageQueue";
        return nullptr;
    }

    // descriptors
    const FmqRequestDescriptor& fmqRequestDescriptor = *fmqRequestChannel->getDesc();
    const FmqResultDescriptor& fmqResultDescriptor = *fmqResultChannel->getDesc();

    // configure burst
    ErrorStatus errorStatus;
    sp<IBurstContext> burstContext;
    Return<void> ret = preparedModel->configureExecutionBurst(
            callback, fmqRequestDescriptor, fmqResultDescriptor,
            [&errorStatus, &burstContext](ErrorStatus status, const sp<IBurstContext>& context) {
                errorStatus = status;
                burstContext = context;
            });

    // check burst
    if (errorStatus != ErrorStatus::NONE) {
        LOG(ERROR) << "IPreparedModel::configureExecutionBurst failed with "
                   << toString(errorStatus);
        return nullptr;
    }
    if (burstContext == nullptr) {
        LOG(ERROR) << "IPreparedModel::configureExecutionBurst returned nullptr for burst";
        return nullptr;
    }

    // make and return controller
    return std::make_unique<ExecutionBurstController>(std::move(fmqRequestChannel),
                                                      std::move(fmqResultChannel), burstContext,
                                                      callback, blocking);
}

ExecutionBurstController::ExecutionBurstController(
        std::unique_ptr<FmqRequestChannel> fmqRequestChannel,
        std::unique_ptr<FmqResultChannel> fmqResultChannel, const sp<IBurstContext>& burstContext,
        const sp<ExecutionBurstCallback>& callback, bool blocking)
    : mFmqRequestChannel(std::move(fmqRequestChannel)),
      mFmqResultChannel(std::move(fmqResultChannel)),
      mBurstContext(burstContext),
      mMemoryCache(callback),
      mUsesFutex(blocking) {}

bool ExecutionBurstController::sendPacket(const std::vector<FmqRequestDatum>& packet) {
    if (mUsesFutex) {
        return mFmqRequestChannel->writeBlocking(packet.data(), packet.size());
    } else {
        return mFmqRequestChannel->write(packet.data(), packet.size());
    }
}

std::vector<FmqResultDatum> ExecutionBurstController::getPacketBlocking() {
    using discriminator = FmqResultDatum::hidl_discriminator;

    // wait for result packet and read first element of result packet
    // TODO: have a more elegant way to wait for data, and read it all at once.
    // For example, EventFlag can be used to directly wait on the futex, and all
    // the data can be read at once with a non-blocking call to
    // MessageQueue::read. For further optimization, MessageQueue::beginRead and
    // MessageQueue::commitRead can be used to avoid an extra copy of the
    // metadata.
    FmqResultDatum datum;
    bool success = true;
    if (mUsesFutex) {
        success = mFmqResultChannel->readBlocking(&datum, 1);
    } else {
        // TODO: better handle the case where the service crashes after
        // receiving the Request but before returning the result.
        while (!mFmqResultChannel->read(&datum, 1)) {
        }
    }

    // validate packet information
    if (!success || datum.getDiscriminator() != discriminator::packetInformation) {
        LOG(ERROR) << "FMQ Result packet ill-formed";
        return {};
    }

    // unpack packet information
    const auto& packetInfo = datum.packetInformation();
    const size_t count = packetInfo.packetSize;

    // retrieve remaining elements
    // NOTE: all of the data is already available at this point, so there's no
    // need to do a blocking wait to wait for more data. This is known because
    // in FMQ, all writes are published (made available) atomically. Currently,
    // the producer always publishes the entire packet in one function call, so
    // if the first element of the packet is available, the remaining elements
    // are also available.
    std::vector<FmqResultDatum> packet(count);
    packet.front() = datum;
    success = mFmqResultChannel->read(packet.data() + 1, packet.size() - 1);

    if (!success) {
        return {};
    }

    return packet;
}

// serialize a request into a packet
std::vector<FmqRequestDatum> ExecutionBurstController::serialize(
        const Request& request, MeasureTiming measure, const std::vector<intptr_t>& memoryIds) {
    // count how many elements need to be sent for a request
    size_t count = 2 + request.inputs.size() + request.outputs.size() + request.pools.size();
    for (const auto& input : request.inputs) {
        count += input.dimensions.size();
    }
    for (const auto& output : request.outputs) {
        count += output.dimensions.size();
    }

    // create buffer to temporarily store elements
    std::vector<FmqRequestDatum> data;
    data.reserve(count);

    // package packetInfo
    {
        FmqRequestDatum datum;
        datum.packetInformation(
                {/*.packetSize=*/static_cast<uint32_t>(count),
                 /*.numberOfInputOperands=*/static_cast<uint32_t>(request.inputs.size()),
                 /*.numberOfOutputOperands=*/static_cast<uint32_t>(request.outputs.size()),
                 /*.numberOfPools=*/static_cast<uint32_t>(request.pools.size())});
        data.push_back(datum);
    }

    // package input data
    for (const auto& input : request.inputs) {
        // package operand information
        FmqRequestDatum datum;
        datum.inputOperandInformation(
                {/*.hasNoValue=*/input.hasNoValue,
                 /*.location=*/input.location,
                 /*.numberOfDimensions=*/static_cast<uint32_t>(input.dimensions.size())});
        data.push_back(datum);

        // package operand dimensions
        for (uint32_t dimension : input.dimensions) {
            FmqRequestDatum datum;
            datum.inputOperandDimensionValue(dimension);
            data.push_back(datum);
        }
    }

    // package output data
    for (const auto& output : request.outputs) {
        // package operand information
        FmqRequestDatum datum;
        datum.outputOperandInformation(
                {/*.hasNoValue=*/output.hasNoValue,
                 /*.location=*/output.location,
                 /*.numberOfDimensions=*/static_cast<uint32_t>(output.dimensions.size())});
        data.push_back(datum);

        // package operand dimensions
        for (uint32_t dimension : output.dimensions) {
            FmqRequestDatum datum;
            datum.outputOperandDimensionValue(dimension);
            data.push_back(datum);
        }
    }

    // package pool identifier
    const std::vector<int32_t> slots = mMemoryCache->getSlots(request.pools, memoryIds);
    for (int32_t slot : slots) {
        FmqRequestDatum datum;
        datum.poolIdentifier(slot);
        data.push_back(datum);
    }

    // package measureTiming
    {
        FmqRequestDatum datum;
        datum.measureTiming(measure);
        data.push_back(datum);
    }

    // return packet
    return data;
}

// deserialize a packet into the result
std::tuple<ErrorStatus, std::vector<OutputShape>, Timing> ExecutionBurstController::deserialize(
        const std::vector<FmqResultDatum>& data) {
    using discriminator = FmqResultDatum::hidl_discriminator;

    std::vector<OutputShape> outputShapes;
    size_t index = 0;

    // validate packet information
    if (data[index].getDiscriminator() != discriminator::packetInformation) {
        LOG(ERROR) << "FMQ Result packet ill-formed";
        return {ErrorStatus::GENERAL_FAILURE, {}, kInvalidTiming};
    }

    // unpackage packet information
    const FmqResultDatum::PacketInformation& packetInfo = data[index].packetInformation();
    index++;
    const uint32_t packetSize = packetInfo.packetSize;
    const ErrorStatus errorStatus = packetInfo.errorStatus;
    const uint32_t numberOfOperands = packetInfo.numberOfOperands;

    // unpackage operands
    for (size_t operand = 0; operand < numberOfOperands; ++operand) {
        // validate operand information
        if (data[index].getDiscriminator() != discriminator::operandInformation) {
            LOG(ERROR) << "FMQ Result packet ill-formed";
            return {ErrorStatus::GENERAL_FAILURE, {}, kInvalidTiming};
        }

        // unpackage operand information
        const FmqResultDatum::OperandInformation& operandInfo = data[index].operandInformation();
        index++;
        const bool isSufficient = operandInfo.isSufficient;
        const uint32_t numberOfDimensions = operandInfo.numberOfDimensions;

        // unpackage operand dimensions
        std::vector<uint32_t> dimensions;
        dimensions.reserve(numberOfDimensions);
        for (size_t i = 0; i < numberOfDimensions; ++i) {
            // validate dimension
            if (data[index].getDiscriminator() != discriminator::operandDimensionValue) {
                LOG(ERROR) << "FMQ Result packet ill-formed";
                return {ErrorStatus::GENERAL_FAILURE, {}, kInvalidTiming};
            }

            // unpackage dimension
            const uint32_t dimension = data[index].operandDimensionValue();
            index++;

            // store result
            dimensions.push_back(dimension);
        }

        // store result
        outputShapes.push_back({/*.dimensions=*/dimensions, /*.isSufficient=*/isSufficient});
    }

    // validate execution timing
    if (data[index].getDiscriminator() != discriminator::executionTiming) {
        LOG(ERROR) << "FMQ Result packet ill-formed";
        return {ErrorStatus::GENERAL_FAILURE, {}, kInvalidTiming};
    }

    // unpackage execution timing
    const Timing timing = data[index].executionTiming();
    index++;

    // validate packet information
    if (index != packetSize) {
        LOG(ERROR) << "FMQ Result packet ill-formed";
        return {ErrorStatus::GENERAL_FAILURE, {}, kInvalidTiming};
    }

    // return result
    return std::make_tuple(errorStatus, std::move(outputShapes), timing);
}

std::tuple<ErrorStatus, std::vector<OutputShape>, Timing> ExecutionBurstController::compute(
        const Request& request, MeasureTiming measure, const std::vector<intptr_t>& memoryIds) {
    NNTRACE_FULL(NNTRACE_LAYER_IPC, NNTRACE_PHASE_EXECUTION, "ExecutionBurstController::compute");

    std::lock_guard<std::mutex> guard(mMutex);

    // serialize request
    std::vector<FmqRequestDatum> requestData = serialize(request, measure, memoryIds);

    // TODO: handle the case where the serialziation exceeds
    // kExecutionBurstChannelLength

    // send request packet
    bool success = sendPacket(requestData);
    if (!success) {
        LOG(ERROR) << "Error sending FMQ packet";
        return {ErrorStatus::GENERAL_FAILURE, {}, kInvalidTiming};
    }

    // get result packet
    const std::vector<FmqResultDatum> resultData = getPacketBlocking();
    if (resultData.empty()) {
        LOG(ERROR) << "Error retrieving FMQ packet";
        return {ErrorStatus::GENERAL_FAILURE, {}, kInvalidTiming};
    }

    // deserialize result
    return deserialize(resultData);
}

void ExecutionBurstController::freeMemory(intptr_t key) {
    std::lock_guard<std::mutex> guard(mMutex);

    bool valid;
    int32_t slot;
    std::tie(valid, slot) = mMemoryCache->freeMemory(key);
    if (valid) {
        mBurstContext->freeMemory(slot).isOk();
    }
}

}  // namespace android::nn
