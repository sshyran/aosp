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

#ifndef ANDROID_ML_NN_RUNTIME_EXECUTION_BURST_CONTROLLER_H
#define ANDROID_ML_NN_RUNTIME_EXECUTION_BURST_CONTROLLER_H

#include <android-base/macros.h>
#include <fmq/MessageQueue.h>
#include <hidl/MQDescriptor.h>
#include <atomic>
#include <map>
#include <memory>
#include <mutex>
#include <tuple>
#include "HalInterfaces.h"

namespace android::nn {

using ::android::hardware::kSynchronizedReadWrite;
using ::android::hardware::MessageQueue;
using ::android::hardware::MQDescriptorSync;
using FmqRequestChannel = MessageQueue<FmqRequestDatum, kSynchronizedReadWrite>;
using FmqResultChannel = MessageQueue<FmqResultDatum, kSynchronizedReadWrite>;

/**
 * Number of elements in the FMQ.
 */
constexpr const size_t kExecutionBurstChannelLength = 1024;

/**
 * The ExecutionBurstController class manages both the serialization and
 * deserialization of data across FMQ, making it appear to the runtime as a
 * regular synchronous inference. Additionally, this class manages the burst's
 * memory cache.
 */
class ExecutionBurstController {
    DISALLOW_IMPLICIT_CONSTRUCTORS(ExecutionBurstController);

    /**
     * NN runtime burst callback object and memory cache.
     *
     * ExecutionBurstCallback associates a hidl_memory object with a slot number
     * to be passed across FMQ. The ExecutionBurstServer can use this callback
     * to retrieve this hidl_memory corresponding to the slot via HIDL.
     *
     * Whenever a hidl_memory object is copied, it will duplicate the underlying
     * file descriptor. Because the NN runtime currently copies the hidl_memory
     * on each execution, it is difficult to associate hidl_memory objects with
     * previously cached hidl_memory objects. For this reason, callers of this
     * class must pair each hidl_memory object with an associated key. For
     * efficiency, if two hidl_memory objects represent the same underlying
     * buffer, they must use the same key.
     */
    class ExecutionBurstCallback : public IBurstCallback {
        DISALLOW_COPY_AND_ASSIGN(ExecutionBurstCallback);

       public:
        ExecutionBurstCallback() = default;

        Return<void> getMemories(const hidl_vec<int32_t>& slots, getMemories_cb cb) override;

        std::vector<int32_t> getSlots(const hidl_vec<hidl_memory>& memories,
                                      const std::vector<intptr_t>& keys);

        int32_t getSlot(const hidl_memory& memory, intptr_t key);

        /*
         * This function performs two different actions:
         * 1) Removes an entry from the cache (if present), including the local
         *    storage of the hidl_memory object. Note that this call does not
         *    free any corresponding hidl_memory object in ExecutionBurstServer,
         *    which is separately freed via IBurstContext::freeMemory.
         * 2) Return whether a cache entry was removed and which slot was removed if
         *    found. If the key did not to correspond to any entry in the cache, a
         *    slot number of 0 is returned. The slot number and whether the entry
         *    existed is useful so the same slot can be freed in the
         *    ExecutionBurstServer's cache via IBurstContext::freeMemory.
         */
        std::pair<bool, int32_t> freeMemory(intptr_t key);

       private:
        int32_t getSlotLocked(const hidl_memory& memory, intptr_t key);

        std::mutex mMutex;
        int32_t mNextSlot = 0;
        std::map<intptr_t, int32_t> mMemoryIdToSlotCache;
        std::map<int32_t, hidl_memory> mSlotToMemoryCache;
    };

   public:
    /**
     * Creates a burst controller on a prepared model.
     *
     * Prefer this over ExecutionBurstController's constructor.
     *
     * @param preparedModel Model prepared for execution to execute on.
     * @param blocking 'true' if the FMQ should use a futex to perform blocking
     *     until data is available in a less responsive, but more energy
     *     efficient manner. 'false' if the FMQ should use spin-looping to
     *     wait until data is available in a more responsive, but less energy
     *     efficient manner.
     * @return ExecutionBurstController Execution burst controller object.
     */
    static std::unique_ptr<ExecutionBurstController> create(const sp<IPreparedModel>& preparedModel,
                                                            bool blocking);

    ExecutionBurstController(std::unique_ptr<FmqRequestChannel> fmqRequestChannel,
                             std::unique_ptr<FmqResultChannel> fmqResultChannel,
                             const sp<IBurstContext>& burstContext,
                             const sp<ExecutionBurstCallback>& callback, bool blocking);

    /**
     * Execute a request on a model.
     *
     * @param request Arguments to be executed on a model.
     * @param measure Whether to collect timing measurements, either YES or NO
     * @param memoryIds Identifiers corresponding to each memory object in the
     *     request's pools.
     * @return status and output shape of the execution and any execution time
     *     measurements.
     */
    std::tuple<ErrorStatus, std::vector<OutputShape>, Timing> compute(
            const Request& request, MeasureTiming measure, const std::vector<intptr_t>& memoryIds);

    /**
     * Propagate a user's freeing of memory to the service.
     *
     * @param key Key corresponding to the memory object.
     */
    void freeMemory(intptr_t key);

   private:
    std::vector<FmqResultDatum> getPacketBlocking();
    bool sendPacket(const std::vector<FmqRequestDatum>& packet);
    std::vector<FmqRequestDatum> serialize(const Request& request, MeasureTiming measure,
                                           const std::vector<intptr_t>& memoryIds);
    std::tuple<ErrorStatus, std::vector<OutputShape>, Timing> deserialize(
            const std::vector<FmqResultDatum>& data);

    const std::unique_ptr<FmqRequestChannel> mFmqRequestChannel;
    const std::unique_ptr<FmqResultChannel> mFmqResultChannel;
    const sp<IBurstContext> mBurstContext;
    const sp<ExecutionBurstCallback> mMemoryCache;
    const bool mUsesFutex;
};

}  // namespace android::nn

#endif  // ANDROID_ML_NN_RUNTIME_EXECUTION_BURST_CONTROLLER_H
