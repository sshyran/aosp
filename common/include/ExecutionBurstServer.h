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

#ifndef ANDROID_ML_NN_COMMON_EXECUTION_BURST_SERVER_H
#define ANDROID_ML_NN_COMMON_EXECUTION_BURST_SERVER_H

#include <android-base/macros.h>
#include <fmq/MessageQueue.h>
#include <hidl/MQDescriptor.h>
#include <atomic>
#include <future>
#include <map>
#include <set>
#include "HalInterfaces.h"

namespace android {
namespace nn {

using ::android::hardware::kSynchronizedReadWrite;
using ::android::hardware::MessageQueue;
using ::android::hardware::MQDescriptorSync;
using FmqRequestChannel = MessageQueue<FmqRequestDatum, kSynchronizedReadWrite>;
using FmqResultChannel = MessageQueue<FmqResultDatum, kSynchronizedReadWrite>;
using FmqRequestDescriptor = MQDescriptorSync<FmqRequestDatum>;
using FmqResultDescriptor = MQDescriptorSync<FmqResultDatum>;

/**
 */
class BurstMemoryCache {
    DISALLOW_IMPLICIT_CONSTRUCTORS(BurstMemoryCache);

   public:
    BurstMemoryCache(const sp<IBurstCallback>& callback);

    hidl_vec<hidl_memory> getMemories(const std::vector<int32_t>& slots);
    void freeMemory(int32_t slot);

   private:
    std::mutex mMutex;
    const sp<IBurstCallback> mCallback;
    std::map<int32_t, hidl_memory> mSlotToMemoryCache;
};

/**
 * NN server burst object
 */
class ExecutionBurstServer : public IBurstContext {
    DISALLOW_IMPLICIT_CONSTRUCTORS(ExecutionBurstServer);

   public:
    ExecutionBurstServer(const sp<IBurstCallback>& callback,
                         std::unique_ptr<FmqRequestChannel> requestChannel,
                         std::unique_ptr<FmqResultChannel> resultChannel,
                         IPreparedModel* preparedModel);
    ~ExecutionBurstServer();

    Return<void> freeMemory(int32_t slot) override;

   private:
    bool sendPacket(const std::vector<FmqResultDatum>& packet);
    std::vector<FmqRequestDatum> getPacketBlocking();
    std::vector<FmqResultDatum> serialize(ErrorStatus errorStatus,
                                          const std::vector<OutputShape>& outputShapes,
                                          Timing timing);
    std::pair<Request, MeasureTiming> deserialize(const std::vector<FmqRequestDatum>& data);
    void task();

    BurstMemoryCache mMemoryCache;
    std::atomic<bool> mTeardown{false};
    std::future<void> mWorker;
    const std::unique_ptr<FmqRequestChannel> mFmqRequestChannel;
    const std::unique_ptr<FmqResultChannel> mFmqResultChannel;
    IPreparedModel* mPreparedModel;
    const bool mBlocking;
};

/**
 * Create automated context to manage FMQ-based executions.
 *
 * This function is intended to be used by a service to automatically:
 * 1) Receive data from a provided FMQ
 * 2) Execute a model with the given information
 * 3) Send the result to the created FMQ
 *
 * @param callback Callback used to retrieve memories corresponding to
 *                 unrecognized slots.
 * @param requestChannel Input FMQ channel through which the client passes the
 *                       request to the service.
 * @param resultChannel Output FMQ channel from which the client can retrieve
 *                      the result of the execution.
 * @param preparedModel PreparedModel that the burst object was created from.
 *                      This will be used to synchronously perform the
 *                      execution.
 * @result IBurstContext Handle to the burst context.
 */
::android::sp<::android::hardware::neuralnetworks::V1_2::IBurstContext> createBurstContext(
        const sp<::android::hardware::neuralnetworks::V1_2::IBurstCallback>& callback,
        const ::android::hardware::MQDescriptorSync<
                ::android::hardware::neuralnetworks::V1_2::FmqRequestDatum>& requestChannel,
        const ::android::hardware::MQDescriptorSync<
                ::android::hardware::neuralnetworks::V1_2::FmqResultDatum>& resultChannel,
        ::android::hardware::neuralnetworks::V1_2::IPreparedModel* preparedModel);

}  // namespace nn
}  // namespace android

#endif  // ANDROID_ML_NN_COMMON_EXECUTION_BURST_SERVER_H
