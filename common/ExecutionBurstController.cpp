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
#include <cstring>
#include <limits>
#include <string>
#include "Tracing.h"

namespace android::nn {
namespace {

using ::android::hardware::MQDescriptorSync;
using FmqRequestDescriptor = MQDescriptorSync<FmqRequestDatum>;
using FmqResultDescriptor = MQDescriptorSync<FmqResultDatum>;

constexpr Timing kNoTiming = {std::numeric_limits<uint64_t>::max(),
                              std::numeric_limits<uint64_t>::max()};

}  // anonymous namespace

// serialize a request into a packet
std::vector<FmqRequestDatum> serialize(const Request& request, MeasureTiming measure,
                                       const std::vector<int32_t>& slots) {
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
std::optional<std::tuple<ErrorStatus, std::vector<OutputShape>, Timing>> deserialize(
        const std::vector<FmqResultDatum>& data) {
    using discriminator = FmqResultDatum::hidl_discriminator;

    std::vector<OutputShape> outputShapes;
    size_t index = 0;

    // validate packet information
    if (data.size() == 0 || data[index].getDiscriminator() != discriminator::packetInformation) {
        LOG(ERROR) << "FMQ Result packet ill-formed";
        return std::nullopt;
    }

    // unpackage packet information
    const FmqResultDatum::PacketInformation& packetInfo = data[index].packetInformation();
    index++;
    const uint32_t packetSize = packetInfo.packetSize;
    const ErrorStatus errorStatus = packetInfo.errorStatus;
    const uint32_t numberOfOperands = packetInfo.numberOfOperands;

    // verify packet size
    if (data.size() != packetSize) {
        LOG(ERROR) << "FMQ Result packet ill-formed";
        return std::nullopt;
    }

    // unpackage operands
    for (size_t operand = 0; operand < numberOfOperands; ++operand) {
        // validate operand information
        if (data[index].getDiscriminator() != discriminator::operandInformation) {
            LOG(ERROR) << "FMQ Result packet ill-formed";
            return std::nullopt;
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
                return std::nullopt;
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
        return std::nullopt;
    }

    // unpackage execution timing
    const Timing timing = data[index].executionTiming();
    index++;

    // validate packet information
    if (index != packetSize) {
        LOG(ERROR) << "FMQ Result packet ill-formed";
        return std::nullopt;
    }

    // return result
    return std::make_tuple(errorStatus, std::move(outputShapes), timing);
}

std::pair<std::unique_ptr<ResultChannelReceiver>, const FmqResultDescriptor*>
ResultChannelReceiver::create(size_t channelLength, bool blocking) {
    std::unique_ptr<FmqResultChannel> fmqResultChannel =
            std::make_unique<FmqResultChannel>(channelLength, /*confEventFlag=*/blocking);
    if (!fmqResultChannel->isValid()) {
        LOG(ERROR) << "Unable to create ResultChannelReceiver";
        return {nullptr, nullptr};
    }
    const FmqResultDescriptor* descriptor = fmqResultChannel->getDesc();
    return std::make_pair(
            std::make_unique<ResultChannelReceiver>(std::move(fmqResultChannel), blocking),
            descriptor);
}

ResultChannelReceiver::ResultChannelReceiver(std::unique_ptr<FmqResultChannel> fmqResultChannel,
                                             bool blocking)
    : mFmqResultChannel(std::move(fmqResultChannel)), mBlocking(blocking) {}

std::optional<std::tuple<ErrorStatus, std::vector<OutputShape>, Timing>>
ResultChannelReceiver::getBlocking() {
    const auto packet = getPacketBlocking();
    if (!packet) {
        return std::nullopt;
    }

    return deserialize(*packet);
}

void ResultChannelReceiver::invalidate() {
    mTeardown = true;

    // force unblock
    // ExecutionBurstServer is by default waiting on a request packet. If the
    // client process destroys its burst object, the server will still be
    // waiting on the futex (assuming mBlocking is true). This force unblock
    // wakes up any thread waiting on the futex.
    if (mBlocking) {
        // TODO: look for a different/better way to signal/notify the futex to
        // wake up any thread waiting on it
        FmqResultDatum datum;
        datum.packetInformation({/*.packetSize=*/0, /*.errorStatus=*/ErrorStatus::GENERAL_FAILURE,
                                 /*.numberOfOperands=*/0});
        mFmqResultChannel->writeBlocking(&datum, 1);
    }
}

std::optional<std::vector<FmqResultDatum>> ResultChannelReceiver::getPacketBlocking() {
    using discriminator = FmqResultDatum::hidl_discriminator;

    if (mTeardown) {
        return std::nullopt;
    }

    // wait for result packet and read first element of result packet
    FmqResultDatum datum;
    bool success = true;
    if (mBlocking) {
        success = mFmqResultChannel->readBlocking(&datum, 1);
    } else {
        while ((success = !mTeardown.load(std::memory_order_relaxed)) &&
               !mFmqResultChannel->read(&datum, 1)) {
        }
    }

    // retrieve remaining elements
    // NOTE: all of the data is already available at this point, so there's no
    // need to do a blocking wait to wait for more data. This is known because
    // in FMQ, all writes are published (made available) atomically. Currently,
    // the producer always publishes the entire packet in one function call, so
    // if the first element of the packet is available, the remaining elements
    // are also available.
    const size_t count = mFmqResultChannel->availableToRead();
    std::vector<FmqResultDatum> packet(count + 1);
    std::memcpy(&packet.front(), &datum, sizeof(datum));
    success &= mFmqResultChannel->read(packet.data() + 1, count);

    // terminate loop
    if (mTeardown) {
        return std::nullopt;
    }

    // ensure packet was successfully received
    if (!success) {
        LOG(ERROR) << "Error receiving packet";
        return std::nullopt;
    }

    return std::make_optional(std::move(packet));
}

std::pair<std::unique_ptr<RequestChannelSender>, const FmqRequestDescriptor*>
RequestChannelSender::create(size_t channelLength, bool blocking) {
    std::unique_ptr<FmqRequestChannel> fmqRequestChannel =
            std::make_unique<FmqRequestChannel>(channelLength, /*confEventFlag=*/blocking);
    if (!fmqRequestChannel->isValid()) {
        LOG(ERROR) << "Unable to create RequestChannelSender";
        return {nullptr, nullptr};
    }
    const FmqRequestDescriptor* descriptor = fmqRequestChannel->getDesc();
    return std::make_pair(
            std::make_unique<RequestChannelSender>(std::move(fmqRequestChannel), blocking),
            descriptor);
}

RequestChannelSender::RequestChannelSender(std::unique_ptr<FmqRequestChannel> fmqRequestChannel,
                                           bool blocking)
    : mFmqRequestChannel(std::move(fmqRequestChannel)), mBlocking(blocking) {}

bool RequestChannelSender::send(const Request& request, MeasureTiming measure,
                                const std::vector<int32_t>& slots) {
    const std::vector<FmqRequestDatum> serialized = serialize(request, measure, slots);
    return sendPacket(serialized);
}

bool RequestChannelSender::sendPacket(const std::vector<FmqRequestDatum>& packet) {
    if (packet.size() > mFmqRequestChannel->availableToWrite()) {
        LOG(ERROR)
                << "RequestChannelSender::sendPacket -- packet size exceeds size available in FMQ";
        return false;
    }

    if (mBlocking) {
        return mFmqRequestChannel->writeBlocking(packet.data(), packet.size());
    } else {
        return mFmqRequestChannel->write(packet.data(), packet.size());
    }
}

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
    auto [fmqRequestChannel, fmqRequestDescriptor] =
            RequestChannelSender::create(kExecutionBurstChannelLength, blocking);
    auto [fmqResultChannel, fmqResultDescriptor] =
            ResultChannelReceiver::create(kExecutionBurstChannelLength, blocking);

    // check FMQ objects
    if (!fmqRequestChannel || !fmqResultChannel || !fmqRequestDescriptor || !fmqResultDescriptor) {
        LOG(ERROR) << "ExecutionBurstController::create failed to create FastMessageQueue";
        return nullptr;
    }

    // configure burst
    ErrorStatus errorStatus;
    sp<IBurstContext> burstContext;
    const Return<void> ret = preparedModel->configureExecutionBurst(
            callback, *fmqRequestDescriptor, *fmqResultDescriptor,
            [&errorStatus, &burstContext](ErrorStatus status, const sp<IBurstContext>& context) {
                errorStatus = status;
                burstContext = context;
            });

    // check burst
    if (!ret.isOk()) {
        LOG(ERROR) << "IPreparedModel::configureExecutionBurst failed with description "
                   << ret.description();
        return nullptr;
    }
    if (errorStatus != ErrorStatus::NONE) {
        LOG(ERROR) << "IPreparedModel::configureExecutionBurst failed with status "
                   << toString(errorStatus);
        return nullptr;
    }
    if (burstContext == nullptr) {
        LOG(ERROR) << "IPreparedModel::configureExecutionBurst returned nullptr for burst";
        return nullptr;
    }

    // make and return controller
    return std::make_unique<ExecutionBurstController>(
            std::move(fmqRequestChannel), std::move(fmqResultChannel), burstContext, callback);
}

ExecutionBurstController::ExecutionBurstController(
        std::unique_ptr<RequestChannelSender> requestChannelSender,
        std::unique_ptr<ResultChannelReceiver> resultChannelReceiver,
        const sp<IBurstContext>& burstContext, const sp<ExecutionBurstCallback>& callback)
    : mRequestChannelSender(std::move(requestChannelSender)),
      mResultChannelReceiver(std::move(resultChannelReceiver)),
      mBurstContext(burstContext),
      mMemoryCache(callback) {}

std::tuple<ErrorStatus, std::vector<OutputShape>, Timing> ExecutionBurstController::compute(
        const Request& request, MeasureTiming measure, const std::vector<intptr_t>& memoryIds) {
    NNTRACE_FULL(NNTRACE_LAYER_IPC, NNTRACE_PHASE_EXECUTION, "ExecutionBurstController::compute");

    std::lock_guard<std::mutex> guard(mMutex);

    // send request packet
    const std::vector<int32_t> slots = mMemoryCache->getSlots(request.pools, memoryIds);
    const bool success = mRequestChannelSender->send(request, measure, slots);
    if (!success) {
        LOG(ERROR) << "Error sending FMQ packet";
        return {ErrorStatus::GENERAL_FAILURE, {}, kNoTiming};
    }

    // get result packet
    const auto result = mResultChannelReceiver->getBlocking();
    if (!result) {
        LOG(ERROR) << "Error retrieving FMQ packet";
        return {ErrorStatus::GENERAL_FAILURE, {}, kNoTiming};
    }
    return *result;
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
