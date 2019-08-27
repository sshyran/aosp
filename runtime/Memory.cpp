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

#define LOG_TAG "Memory"

#include "Memory.h"

#include <memory>
#include <utility>
#include "ExecutionBurstController.h"
#include "MemoryUtils.h"
#include "Utils.h"

namespace android {
namespace nn {

using namespace hal;

Memory::Memory(hidl_memory memory) : kHidlMemory(std::move(memory)) {}

Memory::~Memory() {
    for (const auto [ptr, weakBurst] : mUsedBy) {
        if (const std::shared_ptr<ExecutionBurstController> burst = weakBurst.lock()) {
            burst->freeMemory(getKey());
        }
    }
}

bool Memory::validateSize(uint32_t offset, uint32_t length) const {
    if (offset + length > kHidlMemory.size()) {
        LOG(ERROR) << "Request size larger than the memory size.";
        return false;
    }
    return true;
}

intptr_t Memory::getKey() const {
    return reinterpret_cast<intptr_t>(this);
}

void Memory::usedBy(const std::shared_ptr<ExecutionBurstController>& burst) const {
    std::lock_guard<std::mutex> guard(mMutex);
    mUsedBy.emplace(burst.get(), burst);
}

std::pair<int, std::unique_ptr<MemoryAshmem>> MemoryAshmem::create(uint32_t size) {
    hidl_memory hidlMemory = allocateSharedMemory(size);
    sp<IMemory> mapped = mapMemory(hidlMemory);
    if (mapped == nullptr || mapped->getPointer() == nullptr) {
        LOG(ERROR) << "Memory::create failed";
        return {ANEURALNETWORKS_OUT_OF_MEMORY, nullptr};
    }
    return {ANEURALNETWORKS_NO_ERROR,
            std::make_unique<MemoryAshmem>(std::move(mapped), std::move(hidlMemory))};
}

uint8_t* MemoryAshmem::getPointer() const {
    return static_cast<uint8_t*>(static_cast<void*>(kMappedMemory->getPointer()));
}

MemoryAshmem::MemoryAshmem(sp<IMemory> mapped, hidl_memory memory)
    : Memory(std::move(memory)), kMappedMemory(std::move(mapped)) {}

std::pair<int, std::unique_ptr<MemoryFd>> MemoryFd::create(size_t size, int prot, int fd,
                                                           size_t offset) {
    if (size == 0 || fd < 0) {
        LOG(ERROR) << "Invalid size or fd";
        return {ANEURALNETWORKS_BAD_DATA, nullptr};
    }

    // Duplicate the file descriptor so MemoryFd owns its own version.
    int dupfd = dup(fd);
    if (dupfd == -1) {
        LOG(ERROR) << "Failed to dup the fd";
        // TODO(b/120417090): is ANEURALNETWORKS_UNEXPECTED_NULL the correct
        // error to return here?
        return {ANEURALNETWORKS_UNEXPECTED_NULL, nullptr};
    }

    // Create a temporary native handle to own the dupfd.
    native_handle_t* nativeHandle = native_handle_create(1, 3);
    if (nativeHandle == nullptr) {
        LOG(ERROR) << "Failed to create native_handle";
        // TODO(b/120417090): is ANEURALNETWORKS_UNEXPECTED_NULL the correct
        // error to return here?
        return {ANEURALNETWORKS_UNEXPECTED_NULL, nullptr};
    }
    nativeHandle->data[0] = dupfd;
    nativeHandle->data[1] = prot;
    const uint64_t bits = static_cast<uint64_t>(offset);
    nativeHandle->data[2] = (int32_t)(uint32_t)(bits & 0xffffffff);
    nativeHandle->data[3] = (int32_t)(uint32_t)(bits >> 32);

    // Create a hidl_handle which owns the native handle and fd so that we don't
    // have to manually clean either the native handle or the fd.
    hardware::hidl_handle hidlHandle;
    hidlHandle.setTo(nativeHandle, /*shouldOwn=*/true);

    // Push the hidl_handle into a hidl_memory object. The hidl_memory object is
    // responsible for cleaning the hidl_handle, the native handle, and the fd.
    hidl_memory hidlMemory = hidl_memory("mmap_fd", std::move(hidlHandle), size);

    return {ANEURALNETWORKS_NO_ERROR, std::make_unique<MemoryFd>(std::move(hidlMemory))};
}

MemoryFd::MemoryFd(hidl_memory memory) : Memory(std::move(memory)) {}

std::pair<int, std::unique_ptr<MemoryAHWB>> MemoryAHWB::create(const AHardwareBuffer& ahwb) {
    AHardwareBuffer_Desc bufferDesc;
    AHardwareBuffer_describe(&ahwb, &bufferDesc);
    const native_handle_t* handle = AHardwareBuffer_getNativeHandle(&ahwb);
    hidl_memory hidlMemory;
    if (bufferDesc.format == AHARDWAREBUFFER_FORMAT_BLOB) {
        hidlMemory = hidl_memory("hardware_buffer_blob", handle, bufferDesc.width);
    } else {
        // memory size is not used.
        hidlMemory = hidl_memory("hardware_buffer", handle, 0);
    }

    std::unique_ptr<MemoryAHWB> memory =
            std::make_unique<MemoryAHWB>(bufferDesc, std::move(hidlMemory));
    return {ANEURALNETWORKS_NO_ERROR, std::move(memory)};
};

bool MemoryAHWB::validateSize(uint32_t offset, uint32_t length) const {
    // validateSize should only be called on BLOB mode buffer.
    if (!kBlobMode) {
        LOG(ERROR) << "Invalid AHARDWAREBUFFER_FORMAT, must be AHARDWAREBUFFER_FORMAT_BLOB.";
        return false;
    }
    // Use normal validation.
    return Memory::validateSize(offset, length);
}

MemoryAHWB::MemoryAHWB(const AHardwareBuffer_Desc& desc, hidl_memory memory)
    : Memory(std::move(memory)), kBlobMode(desc.format == AHARDWAREBUFFER_FORMAT_BLOB) {}

uint32_t MemoryTracker::add(const Memory* memory) {
    VLOG(MODEL) << __func__ << "(" << SHOW_IF_DEBUG(memory) << ")";
    // See if we already have this memory. If so,
    // return its index.
    auto i = mKnown.find(memory);
    if (i != mKnown.end()) {
        return i->second;
    }
    VLOG(MODEL) << "It's new";
    // It's a new one.  Save it an assign an index to it.
    size_t next = mKnown.size();
    if (next > 0xFFFFFFFF) {
        LOG(ERROR) << "ANeuralNetworks more than 2^32 memories.";
        return ANEURALNETWORKS_BAD_DATA;
    }
    uint32_t idx = static_cast<uint32_t>(next);
    mKnown[memory] = idx;
    mMemories.push_back(memory);
    return idx;
}

}  // namespace nn
}  // namespace android
