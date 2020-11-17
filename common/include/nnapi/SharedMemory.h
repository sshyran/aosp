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

#ifndef ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_SHARED_MEMORY_H
#define ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_SHARED_MEMORY_H

#include <any>
#include <optional>
#include <string>
#include <variant>
#include <vector>

#include "nnapi/Result.h"
#include "nnapi/Types.h"

// Forward declare AHardwareBuffer
extern "C" typedef struct AHardwareBuffer AHardwareBuffer;

// Forward declare hidl_memory
namespace android::hardware {
struct hidl_memory;
}  // namespace android::hardware

namespace android::nn {

class MutableMemoryBuilder {
   public:
    explicit MutableMemoryBuilder(uint32_t poolIndex);

    DataLocation append(size_t length);
    bool empty() const;

    GeneralResult<Memory> finish();

   private:
    uint32_t mPoolIndex;
    size_t mSize = 0;
};

class ConstantMemoryBuilder {
   public:
    explicit ConstantMemoryBuilder(uint32_t poolIndex);

    DataLocation append(const void* data, size_t length);
    bool empty() const;

    GeneralResult<Memory> finish();

   private:
    struct LazyCopy {
        const void* data;
        size_t length;
        size_t offset;
    };

    MutableMemoryBuilder mBuilder;
    std::vector<LazyCopy> mSlices;
};

GeneralResult<Memory> createSharedMemory(size_t size);

GeneralResult<Memory> createSharedMemoryFromFd(size_t size, int prot, int fd, size_t offset);

GeneralResult<Memory> createSharedMemoryFromHidlMemory(const hardware::hidl_memory& memory);

GeneralResult<Memory> createSharedMemoryFromAHWB(const AHardwareBuffer& ahwb);

struct Mapping {
    std::variant<void*, const void*> pointer;
    size_t size;
    std::any context;
};

GeneralResult<Mapping> map(const Memory& memory);

bool flush(const Mapping& mapping);

}  // namespace android::nn

#endif  // ANDROID_FRAMEWORKS_ML_NN_COMMON_NNAPI_SHARED_MEMORY_H
