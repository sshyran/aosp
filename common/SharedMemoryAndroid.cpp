/*
 * Copyright (C) 2020 The Android Open Source Project
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

#include <android-base/logging.h>
#include <android-base/mapped_file.h>
#include <android-base/scopeguard.h>
#include <android/hardware_buffer.h>
#include <android/hidl/allocator/1.0/IAllocator.h>
#include <cutils/native_handle.h>
#include <hidl/HidlSupport.h>
#include <hidlmemory/mapping.h>
#include <sys/mman.h>
#include <vndk/hardware_buffer.h>

#include <any>
#include <limits>
#include <memory>
#include <optional>
#include <string>
#include <utility>
#include <variant>
#include <vector>

#include "SharedMemory.h"
#include "TypeUtils.h"
#include "Types.h"

namespace android::nn {
namespace {

using ::android::hardware::hidl_memory;
using ::android::hidl::allocator::V1_0::IAllocator;

const char* const kAllocatorService = "ashmem";

std::optional<hidl_memory> allocateSharedMemory(size_t size) {
    static const auto allocator = IAllocator::getService(kAllocatorService);
    CHECK_GT(size, 0u);

    hidl_memory maybeMemory;
    auto fn = [&maybeMemory](bool success, const hidl_memory& memory) {
        if (success) {
            maybeMemory = memory;
        }
    };
    allocator->allocate(size, fn);

    if (!maybeMemory.valid()) {
        LOG(ERROR) << "IAllocator::allocate returned an invalid (empty) memory object";
        return std::nullopt;
    }

    return maybeMemory;
}

Memory createMemory(const hidl_memory& memory) {
    CHECK_LE(memory.size(), std::numeric_limits<uint32_t>::max());

    auto* cloned = native_handle_clone(memory.handle());
    auto nativeHandle = ::android::NativeHandle::create(cloned, /*ownsHandle=*/true);

    return {
            .handle = std::move(nativeHandle),
            .size = static_cast<uint32_t>(memory.size()),
            .name = memory.name(),
    };
}

hidl_memory createHidlMemory(const Memory& memory) {
    const auto hidlMemory = hidl_memory(memory.name, memory.handle->handle(), memory.size);
    // Copy memory to force the native_handle_t to be copied.
    auto copiedMemory = hidlMemory;
    return copiedMemory;
}

std::optional<Mapping> mapAshmem(const Memory& memory) {
    const auto hidlMemory = createHidlMemory(memory);
    const auto mapping = mapMemory(hidlMemory);
    if (mapping == nullptr) {
        LOG(ERROR) << "Failed to map memory";
        return std::nullopt;
    }
    auto* const pointer = mapping->getPointer().withDefault(nullptr);
    if (pointer == nullptr) {
        LOG(ERROR) << "Failed to get the mapped pointer";
        return std::nullopt;
    }
    const auto fullSize = mapping->getSize().withDefault(0);
    if (fullSize == 0 || fullSize > std::numeric_limits<size_t>::max()) {
        LOG(ERROR) << "Failed to get the mapped size";
        return std::nullopt;
    }
    const size_t size = static_cast<size_t>(fullSize);

    return Mapping{
            .pointer = pointer,
            .size = size,
            .context = mapping,
    };
}

struct MmapFdMappingContext {
    int prot;
    std::any context;
};

std::optional<Mapping> mapMemFd(const Memory& memory) {
    const size_t size = memory.size;
    const native_handle_t* handle = memory.handle->handle();
    const int fd = handle->data[0];
    const int prot = handle->data[1];
    const size_t offset = getOffsetFromInts(handle->data[2], handle->data[3]);

    std::shared_ptr<base::MappedFile> mapping = base::MappedFile::FromFd(fd, offset, size, prot);
    if (mapping == nullptr) {
        LOG(ERROR) << "Can't mmap the file descriptor.";
        return std::nullopt;
    }
    void* data = mapping->data();

    auto context = MmapFdMappingContext{.prot = prot, .context = std::move(mapping)};
    return Mapping{.pointer = data, .size = size, .context = std::move(context)};
}

std::optional<Mapping> mapAhwbBlobMemory(const Memory& memory) {
    const auto* handle = memory.handle->handle();
    const auto size = memory.size;
    const auto format = AHARDWAREBUFFER_FORMAT_BLOB;
    const auto usage = AHARDWAREBUFFER_USAGE_CPU_READ_OFTEN | AHARDWAREBUFFER_USAGE_CPU_WRITE_OFTEN;
    const uint32_t width = size;
    const uint32_t height = 1;  // height is always 1 for BLOB mode AHardwareBuffer.
    const uint32_t layers = 1;  // layers is always 1 for BLOB mode AHardwareBuffer.
    const uint32_t stride = size;

    AHardwareBuffer_Desc desc{
            .width = width,
            .height = height,
            .layers = layers,
            .format = format,
            .usage = usage,
            .stride = stride,
    };

    AHardwareBuffer* hardwareBuffer = nullptr;
    status_t status = AHardwareBuffer_createFromHandle(
            &desc, handle, AHARDWAREBUFFER_CREATE_FROM_HANDLE_METHOD_CLONE, &hardwareBuffer);
    if (status != NO_ERROR) {
        LOG(ERROR) << "Can't create AHardwareBuffer from handle. Error: " << status;
        return std::nullopt;
    }

    void* data = nullptr;
    status = AHardwareBuffer_lock(hardwareBuffer, usage, -1, nullptr, &data);
    if (status != NO_ERROR) {
        // TODO(b/169166682): do we need to call AHardwareBuffer_release?
        LOG(ERROR) << "Can't lock the AHardwareBuffer. Error: " << status;
        return std::nullopt;
    }

    // Create shared scoped object to munmap.
    auto scoped = base::make_scope_guard([hardwareBuffer] {
        AHardwareBuffer_unlock(hardwareBuffer, nullptr);
        if (hardwareBuffer != nullptr) {
            AHardwareBuffer_release(hardwareBuffer);
        }
    });
    auto sharedScoped = std::make_shared<decltype(scoped)>(std::move(scoped));

    return Mapping{.pointer = data, .size = size, .context = std::move(sharedScoped)};
}

std::optional<Mapping> mapAhwbMemory(const Memory& /*memory*/) {
    LOG(ERROR) << "Unable to map non-BLOB AHardwareBuffer memory";
    return std::nullopt;
}

}  // namespace

std::optional<Memory> createSharedMemory(size_t size) {
    auto maybeMemory = allocateSharedMemory(size);
    if (!maybeMemory.has_value()) {
        return std::nullopt;
    }
    auto memory = std::move(maybeMemory).value();
    return createSharedMemoryFromHidlMemory(memory);
}

std::optional<Memory> createSharedMemoryFromFd(size_t size, int prot, int fd, size_t offset) {
    if (size == 0 || fd < 0) {
        LOG(ERROR) << "Invalid size or fd";
        return std::nullopt;
    }

    // Duplicate the file descriptor so the resultant Memory owns its own version.
    int dupfd = dup(fd);
    if (dupfd == -1) {
        LOG(ERROR) << "Failed to dup the fd";
        // TODO(b/120417090): is ANEURALNETWORKS_UNEXPECTED_NULL the correct error to return here?
        return std::nullopt;
    }

    // Create a temporary native handle to own the dupfd.
    native_handle_t* nativeHandle = native_handle_create(1, 3);
    if (nativeHandle == nullptr) {
        LOG(ERROR) << "Failed to create native_handle";
        close(dupfd);
        // TODO(b/120417090): is ANEURALNETWORKS_UNEXPECTED_NULL the correct error to return here?
        return std::nullopt;
    }

    const auto [lowOffsetBits, highOffsetBits] = getIntsFromOffset(offset);
    nativeHandle->data[0] = dupfd;
    nativeHandle->data[1] = prot;
    nativeHandle->data[2] = lowOffsetBits;
    nativeHandle->data[3] = highOffsetBits;

    // Create a NativeHandle which owns the native handle and fd so that we don't have to manually
    // clean either the native handle or the fd.
    auto ownedHandle = ::android::NativeHandle::create(nativeHandle, /*ownsHandle=*/true);

    return Memory{.handle = std::move(ownedHandle), .size = size, .name = "mmap_fd"};
}

std::optional<Memory> createSharedMemoryFromHidlMemory(const hardware::hidl_memory& memory) {
    return createMemory(memory);
}

std::optional<Memory> createSharedMemoryFromAHWB(const AHardwareBuffer& ahwb) {
    AHardwareBuffer_Desc bufferDesc;
    AHardwareBuffer_describe(&ahwb, &bufferDesc);
    const native_handle_t* handle = AHardwareBuffer_getNativeHandle(&ahwb);

    auto* cloned = native_handle_clone(handle);
    auto nativeHandle = ::android::NativeHandle::create(cloned, /*ownsHandle=*/true);

    if (bufferDesc.format == AHARDWAREBUFFER_FORMAT_BLOB) {
        return Memory{
                .handle = std::move(nativeHandle),
                .size = bufferDesc.width,
                .name = "hardware_buffer_blob",
        };
    }

    // memory size is not used for non-BLOB AHWB memory.
    return Memory{.handle = std::move(nativeHandle), .size = 0, .name = "hardware_buffer"};
}

std::optional<Mapping> map(const Memory& memory) {
    if (memory.name == "ashmem") {
        return mapAshmem(memory);
    }
    if (memory.name == "mmap_fd") {
        return mapMemFd(memory);
    }
    if (memory.name == "hardware_buffer_blob") {
        return mapAhwbBlobMemory(memory);
    }
    if (memory.name == "hardware_buffer") {
        return mapAhwbMemory(memory);
    }
    LOG(ERROR) << "Cannot map unknown memory " << memory.name;
    return std::nullopt;
}

bool flush(const Mapping& mapping) {
    if (const auto* mmapFdMapping = std::any_cast<MmapFdMappingContext>(&mapping.context)) {
        if (!std::holds_alternative<void*>(mapping.pointer)) {
            return true;
        }
        void* data = std::get<void*>(mapping.pointer);
        const int prot = mmapFdMapping->prot;
        if (prot & PROT_WRITE) {
            const size_t size = mapping.size;
            return msync(data, size, MS_SYNC) == 0;
        }
    }
    // No-op for other types of memory.
    return true;
}

}  // namespace android::nn
