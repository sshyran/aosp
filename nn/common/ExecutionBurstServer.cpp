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

#define LOG_TAG "ExecutionBurstServer"

#include "ExecutionBurstServer.h"

#include <android-base/logging.h>
#include <set>
#include <string>

namespace android {
namespace nn {

BurstMemoryCache::BurstMemoryCache(const sp<IBurstCallback>& callback) : mCallback(callback) {}

hidl_vec<hidl_memory> BurstMemoryCache::getMemories(const std::vector<int32_t>& slots) {
    std::lock_guard<std::mutex> guard(mMutex);

    // find unique unknown slots
    std::set<int32_t> setOfUnknownSlots;
    for (int32_t slot : slots) {
        if (mSlotToMemoryCache.find(slot) == mSlotToMemoryCache.end()) {
            setOfUnknownSlots.insert(slot);
        }
    }
    const std::vector<int32_t> unknownSlots(setOfUnknownSlots.begin(), setOfUnknownSlots.end());

    // retrieve unknown slots
    if (!unknownSlots.empty()) {
        LOG(ERROR) << "server calling getMemories";
        ErrorStatus errorStatus = ErrorStatus::GENERAL_FAILURE;
        std::vector<hidl_memory> returnedMemories;
        Return<void> ret = mCallback->getMemories(
                unknownSlots, [&errorStatus, &returnedMemories](
                                      ErrorStatus status, const hidl_vec<hidl_memory>& memories) {
                    errorStatus = status;
                    if (status == ErrorStatus::NONE) {
                        returnedMemories = memories;
                    }
                });

        if (!ret.isOk() || errorStatus != ErrorStatus::NONE) {
            LOG(ERROR) << "Error retrieving memories";
            return {};
        }

        // add memories to unknown slots
        for (size_t i = 0; i < unknownSlots.size(); ++i) {
            mSlotToMemoryCache[unknownSlots[i]] = returnedMemories[i];
        }
    }

    // get all slots
    hidl_vec<hidl_memory> memories(slots.size());
    for (size_t i = 0; i < slots.size(); ++i) {
        memories[i] = mSlotToMemoryCache[slots[i]];
    }

    return memories;
}

void BurstMemoryCache::freeMemory(int32_t slot) {
    std::lock_guard<std::mutex> guard(mMutex);
    mSlotToMemoryCache.erase(slot);
}

ExecutionBurstServer::ExecutionBurstServer(const sp<IBurstCallback>& callback,
                                           std::unique_ptr<FmqRequestChannel> requestChannel,
                                           std::unique_ptr<FmqResultChannel> resultChannel,
                                           IPreparedModel* preparedModel)
    : mMemoryCache(callback),
      mFmqRequestChannel(std::move(requestChannel)),
      mFmqResultChannel(std::move(resultChannel)),
      mPreparedModel(preparedModel),
      mBlocking(mFmqRequestChannel->getEventFlagWord() != nullptr) {
    // TODO: highly document the threading behavior of this class
    mWorker = std::async(std::launch::async, [this] { task(); });
}

ExecutionBurstServer::~ExecutionBurstServer() {
    // set teardown flag
    mTeardown = true;

    // force unblock
    // ExecutionBurstServer is by default waiting on a request packet. If the
    // client process destroys its burst object, the server will still be
    // waiting on the futex (assuming mBlocking is true). This force unblock
    // wakes up any thread waiting on the futex.
    if (mBlocking) {
        // TODO: look for a different/better way to signal/notify the futex to
        // wake up any thread waiting on it
        FmqRequestDatum datum;
        datum.packetInformation({/*.packetSize=*/0, /*.numberOfInputOperands=*/0,
                                 /*.numberOfOutputOperands=*/0, /*.numberOfPools=*/0});
        mFmqRequestChannel->writeBlocking(&datum, 1);
    }

    // wait for task thread to end
    mWorker.wait();
}

bool ExecutionBurstServer::sendPacket(const std::vector<FmqResultDatum>& packet) {
    if (mTeardown) {
        return false;
    }

    if (mBlocking) {
        return mFmqResultChannel->writeBlocking(packet.data(), packet.size());
    } else {
        return mFmqResultChannel->write(packet.data(), packet.size());
    }
}

std::vector<FmqRequestDatum> ExecutionBurstServer::getPacketBlocking() {
    using discriminator = FmqRequestDatum::hidl_discriminator;

    if (mTeardown) {
        return {};
    }

    // wait for request packet and read first element of request packet
    // TODO: have a more elegant way to wait for data, and read it all at once.
    // For example, EventFlag can be used to directly wait on the futex, and all
    // the data can be read at once with a non-blocking call to
    // MessageQueue::read. For further optimization, MessageQueue::beginRead and
    // MessageQueue::commitRead can be used to avoid an extra copy of the
    // metadata.
    FmqRequestDatum datum;
    bool success = false;
    if (mBlocking) {
        success = mFmqRequestChannel->readBlocking(&datum, 1);
    } else {
        while ((success = !mTeardown.load(std::memory_order_relaxed)) &&
               !mFmqRequestChannel->read(&datum, 1)) {
        }
    }

    // terminate loop
    if (mTeardown) {
        return {};
    }

    // validate packet information
    if (!success || datum.getDiscriminator() != discriminator::packetInformation) {
        LOG(ERROR) << "FMQ Request packet ill-formed";
        return {};
    }

    // unpack packet information
    const auto& packetInfo = datum.packetInformation();
    const size_t count = packetInfo.packetSize;

    // retrieve remaining elements
    // NOTE: all of the data is already available at this point, so there's no
    // need to do a blocking wait to wait for more data
    std::vector<FmqRequestDatum> packet(count);
    packet.front() = datum;
    success = mFmqRequestChannel->read(packet.data() + 1, packet.size() - 1);

    if (!success) {
        return {};
    }

    return packet;
}

// deserialize request
std::pair<Request, MeasureTiming> ExecutionBurstServer::deserialize(
        const std::vector<FmqRequestDatum>& data) {
    using discriminator = FmqRequestDatum::hidl_discriminator;

    Request request;
    size_t index = 0;

    // validate packet information
    if (data[index].getDiscriminator() != discriminator::packetInformation) {
        LOG(ERROR) << "FMQ Request packet ill-formed";
        return {{}, MeasureTiming::NO};
    }

    // unpackage packet information
    const FmqRequestDatum::PacketInformation& packetInfo = data[index].packetInformation();
    index++;
    const uint32_t packetSize = packetInfo.packetSize;
    const uint32_t numberOfInputOperands = packetInfo.numberOfInputOperands;
    const uint32_t numberOfOutputOperands = packetInfo.numberOfOutputOperands;
    const uint32_t numberOfPools = packetInfo.numberOfPools;

    // unpackage input operands
    std::vector<RequestArgument> inputs;
    inputs.reserve(numberOfInputOperands);
    for (size_t operand = 0; operand < numberOfInputOperands; ++operand) {
        // validate input operand information
        if (data[index].getDiscriminator() != discriminator::inputOperandInformation) {
            LOG(ERROR) << "FMQ Request packet ill-formed";
            return {{}, MeasureTiming::NO};
        }

        // unpackage operand information
        const FmqRequestDatum::OperandInformation& operandInfo =
                data[index].inputOperandInformation();
        index++;
        const bool hasNoValue = operandInfo.hasNoValue;
        const DataLocation location = operandInfo.location;
        const uint32_t numberOfDimensions = operandInfo.numberOfDimensions;

        // unpackage operand dimensions
        std::vector<uint32_t> dimensions;
        dimensions.reserve(numberOfDimensions);
        for (size_t i = 0; i < numberOfDimensions; ++i) {
            // validate dimension
            if (data[index].getDiscriminator() != discriminator::inputOperandDimensionValue) {
                LOG(ERROR) << "FMQ Request packet ill-formed";
                return {{}, MeasureTiming::NO};
            }

            // unpackage dimension
            const uint32_t dimension = data[index].inputOperandDimensionValue();
            index++;

            // store result
            dimensions.push_back(dimension);
        }

        // store result
        inputs.push_back(
                {/*.hasNoValue=*/hasNoValue, /*.location=*/location, /*.dimensions=*/dimensions});
    }

    // unpackage output operands
    std::vector<RequestArgument> outputs;
    outputs.reserve(numberOfOutputOperands);
    for (size_t operand = 0; operand < numberOfOutputOperands; ++operand) {
        // validate output operand information
        if (data[index].getDiscriminator() != discriminator::outputOperandInformation) {
            LOG(ERROR) << "FMQ Request packet ill-formed";
            return {{}, MeasureTiming::NO};
        }

        // unpackage operand information
        const FmqRequestDatum::OperandInformation& operandInfo =
                data[index].outputOperandInformation();
        index++;
        const bool hasNoValue = operandInfo.hasNoValue;
        const DataLocation location = operandInfo.location;
        const uint32_t numberOfDimensions = operandInfo.numberOfDimensions;

        // unpackage operand dimensions
        std::vector<uint32_t> dimensions;
        dimensions.reserve(numberOfDimensions);
        for (size_t i = 0; i < numberOfDimensions; ++i) {
            // validate dimension
            if (data[index].getDiscriminator() != discriminator::outputOperandDimensionValue) {
                LOG(ERROR) << "FMQ Request packet ill-formed";
                return {{}, MeasureTiming::NO};
            }

            // unpackage dimension
            const uint32_t dimension = data[index].outputOperandDimensionValue();
            index++;

            // store result
            dimensions.push_back(dimension);
        }

        // store result
        outputs.push_back(
                {/*.hasNoValue=*/hasNoValue, /*.location=*/location, /*.dimensions=*/dimensions});
    }

    // unpackage pools
    std::vector<int32_t> slots;
    slots.reserve(numberOfPools);
    for (size_t pool = 0; pool < numberOfPools; ++pool) {
        // validate input operand information
        if (data[index].getDiscriminator() != discriminator::poolIdentifier) {
            LOG(ERROR) << "FMQ Request packet ill-formed";
            return {{}, MeasureTiming::NO};
        }

        // unpackage operand information
        const int32_t poolId = data[index].poolIdentifier();
        index++;

        // store result
        slots.push_back(poolId);
    }
    hidl_vec<hidl_memory> pools = mMemoryCache.getMemories(slots);

    // validate measureTiming
    if (data[index].getDiscriminator() != discriminator::measureTiming) {
        LOG(ERROR) << "FMQ Request packet ill-formed";
        return {{}, MeasureTiming::NO};
    }

    // unpackage measureTiming
    const MeasureTiming measure = data[index].measureTiming();
    index++;

    // validate packet information
    if (index != packetSize) {
        LOG(ERROR) << "FMQ Result packet ill-formed";
        return {{}, MeasureTiming::NO};
    }

    // return request
    return {{/*.inputs=*/inputs, /*.outputs=*/outputs, /*.pools=*/std::move(pools)}, measure};
}

// serialize result
std::vector<FmqResultDatum> ExecutionBurstServer::serialize(
        ErrorStatus errorStatus, const std::vector<OutputShape>& outputShapes, Timing timing) {
    // count how many elements need to be sent for a request
    size_t count = 2 + outputShapes.size();
    for (const auto& outputShape : outputShapes) {
        count += outputShape.dimensions.size();
    }

    // create buffer to temporarily store elements
    std::vector<FmqResultDatum> data;
    data.reserve(count);

    // package packetInfo
    {
        FmqResultDatum datum;
        datum.packetInformation({/*.packetSize=*/static_cast<uint32_t>(count),
                                 /*.errorStatus=*/errorStatus,
                                 /*.numberOfOperands=*/static_cast<uint32_t>(outputShapes.size())});
        data.push_back(datum);
    }

    // package output shape data
    for (const auto& operand : outputShapes) {
        // package operand information
        FmqResultDatum datum;
        datum.operandInformation(
                {/*.isSufficient=*/operand.isSufficient,
                 /*.numberOfDimensions=*/static_cast<uint32_t>(operand.dimensions.size())});
        data.push_back(datum);

        // package operand dimensions
        for (uint32_t dimension : operand.dimensions) {
            FmqResultDatum datum;
            datum.operandDimensionValue(dimension);
            data.push_back(datum);
        }
    }

    // package executionTiming
    {
        FmqResultDatum datum;
        datum.executionTiming(timing);
        data.push_back(datum);
    }

    // return result
    return data;
}

Return<void> ExecutionBurstServer::freeMemory(int32_t slot) {
    mMemoryCache.freeMemory(slot);
    return Void();
}

void ExecutionBurstServer::task() {
    while (!mTeardown) {
        // receive request
        const std::vector<FmqRequestDatum> requestData = getPacketBlocking();

        // terminate loop
        if (mTeardown) {
            return;
        }

        // continue processing
        Request request;
        MeasureTiming measure;
        std::tie(request, measure) = deserialize(requestData);

        // perform computation
        ErrorStatus errorStatus = ErrorStatus::GENERAL_FAILURE;
        std::vector<OutputShape> outputShapes;
        Timing returnedTiming;
        // This call to IPreparedModel::executeSynchronously occurs entirely
        // within the same process, so ignore the Return<> errors via .isOk().
        // TODO: verify it is safe to always call isOk() here, or if there is
        // any benefit to checking any potential errors.
        mPreparedModel
                ->executeSynchronously(request, measure,
                                       [&errorStatus, &outputShapes, &returnedTiming](
                                               ErrorStatus status,
                                               const hidl_vec<OutputShape>& shapes, Timing timing) {
                                           errorStatus = status;
                                           outputShapes = shapes;
                                           returnedTiming = timing;
                                       })
                .isOk();

        // return result
        const std::vector<FmqResultDatum> result =
                serialize(errorStatus, outputShapes, returnedTiming);
        sendPacket(result);
    }
}

sp<IBurstContext> createBurstContext(const sp<IBurstCallback>& callback,
                                     const MQDescriptorSync<FmqRequestDatum>& requestChannel,
                                     const MQDescriptorSync<FmqResultDatum>& resultChannel,
                                     IPreparedModel* preparedModel) {
    // check inputs
    if (callback == nullptr || preparedModel == nullptr) {
        LOG(ERROR) << "createExecutionBurstServer passed a nullptr";
        return nullptr;
    }

    // create FMQ objects
    std::unique_ptr<FmqRequestChannel> fmqRequestChannel{new (std::nothrow)
                                                                 FmqRequestChannel(requestChannel)};
    std::unique_ptr<FmqResultChannel> fmqResultChannel{new (std::nothrow)
                                                               FmqResultChannel(resultChannel)};

    // check FMQ objects
    if (!fmqRequestChannel || !fmqResultChannel || !fmqRequestChannel->isValid() ||
        !fmqResultChannel->isValid()) {
        LOG(ERROR) << "createExecutionBurstServer failed to create FastMessageQueue";
        return nullptr;
    }

    // make and return context
    return new ExecutionBurstServer(callback, std::move(fmqRequestChannel),
                                    std::move(fmqResultChannel), preparedModel);
}

}  // namespace nn
}  // namespace android
