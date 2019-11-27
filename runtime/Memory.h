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

#ifndef ANDROID_FRAMEWORKS_ML_NN_RUNTIME_MEMORY_H
#define ANDROID_FRAMEWORKS_ML_NN_RUNTIME_MEMORY_H

#include <android-base/macros.h>
#include <cutils/native_handle.h>
#include <sys/mman.h>
#include <vndk/hardware_buffer.h>

#include <algorithm>
#include <map>
#include <memory>
#include <mutex>
#include <set>
#include <tuple>
#include <unordered_map>
#include <utility>
#include <vector>

#include "HalInterfaces.h"
#include "NeuralNetworks.h"
#include "Utils.h"

namespace android {
namespace nn {

class CompilationBuilder;
class ExecutionBurstController;
class ModelBuilder;
class PreparedModel;

// A utility template class to accumulate multiple objects and assign each
// a distinct index number, starting with 0.
//
// The user of this class is responsible for avoiding concurrent calls
// to this class from multiple threads.
template <typename ObjectType>
class ObjectTracker {
   public:
    // Adds the object, if it does not already exists.  Returns its index.
    // The objects should survive the tracker.
    uint32_t add(const ObjectType* object) {
        VLOG(MEMORY) << __func__ << "(" << SHOW_IF_DEBUG(object) << ")";
        // See if we already have this object. If so, return its index.
        auto i = mKnown.find(object);
        if (i != mKnown.end()) {
            return i->second;
        }
        VLOG(MEMORY) << "It's new";
        // It's a new one.  Save it an assign an index to it.
        size_t next = mKnown.size();
        uint32_t idx = static_cast<uint32_t>(next);
        mKnown[object] = idx;
        mObjects.push_back(object);
        return idx;
    }

    // Returns the number of objects contained.
    uint32_t size() const { return mObjects.size(); }
    // Returns the ith object.
    const ObjectType* operator[](size_t i) const {
        CHECK(i < size());
        return mObjects[i];
    }
    // Iteration
    auto begin() { return mObjects.begin(); }
    auto end() { return mObjects.end(); }
    auto begin() const { return mObjects.begin(); }
    auto end() const { return mObjects.end(); }

   private:
    // The vector of object pointers we are building.
    std::vector<const ObjectType*> mObjects;
    // A faster way to see if we already have an object than doing find().
    std::unordered_map<const ObjectType*, uint32_t> mKnown;
};

enum class IOType { INPUT = 0, OUTPUT = 1 };

using CompilationRole = std::tuple<const CompilationBuilder*, IOType, uint32_t>;
using StepRoleCallback = std::function<void(const PreparedModel*, IOType, uint32_t)>;

struct MemoryDescriptor {
    std::vector<uint32_t> dimensions;
    ObjectTracker<PreparedModel> preparedModels;
    std::vector<hal::BufferRole> inputRoles, outputRoles;
};

// Represents a memory region.
class Memory {
    // Disallow copy and assign to prevent slicing
    DISALLOW_COPY_AND_ASSIGN(Memory);

   public:
    // Custom destructor to notify any ExecutionBurstControllers currently using
    // this memory that it is being freed.
    virtual ~Memory();

    hal::Request::MemoryPool getMemoryPool() const;
    const hal::hidl_memory& getHidlMemory() const { return kHidlMemory; }

    virtual bool validateSize(uint32_t offset, uint32_t length) const;

    // Unique key representing this memory object.
    intptr_t getKey() const;

    // Marks a burst object as currently using this memory. When this
    // memory object is destroyed, it will automatically free this memory from
    // the bursts' memory cache.
    void usedBy(const std::shared_ptr<ExecutionBurstController>& burst) const;

   protected:
    Memory(hal::hidl_memory memory);

    // The HIDL representation for this memory.  We will use one of the following values
    // when communicating with the drivers.
    const hal::hidl_memory kHidlMemory;
    const int32_t kToken = 0;

   private:
    mutable std::mutex mMutex;
    // mUsedBy is essentially a set of burst objects which use this Memory
    // object. However, std::weak_ptr does not have comparison operations nor a
    // std::hash implementation. This is because it is either a valid pointer
    // (non-null) if the shared object is still alive, or it is null if the
    // object has been freed. To circumvent this, mUsedBy is a map with the raw
    // pointer as the key and the weak_ptr as the value.
    mutable std::unordered_map<const ExecutionBurstController*,
                               std::weak_ptr<ExecutionBurstController>>
            mUsedBy;
};

class MemoryBuilder {
    DISALLOW_COPY_AND_ASSIGN(MemoryBuilder);

   public:
    MemoryBuilder() = default;

    int addRole(const CompilationBuilder& compilation, IOType ioType, uint32_t index, float freq);
    int setDimensions(const std::vector<uint32_t>& dimensions);

    int finish();

   private:
    bool badState(const char* name) const;

    // The memory descriptor that the MemoryBuilder is building.
    MemoryDescriptor mDesc;

    // The roles that have been specified via addRole.
    // This is to check whether a new role has been seen before or not.
    std::set<CompilationRole> mRoles;

    // Keep track of the data type, scale, zero point, and extra parameters of the target operand.
    // Other fields will be ignored, including dimensions, lifetime, location, etc.
    // It is std::nullopt if no usage has been specified yet.
    std::optional<hal::Operand> mOperand;

    // Once the descriptor has been finished, we should not allow further modifications.
    bool mFinished = false;
};

class MemoryAshmem : public Memory {
   public:
    // Creates a memory object containing a new android shared memory ("ashmem")
    // object of the size specified in bytes. Because this ashmem region can be
    // shared with and accessed by one or more driver processes, MemoryAshmem
    // has shared ownership over the ashmem region.
    //
    // On success, returns ANEURALNETWORKS_NO_ERROR and a memory object.
    // On error, returns the appropriate NNAPI error code and nullptr.
    static std::pair<int, std::unique_ptr<MemoryAshmem>> create(uint32_t size);

    // Get a pointer to the ashmem region of memory. The returned pointer is
    // valid for the lifetime of the MemoryAshmem object. This call always
    // returns non-null because it was validated during MemoryAshmem::create.
    uint8_t* getPointer() const;

    // prefer using MemoryAshmem::create
    MemoryAshmem(sp<hal::IMemory> mapped, hal::hidl_memory memory);

   private:
    const sp<hal::IMemory> kMappedMemory;
};

class MemoryFd : public Memory {
   public:
    // Create a memory object based on input size, prot, and fd that can be sent
    // across HIDL. This function duplicates the provided fd, and owns the
    // duplicate.
    //
    // On success, returns ANEURALNETWORKS_NO_ERROR and a memory object.
    // On error, returns the appropriate NNAPI error code and nullptr.
    static std::pair<int, std::unique_ptr<MemoryFd>> create(size_t size, int prot, int fd,
                                                            size_t offset);

    // prefer using MemoryFd::create
    MemoryFd(hal::hidl_memory memory);
};

class MemoryAHWB : public Memory {
   public:
    // Create a memory object to keep track of (but not take ownership of) the
    // provided AHardwareBuffer handle.
    //
    // On success, returns ANEURALNETWORKS_NO_ERROR and a memory object.
    // On error, returns the appropriate NNAPI error code and nullptr.
    static std::pair<int, std::unique_ptr<MemoryAHWB>> create(const AHardwareBuffer& ahwb);

    // validateSize should only be called for blob mode AHardwareBuffer.
    // Calling it on non-blob mode AHardwareBuffer will result in an error.
    // TODO(miaowang): consider separate blob and non-blob into different classes.
    bool validateSize(uint32_t offset, uint32_t length) const override;

    // prefer using MemoryAHWB::create
    MemoryAHWB(const AHardwareBuffer_Desc& desc, hal::hidl_memory memory);

   private:
    const bool kBlobMode;
};

using MemoryTracker = ObjectTracker<Memory>;

}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORKS_ML_NN_RUNTIME_MEMORY_H
