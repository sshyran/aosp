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
#include <string>
#include "Tracing.h"

namespace android::nn {

namespace {

// DefaultBurstExecutorWithCache adapts an IPreparedModel so that it can be
// used as an IBurstExecutorWithCache. Specifically, the cache simply stores the
// hidl_memory object, and the execution forwards calls to the provided
// IPreparedModel's "executeSynchronously" method. With this class, hidl_memory
// must be mapped and unmapped for each execution.
class DefaultBurstExecutorWithCache : public ExecutionBurstServer::IBurstExecutorWithCache {
   public:
    DefaultBurstExecutorWithCache(IPreparedModel* preparedModel) : mpPreparedModel(preparedModel) {}

    bool isCacheEntryPresent(int32_t slot) const override {
        return slot < mMemoryCache.size() && mMemoryCache[slot].valid();
    }

    void addCacheEntry(const hidl_memory& memory, int32_t slot) override {
        if (slot >= mMemoryCache.size()) {
            mMemoryCache.resize(slot + 1);
        }
        mMemoryCache[slot] = memory;
    }

    void removeCacheEntry(int32_t slot) override {
        if (slot < mMemoryCache.size()) {
            mMemoryCache[slot] = {};
        }
    }

    std::tuple<ErrorStatus, hidl_vec<OutputShape>, Timing> execute(
            const Request& request, const std::vector<int32_t>& slots,
            MeasureTiming measure) override {
        // convert slots to pools
        hidl_vec<hidl_memory> pools(slots.size());
        std::transform(slots.begin(), slots.end(), pools.begin(), [this](int32_t slot) {
            return slot < mMemoryCache.size() ? mMemoryCache[slot] : hidl_memory{};
        });

        // create full request
        Request fullRequest = request;
        fullRequest.pools = std::move(pools);

        // setup execution
        ErrorStatus returnedStatus = ErrorStatus::GENERAL_FAILURE;
        hidl_vec<OutputShape> returnedOutputShapes;
        Timing returnedTiming;
        auto cb = [&returnedStatus, &returnedOutputShapes, &returnedTiming](
                          ErrorStatus status, const hidl_vec<OutputShape>& outputShapes,
                          const Timing& timing) {
            returnedStatus = status;
            returnedOutputShapes = outputShapes;
            returnedTiming = timing;
        };

        // execute
        const Return<void> ret = mpPreparedModel->executeSynchronously(fullRequest, measure, cb);
        if (!ret.isOk() || returnedStatus != ErrorStatus::NONE) {
            LOG(ERROR) << "IPreparedModelAdapter::execute -- Error executing";
            return {ErrorStatus::GENERAL_FAILURE, {}, {}};
        }

        return std::make_tuple(returnedStatus, std::move(returnedOutputShapes), returnedTiming);
    }

   private:
    IPreparedModel* const mpPreparedModel;
    std::vector<hidl_memory> mMemoryCache;
};

}  // anonymous namespace

sp<ExecutionBurstServer> ExecutionBurstServer::create(
        const sp<IBurstCallback>& callback, const MQDescriptorSync<FmqRequestDatum>& requestChannel,
        const MQDescriptorSync<FmqResultDatum>& resultChannel,
        std::shared_ptr<IBurstExecutorWithCache> executorWithCache) {
    // check inputs
    if (callback == nullptr || executorWithCache == nullptr) {
        LOG(ERROR) << "ExecutionBurstServer::create passed a nullptr";
        return nullptr;
    }

    // create FMQ objects
    std::unique_ptr<FmqRequestChannel> fmqRequestChannel =
            std::make_unique<FmqRequestChannel>(requestChannel);
    std::unique_ptr<FmqResultChannel> fmqResultChannel =
            std::make_unique<FmqResultChannel>(resultChannel);

    // check FMQ objects
    if (!fmqRequestChannel->isValid() || !fmqResultChannel->isValid()) {
        LOG(ERROR) << "ExecutionBurstServer::create failed to create FastMessageQueue";
        return nullptr;
    }

    // make and return context
    return new ExecutionBurstServer(callback, std::move(fmqRequestChannel),
                                    std::move(fmqResultChannel), std::move(executorWithCache));
}

sp<ExecutionBurstServer> ExecutionBurstServer::create(
        const sp<IBurstCallback>& callback, const MQDescriptorSync<FmqRequestDatum>& requestChannel,
        const MQDescriptorSync<FmqResultDatum>& resultChannel, IPreparedModel* preparedModel) {
    // check relevant input
    if (preparedModel == nullptr) {
        LOG(ERROR) << "ExecutionBurstServer::create passed a nullptr";
        return nullptr;
    }

    // adapt IPreparedModel to have caching
    const std::shared_ptr<DefaultBurstExecutorWithCache> preparedModelAdapter =
            std::make_shared<DefaultBurstExecutorWithCache>(preparedModel);

    // make and return context
    return ExecutionBurstServer::create(callback, requestChannel, resultChannel,
                                        preparedModelAdapter);
}

ExecutionBurstServer::ExecutionBurstServer(
        const sp<IBurstCallback>& callback, std::unique_ptr<FmqRequestChannel> requestChannel,
        std::unique_ptr<FmqResultChannel> resultChannel,
        std::shared_ptr<IBurstExecutorWithCache> executorWithCache)
    : mCallback(callback),
      mFmqRequestChannel(std::move(requestChannel)),
      mFmqResultChannel(std::move(resultChannel)),
      mExecutorWithCache(std::move(executorWithCache)),
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

Return<void> ExecutionBurstServer::freeMemory(int32_t slot) {
    std::lock_guard<std::mutex> hold(mMutex);
    mExecutorWithCache->removeCacheEntry(slot);
    return Void();
}

void ExecutionBurstServer::ensureCacheEntriesArePresentLocked(const std::vector<int32_t>& slots) {
    const auto slotIsKnown = [this](int32_t slot) {
        return mExecutorWithCache->isCacheEntryPresent(slot);
    };

    // find unique unknown slots
    std::vector<int32_t> unknownSlots = slots;
    auto unknownSlotsEnd = unknownSlots.end();
    std::sort(unknownSlots.begin(), unknownSlotsEnd);
    unknownSlotsEnd = std::unique(unknownSlots.begin(), unknownSlotsEnd);
    unknownSlotsEnd = std::remove_if(unknownSlots.begin(), unknownSlotsEnd, slotIsKnown);
    unknownSlots.erase(unknownSlotsEnd, unknownSlots.end());

    // quick-exit if all slots are known
    if (unknownSlots.empty()) {
        return;
    }

    ErrorStatus errorStatus = ErrorStatus::GENERAL_FAILURE;
    std::vector<hidl_memory> returnedMemories;
    auto cb = [&errorStatus, &returnedMemories](ErrorStatus status,
                                                const hidl_vec<hidl_memory>& memories) {
        errorStatus = status;
        returnedMemories = memories;
    };

    const Return<void> ret = mCallback->getMemories(unknownSlots, cb);

    if (!ret.isOk() || errorStatus != ErrorStatus::NONE ||
        returnedMemories.size() != unknownSlots.size()) {
        LOG(ERROR) << "Error retrieving memories";
        return;
    }

    // add memories to unknown slots
    for (size_t i = 0; i < unknownSlots.size(); ++i) {
        mExecutorWithCache->addCacheEntry(returnedMemories[i], unknownSlots[i]);
    }
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

    NNTRACE_FULL(NNTRACE_LAYER_IPC, NNTRACE_PHASE_EXECUTION, "ExecutionBurstServer getting packet");

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
    std::vector<FmqRequestDatum> packet(count);
    packet.front() = datum;
    success = mFmqRequestChannel->read(packet.data() + 1, packet.size() - 1);

    if (!success) {
        return {};
    }

    return packet;
}

// deserialize request
std::tuple<Request, std::vector<int32_t>, MeasureTiming> ExecutionBurstServer::deserialize(
        const std::vector<FmqRequestDatum>& data) {
    using discriminator = FmqRequestDatum::hidl_discriminator;

    size_t index = 0;

    // validate packet information
    if (data[index].getDiscriminator() != discriminator::packetInformation) {
        LOG(ERROR) << "FMQ Request packet ill-formed";
        return {{}, {}, MeasureTiming::NO};
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
            return {{}, {}, MeasureTiming::NO};
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
                return {{}, {}, MeasureTiming::NO};
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
            return {{}, {}, MeasureTiming::NO};
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
                return {{}, {}, MeasureTiming::NO};
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
            return {{}, {}, MeasureTiming::NO};
        }

        // unpackage operand information
        const int32_t poolId = data[index].poolIdentifier();
        index++;

        // store result
        slots.push_back(poolId);
    }

    // validate measureTiming
    if (data[index].getDiscriminator() != discriminator::measureTiming) {
        LOG(ERROR) << "FMQ Request packet ill-formed";
        return {{}, {}, MeasureTiming::NO};
    }

    // unpackage measureTiming
    const MeasureTiming measure = data[index].measureTiming();
    index++;

    // validate packet information
    if (index != packetSize) {
        LOG(ERROR) << "FMQ Result packet ill-formed";
        return {{}, {}, MeasureTiming::NO};
    }

    // return request
    return {{/*.inputs=*/inputs, /*.outputs=*/outputs, /*.pools=*/{}}, std::move(slots), measure};
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

void ExecutionBurstServer::task() {
    while (!mTeardown) {
        // receive request
        const std::vector<FmqRequestDatum> requestData = getPacketBlocking();

        // terminate loop
        if (mTeardown) {
            return;
        }

        NNTRACE_FULL(NNTRACE_LAYER_IPC, NNTRACE_PHASE_EXECUTION,
                     "ExecutionBurstServer processing packet and returning results");

        // continue processing; types are Request, std::vector<int32_t>, and
        // MeasureTiming, respectively
        const auto [requestWithoutPools, slotsOfPools, measure] = deserialize(requestData);

        // ensure executor with cache has required memory
        std::lock_guard<std::mutex> hold(mMutex);
        ensureCacheEntriesArePresentLocked(slotsOfPools);

        // perform computation; types are ErrorStatus, hidl_vec<OutputShape>,
        // and Timing, respectively
        const auto [errorStatus, outputShapes, returnedTiming] =
                mExecutorWithCache->execute(requestWithoutPools, slotsOfPools, measure);

        // return result
        const std::vector<FmqResultDatum> result =
                serialize(errorStatus, outputShapes, returnedTiming);
        sendPacket(result);
    }
}

}  // namespace android::nn
