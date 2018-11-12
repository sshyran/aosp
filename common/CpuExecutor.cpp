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

#define LOG_TAG "CpuExecutor"

#include "CpuExecutor.h"

#include "NeuralNetworks.h"
#include "Operations.h"
#include "Tracing.h"

#include "Eigen/Core"
// b/109953668, disable OpenMP
#ifdef NNAPI_OPENMP
#include <omp.h>
#endif  // NNAPI_OPENMP
#include <sys/mman.h>

namespace android {
namespace nn {

// TODO: short term, make share memory mapping and updating a utility function.
// TODO: long term, implement mmap_fd as a hidl IMemory service.
RunTimePoolInfo::RunTimePoolInfo(const hidl_memory& hidlMemory, bool* fail) {
    sp<IMemory> memory;
    uint8_t* buffer = nullptr;

    const auto& memType = hidlMemory.name();
    if (memType == "ashmem") {
        memory = mapMemory(hidlMemory);
        if (memory == nullptr) {
            LOG(ERROR) << "Can't map shared memory.";
            if (fail) *fail = true;
            return;
        }
        memory->update();
        buffer = reinterpret_cast<uint8_t*>(static_cast<void*>(memory->getPointer()));
        if (buffer == nullptr) {
            LOG(ERROR) << "Can't access shared memory.";
            if (fail) *fail = true;
            return;
        }
    } else if (memType == "mmap_fd") {
        size_t size = hidlMemory.size();
        int fd = hidlMemory.handle()->data[0];
        int prot = hidlMemory.handle()->data[1];
        size_t offset = getSizeFromInts(hidlMemory.handle()->data[2],
                                        hidlMemory.handle()->data[3]);
        buffer = static_cast<uint8_t*>(mmap(nullptr, size, prot, MAP_SHARED, fd, offset));
        if (buffer == MAP_FAILED) {
            LOG(ERROR) << "RunTimePoolInfo::set(): Can't mmap the file descriptor.";
            if (fail) *fail = true;
            return;
        }
    } else {
        LOG(ERROR) << "RunTimePoolInfo::set(): unsupported hidl_memory type";
        if (fail) *fail = true;
        return;
    }

    mHidlMemory = hidlMemory;
    mBuffer     = buffer;
    mMemory     = memory;
}

RunTimePoolInfo::RunTimePoolInfo(uint8_t* buffer) {
    mBuffer = buffer;
}

RunTimePoolInfo::RunTimePoolInfo(RunTimePoolInfo&& other) noexcept {
    moveFrom(std::move(other));
    other.mBuffer = nullptr;
}

RunTimePoolInfo& RunTimePoolInfo::operator=(RunTimePoolInfo&& other) noexcept {
    if (this != &other) {
        release();
        moveFrom(std::move(other));
        other.mBuffer = nullptr;
    }
    return *this;
}

void RunTimePoolInfo::moveFrom(RunTimePoolInfo &&other) {
    mHidlMemory = std::move(other.mHidlMemory);
    mBuffer     = std::move(other.mBuffer);
    mMemory     = std::move(other.mMemory);
}

void RunTimePoolInfo::release() {
    if (mBuffer == nullptr) {
        return;
    }

    auto memType = mHidlMemory.name();
    if (memType == "ashmem") {
        // nothing to do
    } else if (memType == "mmap_fd") {
        size_t size = mHidlMemory.size();
        if (munmap(mBuffer, size)) {
            LOG(ERROR) << "RunTimePoolInfo::release(): Can't munmap";
        }
    } else if (memType == "") {
        // Represents a POINTER argument; nothing to do
    } else {
        LOG(ERROR) << "RunTimePoolInfo::release(): unsupported hidl_memory type";
    }

    mHidlMemory = hidl_memory();
    mMemory     = nullptr;
    mBuffer     = nullptr;
}

// Making sure the output data are correctly updated after execution.
bool RunTimePoolInfo::update() const {
    auto memType = mHidlMemory.name();
    if (memType == "ashmem") {
        mMemory->commit();
        return true;
    } else if (memType == "mmap_fd") {
        int prot = mHidlMemory.handle()->data[1];
        if (prot & PROT_WRITE) {
            size_t size = mHidlMemory.size();
            return msync(mBuffer, size, MS_SYNC) == 0;
        }
    }
    // No-op for other types of memory.
    return true;
}

bool setRunTimePoolInfosFromHidlMemories(std::vector<RunTimePoolInfo>* poolInfos,
                                         const hidl_vec<hidl_memory>& pools) {
    poolInfos->clear();
    poolInfos->reserve(pools.size());
    bool fail = false;
    for (const auto& pool : pools) {
        poolInfos->emplace_back(pool, &fail);
    }
    if (fail) {
        LOG(ERROR) << "Could not map pools";
        poolInfos->clear();
        return false;
    }
    return true;
}

// Updates the RunTimeOperandInfo with the newly calculated shape.
// Allocate the buffer if we need to.
static bool setInfoAndAllocateIfNeeded(RunTimeOperandInfo* info, const Shape& shape) {
    // For user-provided model output operands, the parameters must match the Shape
    // calculated from the preparation step.
    if (info->lifetime == OperandLifeTime::MODEL_OUTPUT) {
        if (info->type != shape.type ||
            info->dimensions != shape.dimensions) {
            LOG(ERROR) << "Invalid type or dimensions for model output";
            return false;
        }
        if (info->type == OperandType::TENSOR_QUANT8_ASYMM &&
            (info->scale != shape.scale || info->zeroPoint != shape.offset)) {
            LOG(ERROR) << "Invalid scale or zeroPoint for model output";
            return false;
        }
    }
    info->type = shape.type;
    info->dimensions = shape.dimensions;
    info->scale = shape.scale;
    info->zeroPoint = shape.offset;
    if (info->lifetime == OperandLifeTime::TEMPORARY_VARIABLE && info->buffer == nullptr) {
        uint32_t length = sizeOfData(info->type, info->dimensions);
        info->buffer = new uint8_t[length];
        if (info->buffer == nullptr) {
            return false;
        }
    }
    return true;
}

template <typename T>
inline bool convertToNhwcImpl(T* to, const T* from, const std::vector<uint32_t>& fromDim) {
    uint32_t spatialSize = fromDim[2] * fromDim[3];
    for (uint32_t n = 0; n < fromDim[0]; n++) {
        for (uint32_t hw = 0; hw < spatialSize; hw++) {
            for (uint32_t c = 0; c < fromDim[1]; c++) {
                uint32_t fromIndex = n * fromDim[1] * spatialSize + c * spatialSize + hw;
                *to++ = from[fromIndex];
            }
        }
    }
    return true;
}

template <typename T>
inline bool convertFromNhwcImpl(T* to, const T* from, const std::vector<uint32_t>& fromDim) {
    uint32_t spatialSize = fromDim[1] * fromDim[2];
    for (uint32_t n = 0; n < fromDim[0]; n++) {
        for (uint32_t c = 0; c < fromDim[3]; c++) {
            for (uint32_t hw = 0; hw < spatialSize; hw++) {
                uint32_t fromIndex = n * spatialSize * fromDim[3] + hw * fromDim[3] + c;
                *to++ = from[fromIndex];
            }
        }
    }
    return true;
}

static bool convertToNhwc(RunTimeOperandInfo& to, const RunTimeOperandInfo& from,
                          std::unique_ptr<uint8_t[]>& ptr_guard, bool data_layout) {
    if (from.dimensions.size() != 4) {
        LOG(ERROR) << "Error converting a non-4-D tensor to NHWC layout";
        return false;
    }
    to.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
    if (data_layout) {
        // convert dimensions
        Shape inShape = from.shape();
        auto& fromDim = from.dimensions;
        inShape.dimensions = {fromDim[0], fromDim[2], fromDim[3], fromDim[1]};
        // allocate buffer
        to.buffer = nullptr;
        if (!setInfoAndAllocateIfNeeded(&to, inShape)) {
            return false;
        }
        ptr_guard.reset(to.buffer);
        // convert value
        if (from.type == OperandType::TENSOR_FLOAT32) {
            return convertToNhwcImpl<float>(reinterpret_cast<float*>(to.buffer),
                                            reinterpret_cast<const float*>(from.buffer), fromDim);
        } else if (from.type == OperandType::TENSOR_QUANT8_ASYMM) {
            return convertToNhwcImpl<uint8_t>(reinterpret_cast<uint8_t*>(to.buffer),
                                              reinterpret_cast<const uint8_t*>(from.buffer),
                                              fromDim);
        } else {
            LOG(ERROR) << "Unsupported data type";
            return false;
        }
    } else {
        to = from;
    }
    return true;
}

static bool convertFromNhwc(RunTimeOperandInfo& to, const RunTimeOperandInfo& from,
                            bool data_layout) {
    if (from.dimensions.size() != 4) {
        LOG(ERROR) << "Error converting a non-4-D tensor from NHWC layout";
        return false;
    }
    if (data_layout) {
        // convert dimensions
        Shape outShape = from.shape();
        auto& fromDim = from.dimensions;
        outShape.dimensions = {fromDim[0], fromDim[3], fromDim[1], fromDim[2]};
        // allocate buffer
        if (!setInfoAndAllocateIfNeeded(&to, outShape)) {
            return false;
        }
        // convert value
        if (from.type == OperandType::TENSOR_FLOAT32) {
            return convertFromNhwcImpl<float>(reinterpret_cast<float*>(to.buffer),
                                              reinterpret_cast<const float*>(from.buffer), fromDim);
        } else if (from.type == OperandType::TENSOR_QUANT8_ASYMM) {
            return convertFromNhwcImpl<uint8_t>(reinterpret_cast<uint8_t*>(to.buffer),
                                                reinterpret_cast<const uint8_t*>(from.buffer),
                                                fromDim);
        } else {
            LOG(ERROR) << "Unsupported data type";
            return false;
        }
    } else {
        Shape outShape = from.shape();
        to.buffer = from.buffer;
        if (!setInfoAndAllocateIfNeeded(&to, outShape)) {
            return false;
        }
    }
    return true;
}

// Ignore the .pools entry in model and request.  This will have been taken care of
// by the caller.
int CpuExecutor::run(const Model& model, const Request& request,
                     const std::vector<RunTimePoolInfo>& modelPoolInfos,
                     const std::vector<RunTimePoolInfo>& requestPoolInfos) {
    NNTRACE_CPU(NNTRACE_PHASE_EXECUTION, "run");
    VLOG(CPUEXE) << "CpuExecutor::run() with request("
                 << SHOW_IF_DEBUG(toString(request)) << ")";

    // b/109953668, disable OpenMP
#ifdef NNAPI_OPENMP
    ScopedOpenmpSettings openMpSettings;
#endif  // NNAPI_OPENMP

    mModel = &model;
    mRequest = &request; // TODO check if mRequest is needed
    initializeRunTimeInfo(modelPoolInfos, requestPoolInfos);
    // The model has serialized the operation in execution order.
    for (const auto& operation : model.operations) {
        int n = executeOperation(operation);
        if (n != ANEURALNETWORKS_NO_ERROR) {
            return n;
        }
    }
    for (auto& runtimeInfo : modelPoolInfos) {
        runtimeInfo.update();
    }
    for (auto& runtimeInfo : requestPoolInfos) {
        runtimeInfo.update();
    }
    mModel = nullptr;
    mRequest = nullptr;
    VLOG(CPUEXE) << "Completed run normally";
    return ANEURALNETWORKS_NO_ERROR;
}

bool CpuExecutor::initializeRunTimeInfo(const std::vector<RunTimePoolInfo>& modelPoolInfos,
                                        const std::vector<RunTimePoolInfo>& requestPoolInfos) {
    VLOG(CPUEXE) << "CpuExecutor::initializeRunTimeInfo";
    const size_t count = mModel->operands.size();
    mOperands.resize(count);

    // Start by setting the runtime info to what's in the model.
    for (size_t i = 0; i < count; i++) {
        const Operand& from = mModel->operands[i];
        RunTimeOperandInfo& to = mOperands[i];
        to.type = from.type;
        to.dimensions = from.dimensions;
        to.scale = from.scale;
        to.zeroPoint = from.zeroPoint;
        to.length = from.location.length;
        to.lifetime = from.lifetime;
        switch (from.lifetime) {
            case OperandLifeTime::TEMPORARY_VARIABLE:
                to.buffer = nullptr;
                to.numberOfUsesLeft = from.numberOfConsumers;
                break;
            case OperandLifeTime::CONSTANT_COPY:
                to.buffer = const_cast<uint8_t*>(&mModel->operandValues[from.location.offset]);
                to.numberOfUsesLeft = 0;
                break;
            case OperandLifeTime::CONSTANT_REFERENCE: {
                auto poolIndex = from.location.poolIndex;
                nnAssert(poolIndex < modelPoolInfos.size());
                auto& r = modelPoolInfos[poolIndex];
                to.buffer = r.getBuffer() + from.location.offset;
                to.numberOfUsesLeft = 0;
                break;
            }
            case OperandLifeTime::MODEL_INPUT:
            case OperandLifeTime::MODEL_OUTPUT:
            case OperandLifeTime::NO_VALUE:
                to.buffer = nullptr;
                to.numberOfUsesLeft = 0;
                break;
            default:
                nnAssert(false);
                break;
        }
    }

    // Adjust the runtime info for the arguments passed to the model,
    // modifying the buffer location, and possibly the dimensions.
    auto updateForArguments = [this, &requestPoolInfos](const std::vector<uint32_t>& indexes,
                                  const hidl_vec<RequestArgument>& arguments) {
        nnAssert(indexes.size() == arguments.size());
        for (size_t i = 0; i < indexes.size(); i++) {
            const uint32_t operandIndex = indexes[i];
            const RequestArgument& from = arguments[i];
            RunTimeOperandInfo& to = mOperands[operandIndex];
            if (from.dimensions.size() > 0) {
                // It's the responsibility of the caller to validate that
                // from.dimensions only modifies the dimensions that were
                // unspecified in the model.  That's the case in SampleDriver.cpp
                // with the call to validateRequest().
                // TODO make sure that's the case for the default CPU path.
                to.dimensions = from.dimensions;
            }
            if (from.hasNoValue) {
                to.lifetime = OperandLifeTime::NO_VALUE;
                nnAssert(to.buffer == nullptr);
            } else {
                auto poolIndex = from.location.poolIndex;
                nnAssert(poolIndex < requestPoolInfos.size());
                auto& r = requestPoolInfos[poolIndex];
                to.buffer = r.getBuffer() + from.location.offset;
            }
        }
    };
    updateForArguments(mModel->inputIndexes, mRequest->inputs);
    updateForArguments(mModel->outputIndexes, mRequest->outputs);

    return true;
}

void CpuExecutor::freeNoLongerUsedOperands(const std::vector<uint32_t>& inputs) {
    for (uint32_t i : inputs) {
        auto& info = mOperands[i];
        // Check if it's a static or model input/output.
        if (info.numberOfUsesLeft == 0) {
            continue;
        }
        info.numberOfUsesLeft--;
        if (info.numberOfUsesLeft == 0) {
            nnAssert(info.buffer != nullptr);
            delete[] info.buffer;
            info.buffer = nullptr;
        }
    }
}

int CpuExecutor::executeOperation(const Operation& operation) {
    // VLOG(CPUEXE) << "CpuExecutor::executeOperation(" << toString(operation) << ")";
    const hidl_vec<uint32_t>& ins = operation.inputs;
    const hidl_vec<uint32_t>& outs = operation.outputs;
    bool success = false;

    // Function to verify that the number of input and output parameters
    // matches what is expected.  Also checks that all the parameters have
    // values. This function is to be used only for operations that do not
    // accept optional arguments.
    // TODO Have a version that works for optional arguments.
    auto allParametersPresent = [&operation, &ins, &outs, this](size_t requiredIns,
                                                                size_t requiredOuts) -> bool {
        auto verify = [&operation, this](size_t requiredCount, const hidl_vec<uint32_t>& indexes,
                          const char* type) -> bool {
            size_t actualCount = indexes.size();
            if (actualCount != requiredCount) {
                LOG(ERROR) << getOperationName(operation.type)
                           << ": Invalid number of " << type << " operands. Got " << actualCount
                           << " of " << requiredCount;
                return false;
            }
            for (size_t i = 0; i < actualCount; i++) {
                if (mOperands[indexes[i]].lifetime == OperandLifeTime::NO_VALUE) {
                    LOG(ERROR) << getOperationName(operation.type) << " " << type
                               << " operand " << i << " is required but missing.";
                    return false;
                }
            }
            return true;
        };
        return verify(requiredIns, ins, "in") && verify(requiredOuts, outs, "out");
    };

    switch (operation.type) {
        case OperationType::OEM_OPERATION: {
            LOG(ERROR) << "OEM operation not supported for CPU execution";
            success = false;
        } break;
        case OperationType::ADD: {
            if (!allParametersPresent(3, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& in1 = mOperands[ins[0]];
            const RunTimeOperandInfo& in2 = mOperands[ins[1]];
            int32_t activation = getScalarData<int32_t>(mOperands[ins[2]]);

            RunTimeOperandInfo& out = mOperands[outs[0]];
            Shape outShape = out.shape();

            if (!addMulPrepare(in1.shape(), in2.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&out, outShape)) {
                break;
            }
            if (in1.type == OperandType::TENSOR_FLOAT32) {
                success = addFloat32(reinterpret_cast<const float*>(in1.buffer), in1.shape(),
                                     reinterpret_cast<const float*>(in2.buffer), in2.shape(),
                                     activation, reinterpret_cast<float*>(out.buffer), outShape);
            } else if (in1.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = addQuant8(reinterpret_cast<const uint8_t*>(in1.buffer), in1.shape(),
                                    reinterpret_cast<const uint8_t*>(in2.buffer), in2.shape(),
                                    activation, reinterpret_cast<uint8_t*>(out.buffer), outShape);
            }
        } break;
        case OperationType::MUL: {
            if (!allParametersPresent(3, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& in1 = mOperands[ins[0]];
            const RunTimeOperandInfo& in2 = mOperands[ins[1]];
            int32_t activation = getScalarData<int32_t>(mOperands[ins[2]]);

            RunTimeOperandInfo& out = mOperands[outs[0]];
            Shape outShape = out.shape();

            if (!addMulPrepare(in1.shape(), in2.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&out, outShape)) {
                break;
            }
            if (in1.type == OperandType::TENSOR_FLOAT32) {
                success = mulFloat32(reinterpret_cast<const float*>(in1.buffer), in1.shape(),
                                     reinterpret_cast<const float*>(in2.buffer), in2.shape(),
                                     activation, reinterpret_cast<float*>(out.buffer), outShape);
            } else if (in1.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = mulQuant8(reinterpret_cast<const uint8_t*>(in1.buffer), in1.shape(),
                                    reinterpret_cast<const uint8_t*>(in2.buffer), in2.shape(),
                                    activation, reinterpret_cast<uint8_t*>(out.buffer), outShape);
            }
        } break;
        case OperationType::FLOOR: {
            if (!allParametersPresent(1, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!floorPrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = floorFloat32(reinterpret_cast<const float*>(input.buffer),
                                       reinterpret_cast<float*>(output.buffer), outShape);
            }
        } break;
        case OperationType::DEQUANTIZE: {
            if (!allParametersPresent(1, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!dequantizePrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = dequantizeQuant8ToFloat32(reinterpret_cast<const uint8_t*>(input.buffer),
                                                    reinterpret_cast<float*>(output.buffer),
                                                    input.shape());
            }
        } break;
        case OperationType::QUANTIZE: {
            if (!allParametersPresent(1, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!quantizePrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = quantizeFloat32ToQuant8(reinterpret_cast<const float*>(input.buffer),
                                                  reinterpret_cast<uint8_t*>(output.buffer),
                                                  output.shape());
            }
        } break;
        case OperationType::DEPTHWISE_CONV_2D: {
            const size_t inCount = ins.size();
            if ((inCount != 12 && inCount != 11 && inCount != 9 && inCount != 8) ||
                !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input  = mOperands[ins[0]];
            const RunTimeOperandInfo& filter = mOperands[ins[1]];
            const RunTimeOperandInfo& bias   = mOperands[ins[2]];

            int32_t padding_left, padding_right;
            int32_t padding_top, padding_bottom;
            int32_t padding_implicit = 0;
            int32_t stride_width, stride_height;
            int32_t depth_multiplier;
            int32_t activation;
            bool data_layout = false;

            if (inCount >= 11) {
                padding_left     = getScalarData<int32_t>(mOperands[ins[3]]);
                padding_right    = getScalarData<int32_t>(mOperands[ins[4]]);
                padding_top      = getScalarData<int32_t>(mOperands[ins[5]]);
                padding_bottom   = getScalarData<int32_t>(mOperands[ins[6]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[7]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[8]]);
                depth_multiplier = getScalarData<int32_t>(mOperands[ins[9]]);
                activation       = getScalarData<int32_t>(mOperands[ins[10]]);
                if (inCount == 12) {
                    data_layout = getScalarData<bool>(mOperands[ins[11]]);
                }
            } else {
                padding_implicit = getScalarData<int32_t>(mOperands[ins[3]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[4]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[5]]);
                depth_multiplier = getScalarData<int32_t>(mOperands[ins[6]]);
                activation       = getScalarData<int32_t>(mOperands[ins[7]]);
                if (inCount == 9) {
                    data_layout = getScalarData<bool>(mOperands[ins[8]]);
                }
            }

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            if (inCount <= 9) {
                Shape inputShape = input_tmp.shape();
                Shape filterShape = filter.shape();
                int32_t input_width  = getSizeOfDimension(inputShape, 2);
                int32_t input_height = getSizeOfDimension(inputShape, 1);
                int32_t filter_width  = getSizeOfDimension(filterShape, 2);
                int32_t filter_height = getSizeOfDimension(filterShape, 1);
                calculateExplicitPadding(input_width, stride_width,
                                         filter_width, padding_implicit,
                                         &padding_left, &padding_right);
                calculateExplicitPadding(input_height, stride_height,
                                         filter_height, padding_implicit,
                                         &padding_top, &padding_bottom);
            }

            if (!depthwiseConvPrepare(input_tmp.shape(), filter.shape(), bias.shape(), padding_left,
                                      padding_right, padding_top, padding_bottom, stride_width,
                                      stride_height, &outShape) ||
                !setInfoAndAllocateIfNeeded(&output_tmp, outShape)) {
                success = false;
                break;
            }
            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = depthwiseConvFloat32(
                        reinterpret_cast<const float*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const float*>(filter.buffer), filter.shape(),
                        reinterpret_cast<const float*>(bias.buffer), bias.shape(), padding_left,
                        padding_right, padding_top, padding_bottom, stride_width, stride_height,
                        depth_multiplier, activation, reinterpret_cast<float*>(output_tmp.buffer),
                        outShape);
            } else if (input_tmp.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = depthwiseConvQuant8(
                        reinterpret_cast<const uint8_t*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const uint8_t*>(filter.buffer), filter.shape(),
                        reinterpret_cast<const int32_t*>(bias.buffer), bias.shape(), padding_left,
                        padding_right, padding_top, padding_bottom, stride_width, stride_height,
                        depth_multiplier, activation, reinterpret_cast<uint8_t*>(output_tmp.buffer),
                        outShape);
            }

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::CONV_2D: {
            const size_t inCount = ins.size();
            if ((inCount != 11 && inCount != 10 && inCount != 8 && inCount != 7) ||
                !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input  = mOperands[ins[0]];
            const RunTimeOperandInfo& filter = mOperands[ins[1]];
            const RunTimeOperandInfo& bias   = mOperands[ins[2]];

            int32_t padding_left, padding_right;
            int32_t padding_top, padding_bottom;
            int32_t padding_implicit = 0;
            int32_t stride_width, stride_height;
            int32_t activation;
            bool data_layout = false;

            if (inCount == 11 || inCount == 10) {
                padding_left     = getScalarData<int32_t>(mOperands[ins[3]]);
                padding_right    = getScalarData<int32_t>(mOperands[ins[4]]);
                padding_top      = getScalarData<int32_t>(mOperands[ins[5]]);
                padding_bottom   = getScalarData<int32_t>(mOperands[ins[6]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[7]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[8]]);
                activation       = getScalarData<int32_t>(mOperands[ins[9]]);
                if (inCount == 11) {
                    data_layout = getScalarData<bool>(mOperands[ins[10]]);
                }
            } else {
                padding_implicit = getScalarData<int32_t>(mOperands[ins[3]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[4]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[5]]);
                activation       = getScalarData<int32_t>(mOperands[ins[6]]);
                if (inCount == 8) {
                    data_layout = getScalarData<bool>(mOperands[ins[7]]);
                }
            }

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            if (inCount <= 8) {
                Shape inputShape = input_tmp.shape();
                Shape filterShape = filter.shape();
                int32_t input_width  = getSizeOfDimension(inputShape, 2);
                int32_t input_height = getSizeOfDimension(inputShape, 1);
                int32_t filter_width  = getSizeOfDimension(filterShape, 2);
                int32_t filter_height = getSizeOfDimension(filterShape, 1);
                calculateExplicitPadding(input_width, stride_width, filter_width, padding_implicit,
                                         &padding_left, &padding_right);
                calculateExplicitPadding(input_height, stride_height, filter_height,
                                         padding_implicit, &padding_top, &padding_bottom);
            }

            if (!convPrepare(input_tmp.shape(), filter.shape(), bias.shape(), padding_left,
                             padding_right, padding_top, padding_bottom, stride_width,
                             stride_height, &outShape) ||
                !setInfoAndAllocateIfNeeded(&output_tmp, outShape)) {
                success = false;
                break;
            }
            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = convFloat32(
                        reinterpret_cast<const float*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const float*>(filter.buffer), filter.shape(),
                        reinterpret_cast<const float*>(bias.buffer), bias.shape(), padding_left,
                        padding_right, padding_top, padding_bottom, stride_width, stride_height,
                        activation, reinterpret_cast<float*>(output_tmp.buffer), outShape);
            } else if (input_tmp.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = convQuant8(
                        reinterpret_cast<const uint8_t*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const uint8_t*>(filter.buffer), filter.shape(),
                        reinterpret_cast<const int32_t*>(bias.buffer), bias.shape(), padding_left,
                        padding_right, padding_top, padding_bottom, stride_width, stride_height,
                        activation, reinterpret_cast<uint8_t*>(output_tmp.buffer), outShape);
            }

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::AVERAGE_POOL_2D: {
            const size_t inCount = ins.size();
            if ((inCount != 11 && inCount != 10 && inCount != 8 && inCount != 7) ||
                !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];

            int32_t padding_left, padding_right;
            int32_t padding_top, padding_bottom;
            int32_t padding_implicit = 0;
            int32_t stride_width, stride_height;
            int32_t filter_width, filter_height;
            int32_t activation;
            bool data_layout = false;

            if (inCount >= 10) {
                padding_left     = getScalarData<int32_t>(mOperands[ins[1]]);
                padding_right    = getScalarData<int32_t>(mOperands[ins[2]]);
                padding_top      = getScalarData<int32_t>(mOperands[ins[3]]);
                padding_bottom   = getScalarData<int32_t>(mOperands[ins[4]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[5]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[6]]);
                filter_width     = getScalarData<int32_t>(mOperands[ins[7]]);
                filter_height    = getScalarData<int32_t>(mOperands[ins[8]]);
                activation       = getScalarData<int32_t>(mOperands[ins[9]]);
                if (inCount == 11) {
                    data_layout = getScalarData<bool>(mOperands[ins[10]]);
                }
            } else {
                padding_implicit = getScalarData<int32_t>(mOperands[ins[1]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[2]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[3]]);
                filter_width     = getScalarData<int32_t>(mOperands[ins[4]]);
                filter_height    = getScalarData<int32_t>(mOperands[ins[5]]);
                activation       = getScalarData<int32_t>(mOperands[ins[6]]);
                if (inCount == 8) {
                    data_layout = getScalarData<bool>(mOperands[ins[7]]);
                }
            }

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            if (inCount <= 8) {
                Shape inputShape = input_tmp.shape();
                int32_t input_width  = getSizeOfDimension(inputShape, 2);
                int32_t input_height = getSizeOfDimension(inputShape, 1);
                calculateExplicitPadding(input_width, stride_width,
                                         filter_width, padding_implicit,
                                         &padding_left, &padding_right);
                calculateExplicitPadding(input_height, stride_height,
                                         filter_height, padding_implicit,
                                         &padding_top, &padding_bottom);
            }

            if (!genericPoolingPrepare(input_tmp.shape(), padding_left, padding_right, padding_top,
                                       padding_bottom, stride_width, stride_height, filter_width,
                                       filter_height, &outShape) ||
                !setInfoAndAllocateIfNeeded(&output_tmp, outShape)) {
                success = false;
                break;
            }
            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = averagePoolFloat32(reinterpret_cast<const float*>(input_tmp.buffer),
                                             input_tmp.shape(), padding_left, padding_right,
                                             padding_top, padding_bottom, stride_width,
                                             stride_height, filter_width, filter_height, activation,
                                             reinterpret_cast<float*>(output_tmp.buffer), outShape);
            } else if (input_tmp.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = averagePoolQuant8(
                        reinterpret_cast<const uint8_t*>(input_tmp.buffer), input_tmp.shape(),
                        padding_left, padding_right, padding_top, padding_bottom, stride_width,
                        stride_height, filter_width, filter_height, activation,
                        reinterpret_cast<uint8_t*>(output_tmp.buffer), outShape);
            }

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::L2_POOL_2D: {
            const size_t inCount = ins.size();
            if ((inCount != 11 && inCount != 10 && inCount != 8 && inCount != 7) ||
                !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];

            int32_t padding_left, padding_right;
            int32_t padding_top, padding_bottom;
            int32_t padding_implicit = 0;
            int32_t stride_width, stride_height;
            int32_t filter_width, filter_height;
            int32_t activation;
            bool data_layout = false;

            if (inCount >= 10) {
                padding_left     = getScalarData<int32_t>(mOperands[ins[1]]);
                padding_right    = getScalarData<int32_t>(mOperands[ins[2]]);
                padding_top      = getScalarData<int32_t>(mOperands[ins[3]]);
                padding_bottom   = getScalarData<int32_t>(mOperands[ins[4]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[5]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[6]]);
                filter_width     = getScalarData<int32_t>(mOperands[ins[7]]);
                filter_height    = getScalarData<int32_t>(mOperands[ins[8]]);
                activation       = getScalarData<int32_t>(mOperands[ins[9]]);
                if (inCount == 11) {
                    data_layout = getScalarData<bool>(mOperands[ins[10]]);
                }
            } else {
                padding_implicit = getScalarData<int32_t>(mOperands[ins[1]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[2]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[3]]);
                filter_width     = getScalarData<int32_t>(mOperands[ins[4]]);
                filter_height    = getScalarData<int32_t>(mOperands[ins[5]]);
                activation       = getScalarData<int32_t>(mOperands[ins[6]]);
                if (inCount == 8) {
                    data_layout = getScalarData<bool>(mOperands[ins[7]]);
                }
            }

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            if (inCount <= 8) {
                Shape inputShape = input_tmp.shape();
                int32_t input_width  = getSizeOfDimension(inputShape, 2);
                int32_t input_height = getSizeOfDimension(inputShape, 1);
                calculateExplicitPadding(input_width, stride_width,
                                         filter_width, padding_implicit,
                                         &padding_left, &padding_right);
                calculateExplicitPadding(input_height, stride_height,
                                         filter_height, padding_implicit,
                                         &padding_top, &padding_bottom);
            }

            if (!genericPoolingPrepare(input_tmp.shape(), padding_left, padding_right, padding_top,
                                       padding_bottom, stride_width, stride_height, filter_width,
                                       filter_height, &outShape) ||
                !setInfoAndAllocateIfNeeded(&output_tmp, outShape)) {
                success = false;
                break;
            }
            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = l2PoolFloat32(reinterpret_cast<const float*>(input_tmp.buffer),
                                        input_tmp.shape(), padding_left, padding_right, padding_top,
                                        padding_bottom, stride_width, stride_height, filter_width,
                                        filter_height, activation,
                                        reinterpret_cast<float*>(output_tmp.buffer), outShape);
            }

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::MAX_POOL_2D: {
            const size_t inCount = ins.size();
            if ((inCount != 11 && inCount != 10 && inCount != 8 && inCount != 7) ||
                !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];

            int32_t padding_left, padding_right;
            int32_t padding_top, padding_bottom;
            int32_t padding_implicit = 0;
            int32_t stride_width, stride_height;
            int32_t filter_width, filter_height;
            int32_t activation;
            bool data_layout = false;

            if (inCount >= 10) {
                padding_left     = getScalarData<int32_t>(mOperands[ins[1]]);
                padding_right    = getScalarData<int32_t>(mOperands[ins[2]]);
                padding_top      = getScalarData<int32_t>(mOperands[ins[3]]);
                padding_bottom   = getScalarData<int32_t>(mOperands[ins[4]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[5]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[6]]);
                filter_width     = getScalarData<int32_t>(mOperands[ins[7]]);
                filter_height    = getScalarData<int32_t>(mOperands[ins[8]]);
                activation       = getScalarData<int32_t>(mOperands[ins[9]]);
                if (inCount == 11) {
                    data_layout = getScalarData<bool>(mOperands[ins[10]]);
                }
            } else {
                padding_implicit = getScalarData<int32_t>(mOperands[ins[1]]);
                stride_width     = getScalarData<int32_t>(mOperands[ins[2]]);
                stride_height    = getScalarData<int32_t>(mOperands[ins[3]]);
                filter_width     = getScalarData<int32_t>(mOperands[ins[4]]);
                filter_height    = getScalarData<int32_t>(mOperands[ins[5]]);
                activation       = getScalarData<int32_t>(mOperands[ins[6]]);
                if (inCount == 8) {
                    data_layout = getScalarData<bool>(mOperands[ins[7]]);
                }
            }

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            if (inCount <= 8) {
                Shape inputShape = input_tmp.shape();
                int32_t input_width  = getSizeOfDimension(inputShape, 2);
                int32_t input_height = getSizeOfDimension(inputShape, 1);
                calculateExplicitPadding(input_width, stride_width,
                                         filter_width, padding_implicit,
                                         &padding_left, &padding_right);
                calculateExplicitPadding(input_height, stride_height,
                                         filter_height, padding_implicit,
                                         &padding_top, &padding_bottom);
            }

            if (!genericPoolingPrepare(input_tmp.shape(), padding_left, padding_right, padding_top,
                                       padding_bottom, stride_width, stride_height, filter_width,
                                       filter_height, &outShape) ||
                !setInfoAndAllocateIfNeeded(&output_tmp, outShape)) {
                success = false;
                break;
            }
            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = maxPoolFloat32(reinterpret_cast<const float*>(input_tmp.buffer),
                                         input_tmp.shape(), padding_left, padding_right,
                                         padding_top, padding_bottom, stride_width, stride_height,
                                         filter_width, filter_height, activation,
                                         reinterpret_cast<float*>(output_tmp.buffer), outShape);
            } else if (input_tmp.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = maxPoolQuant8(reinterpret_cast<const uint8_t*>(input_tmp.buffer),
                                        input_tmp.shape(), padding_left, padding_right, padding_top,
                                        padding_bottom, stride_width, stride_height, filter_width,
                                        filter_height, activation,
                                        reinterpret_cast<uint8_t*>(output_tmp.buffer), outShape);
            }

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::RELU: {
            if (!allParametersPresent(1, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!genericActivationPrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = reluFloat32(reinterpret_cast<const float*>(input.buffer), input.shape(),
                                      reinterpret_cast<float*>(output.buffer), outShape);
            } else if (input.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = reluQuant8(reinterpret_cast<const uint8_t*>(input.buffer), input.shape(),
                                     reinterpret_cast<uint8_t*>(output.buffer), outShape);
            }
        } break;
        case OperationType::RELU1: {
            if (!allParametersPresent(1, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!genericActivationPrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = relu1Float32(reinterpret_cast<const float*>(input.buffer), input.shape(),
                                       reinterpret_cast<float*>(output.buffer), outShape);
            } else if (input.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = relu1Quant8(reinterpret_cast<const uint8_t*>(input.buffer), input.shape(),
                                      reinterpret_cast<uint8_t*>(output.buffer), outShape);
            }
        } break;
        case OperationType::RELU6: {
            if (!allParametersPresent(1, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!genericActivationPrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = relu6Float32(reinterpret_cast<const float*>(input.buffer), input.shape(),
                                       reinterpret_cast<float*>(output.buffer), outShape);
            } else if (input.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = relu6Quant8(reinterpret_cast<const uint8_t*>(input.buffer), input.shape(),
                                      reinterpret_cast<uint8_t*>(output.buffer), outShape);
            }
        } break;
        case OperationType::TANH: {
            if (!allParametersPresent(1, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!genericActivationPrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = tanhFloat32(reinterpret_cast<const float*>(input.buffer), input.shape(),
                                      reinterpret_cast<float*>(output.buffer), outShape);
            } else if (input.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = tanhQuant8(reinterpret_cast<const uint8_t*>(input.buffer), input.shape(),
                                     reinterpret_cast<uint8_t*>(output.buffer), outShape);
            }
        } break;
        case OperationType::LOGISTIC: {
            if (!allParametersPresent(1, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!genericActivationPrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success =
                        logisticFloat32(reinterpret_cast<const float*>(input.buffer), input.shape(),
                                        reinterpret_cast<float*>(output.buffer), outShape);
            } else if (input.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = logisticQuant8(reinterpret_cast<const uint8_t*>(input.buffer),
                                         input.shape(), reinterpret_cast<uint8_t*>(output.buffer),
                                         outShape);
            }
        } break;
        case OperationType::SOFTMAX: {
            const size_t inCount = ins.size();
            if ((inCount != 3 && inCount != 2) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            RunTimeOperandInfo& input = mOperands[ins[0]];
            float beta = getScalarData<float>(mOperands[ins[1]]);
            if (beta <= 0.0f) {
                LOG(ERROR) << "beta must be positive for softmax";
                return ANEURALNETWORKS_BAD_DATA;
            }
            int32_t axis = inCount == 3 ? getScalarData<int32_t>(mOperands[ins[2]]) : -1;

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!genericActivationPrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = softmaxFloat32(reinterpret_cast<const float*>(input.buffer),
                                         input.shape(), beta, axis,
                                         reinterpret_cast<float*>(output.buffer), output.shape());
            } else if (input.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = softmaxQuant8(reinterpret_cast<const uint8_t*>(input.buffer),
                                        input.shape(), beta, axis,
                                        reinterpret_cast<uint8_t*>(output.buffer), output.shape());
            }
        } break;
        case OperationType::FULLY_CONNECTED: {
            if (!allParametersPresent(4, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            RunTimeOperandInfo& input   = mOperands[ins[0]];
            RunTimeOperandInfo& weights = mOperands[ins[1]];
            RunTimeOperandInfo& bias    = mOperands[ins[2]];

            int32_t activation = getScalarData<int32_t>(mOperands[ins[3]]);

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!fullyConnectedPrepare(input.shape(), weights.shape(), bias.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = fullyConnectedFloat32(
                        reinterpret_cast<const float*>(input.buffer), input.shape(),
                        reinterpret_cast<const float*>(weights.buffer), weights.shape(),
                        reinterpret_cast<const float*>(bias.buffer), bias.shape(), activation,
                        reinterpret_cast<float*>(output.buffer), outShape);
            } else if (input.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = fullyConnectedQuant8(
                        reinterpret_cast<const uint8_t*>(input.buffer), input.shape(),
                        reinterpret_cast<const uint8_t*>(weights.buffer), weights.shape(),
                        reinterpret_cast<const int32_t*>(bias.buffer), bias.shape(), activation,
                        reinterpret_cast<uint8_t*>(output.buffer), outShape);
            }
        } break;
        case OperationType::CONCATENATION: {
            if (outs.size() != 1 || ins.size() < 2) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            int numInputTensors = ins.size() - 1;
            int32_t axis = getScalarData<int32_t>(mOperands[ins[numInputTensors]]);

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            const RunTimeOperandInfo& firstInput = mOperands[ins[0]];
            if (firstInput.type == OperandType::TENSOR_FLOAT32) {
                std::vector<Shape> inputShapes(numInputTensors);
                std::vector<const float*> inputDataPtrs(numInputTensors);

                for (int i=0; i<numInputTensors; i++) {
                    RunTimeOperandInfo& input = mOperands[ins[i]];
                    inputShapes[i] = input.shape();
                    inputDataPtrs[i] = reinterpret_cast<const float*>(input.buffer);
                }
                success = concatenationPrepare(inputShapes, axis, &outShape) &&
                          setInfoAndAllocateIfNeeded(&output, outShape) &&
                          concatenationFloat32(inputDataPtrs, inputShapes, axis,
                                               reinterpret_cast<float*>(output.buffer), outShape);
            } else if (firstInput.type == OperandType::TENSOR_QUANT8_ASYMM) {
                std::vector<Shape> inputShapes(numInputTensors);
                std::vector<const uint8_t*> inputDataPtrs(numInputTensors);

                for (int i=0; i<numInputTensors; i++) {
                    RunTimeOperandInfo& input = mOperands[ins[i]];
                    inputShapes[i] = input.shape();
                    inputDataPtrs[i] = reinterpret_cast<const uint8_t*>(input.buffer);
                }
                success = concatenationPrepare(inputShapes, axis, &outShape) &&
                          setInfoAndAllocateIfNeeded(&output, outShape) &&
                          concatenationQuant8(inputDataPtrs, inputShapes, axis,
                                              reinterpret_cast<uint8_t*>(output.buffer),
                                              outShape);
            }
        } break;
        case OperationType::L2_NORMALIZATION: {
            const size_t inCount = ins.size();
            if ((inCount != 2 && inCount != 1) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const int32_t axis = inCount == 2 ? getScalarData<int32_t>(mOperands[ins[1]]) : -1;
            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!genericNormalizationPrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                success = false;
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = l2normFloat32(reinterpret_cast<const float*>(input.buffer), input.shape(),
                                        axis, reinterpret_cast<float*>(output.buffer), outShape);
            }
        } break;
        case OperationType::LOCAL_RESPONSE_NORMALIZATION: {
            const size_t inCount = ins.size();
            if ((inCount != 6 && inCount != 5) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            int32_t radius = getScalarData<int32_t>(mOperands[ins[1]]);
            float bias = getScalarData<float>(mOperands[ins[2]]);
            float alpha = getScalarData<float>(mOperands[ins[3]]);
            float beta = getScalarData<float>(mOperands[ins[4]]);
            const int32_t axis = inCount == 6 ? getScalarData<int32_t>(mOperands[ins[5]]) : -1;

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!genericNormalizationPrepare(input.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                success = false;
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                success = localResponseNormFloat32(
                        reinterpret_cast<const float*>(input.buffer), input.shape(), radius, bias,
                        alpha, beta, axis, reinterpret_cast<float*>(output.buffer), outShape);
            }
        } break;
        case OperationType::RESHAPE: {
            if (!allParametersPresent(2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& targetShape = mOperands[ins[1]];

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success = reshapePrepare(input.shape(),
                                     reinterpret_cast<const int32_t*>(targetShape.buffer),
                                     getNumberOfElements(targetShape.shape()),
                                     &outShape) &&
                      setInfoAndAllocateIfNeeded(&output, outShape) &&
                      reshapeGeneric(reinterpret_cast<const void*>(input.buffer),
                                     input.shape(),
                                     reinterpret_cast<void*>(output.buffer),
                                     outShape);
        } break;
        case OperationType::RESIZE_BILINEAR: {
            const size_t inCount = ins.size();
            if ((inCount != 4 && inCount != 3) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            int32_t width = getScalarData<int32_t>(mOperands[ins[1]]);
            int32_t height = getScalarData<int32_t>(mOperands[ins[2]]);
            bool data_layout = inCount == 4 ? getScalarData<bool>(mOperands[ins[3]]) : 0;

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = resizeBilinearPrepare(input_tmp.shape(), width, height, &outShape) &&
                          setInfoAndAllocateIfNeeded(&output_tmp, outShape) &&
                          resizeBilinearFloat32(reinterpret_cast<const float*>(input_tmp.buffer),
                                                input_tmp.shape(),
                                                reinterpret_cast<float*>(output_tmp.buffer),
                                                outShape);
            }

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::DEPTH_TO_SPACE: {
            const size_t inCount = ins.size();
            if ((inCount != 3 && inCount != 2) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            int32_t blockSize = getScalarData<int32_t>(mOperands[ins[1]]);
            bool data_layout = inCount == 3 ? getScalarData<bool>(mOperands[ins[2]]) : false;

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            success = depthToSpacePrepare(input_tmp.shape(), blockSize, &outShape) &&
                      setInfoAndAllocateIfNeeded(&output_tmp, outShape) &&
                      depthToSpaceGeneric(input_tmp.buffer, input_tmp.shape(), blockSize,
                                          output_tmp.buffer, outShape);

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::SPACE_TO_DEPTH: {
            const size_t inCount = ins.size();
            if ((inCount != 3 && inCount != 2) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            int32_t blockSize = getScalarData<int32_t>(mOperands[ins[1]]);
            bool data_layout = inCount == 3 ? getScalarData<bool>(mOperands[ins[2]]) : false;

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            success = spaceToDepthPrepare(input_tmp.shape(), blockSize, &outShape) &&
                      setInfoAndAllocateIfNeeded(&output_tmp, outShape) &&
                      spaceToDepthGeneric(input_tmp.buffer, input_tmp.shape(), blockSize,
                                          output_tmp.buffer, outShape);

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::EMBEDDING_LOOKUP: {
            const RunTimeOperandInfo &values =
                mOperands[ins[EmbeddingLookup::kValueTensor]];
            const RunTimeOperandInfo &lookups =
                mOperands[ins[EmbeddingLookup::kLookupTensor]];
            RunTimeOperandInfo &output =
                mOperands[outs[EmbeddingLookup::kOutputTensor]];

            Shape outputShape;
            EmbeddingLookup lookup(operation, mOperands);

            success = embeddingLookupPrepare(values.shape(), lookups.shape(), &outputShape) &&
                setInfoAndAllocateIfNeeded(&output, outputShape) &&
                lookup.Eval();
        } break;
        case OperationType::HASHTABLE_LOOKUP: {
            const RunTimeOperandInfo &lookups =
                mOperands[ins[HashtableLookup::kLookupTensor]];
            const RunTimeOperandInfo &keys =
                mOperands[ins[HashtableLookup::kKeyTensor]];
            const RunTimeOperandInfo &values =
                mOperands[ins[HashtableLookup::kValueTensor]];

            RunTimeOperandInfo &output =
                mOperands[outs[HashtableLookup::kOutputTensor]];
            RunTimeOperandInfo &hits =
                mOperands[outs[HashtableLookup::kHitsTensor]];

            Shape outputShape, hitShape;
            HashtableLookup lookup(operation, mOperands);

            success = hashtableLookupPrepare(lookups.shape(), keys.shape(), values.shape(),
                                             &outputShape, &hitShape) &&
                setInfoAndAllocateIfNeeded(&output, outputShape) &&
                setInfoAndAllocateIfNeeded(&hits, hitShape) &&
                lookup.Eval();
        } break;
        case OperationType::LSH_PROJECTION: {
            RunTimeOperandInfo &output =
                mOperands[outs[LSHProjection::kOutputTensor]];

            Shape outputShape;
            LSHProjection lsh(operation, mOperands);

            success = LSHProjection::Prepare(operation, mOperands,
                                             &outputShape) &&
                setInfoAndAllocateIfNeeded(&output, outputShape) &&
                lsh.Eval();
        } break;
        case OperationType::LSTM: {
            RunTimeOperandInfo &scratch =
                mOperands[outs[LSTMCell::kScratchBufferTensor]];
            RunTimeOperandInfo &outputStateOut =
                mOperands[outs[LSTMCell::kOutputStateOutTensor]];
            RunTimeOperandInfo &cellStateOut =
                mOperands[outs[LSTMCell::kCellStateOutTensor]];
            RunTimeOperandInfo &output =
                mOperands[outs[LSTMCell::kOutputTensor]];

            Shape scratchShape, outputStateShape, cellStateShape, outputShape;
            LSTMCell lstm_cell(operation, mOperands);

            success = LSTMCell::Prepare(operation, mOperands,
                                        &scratchShape, &outputStateShape,
                                        &cellStateShape, &outputShape) &&
                setInfoAndAllocateIfNeeded(&scratch, scratchShape) &&
                setInfoAndAllocateIfNeeded(&outputStateOut, outputStateShape) &&
                setInfoAndAllocateIfNeeded(&cellStateOut, cellStateShape) &&
                setInfoAndAllocateIfNeeded(&output, outputShape) &&
                lstm_cell.Eval();
        } break;
        case OperationType::RANDOM_MULTINOMIAL: {
            const RunTimeOperandInfo& lookups = mOperands[ins[HashtableLookup::kLookupTensor]];
            const RunTimeOperandInfo& keys = mOperands[ins[HashtableLookup::kKeyTensor]];
            const RunTimeOperandInfo& values = mOperands[ins[HashtableLookup::kValueTensor]];
            RunTimeOperandInfo& output = mOperands[outs[Multinomial::kOutputTensor]];

            Shape outputShape;
            Multinomial multinomial(operation, mOperands);

            success = Multinomial::Prepare(operation, mOperands, &outputShape) &&
                      setInfoAndAllocateIfNeeded(&output, outputShape) && multinomial.Eval();
        } break;
        case OperationType::RNN: {
            RunTimeOperandInfo &hiddenStateOut =
                mOperands[outs[RNN::kHiddenStateOutTensor]];
            RunTimeOperandInfo &output =
                mOperands[outs[RNN::kOutputTensor]];

            Shape hiddenStateShape, outputShape;
            RNN rnn_cell(operation, mOperands);

            success = RNN::Prepare(operation, mOperands,
                                   &hiddenStateShape, &outputShape) &&
                setInfoAndAllocateIfNeeded(&hiddenStateOut, hiddenStateShape) &&
                setInfoAndAllocateIfNeeded(&output, outputShape) &&
                rnn_cell.Eval();
        } break;
        case OperationType::SVDF: {
            RunTimeOperandInfo &stateOut =
                mOperands[outs[SVDF::kStateOutTensor]];
            RunTimeOperandInfo &output =
                mOperands[outs[SVDF::kOutputTensor]];

            Shape stateShape, outputShape;
            SVDF svdf(operation, mOperands);

            success = SVDF::Prepare(operation, mOperands,
                                    &stateShape, &outputShape) &&
                setInfoAndAllocateIfNeeded(&stateOut, stateShape) &&
                setInfoAndAllocateIfNeeded(&output, outputShape) &&
                svdf.Eval();
        } break;
        case OperationType::BATCH_TO_SPACE_ND: {
            const size_t inCount = ins.size();
            if ((inCount != 3 && inCount != 2) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& blockSize = mOperands[ins[1]];
            bool data_layout = inCount == 3 ? getScalarData<bool>(mOperands[ins[2]]) : false;

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            success = batchToSpacePrepare(input_tmp.shape(),
                                          reinterpret_cast<const int32_t*>(blockSize.buffer),
                                          blockSize.shape(), &outShape) &&
                      setInfoAndAllocateIfNeeded(&output_tmp, outShape) &&
                      batchToSpaceGeneric(input_tmp.buffer, input_tmp.shape(),
                                          reinterpret_cast<const int32_t*>(blockSize.buffer),
                                          output_tmp.buffer, outShape);

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::SPACE_TO_BATCH_ND: {
            const size_t inCount = ins.size();
            if ((inCount != 4 && inCount != 3) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& blockSize = mOperands[ins[1]];
            const RunTimeOperandInfo& paddings = mOperands[ins[2]];
            bool data_layout = inCount == 4 ? getScalarData<bool>(mOperands[ins[3]]) : false;

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            success = spaceToBatchPrepare(
                              input_tmp.shape(), reinterpret_cast<const int32_t*>(blockSize.buffer),
                              blockSize.shape(), reinterpret_cast<const int32_t*>(paddings.buffer),
                              paddings.shape(), &outShape) &&
                      setInfoAndAllocateIfNeeded(&output_tmp, outShape) &&
                      spaceToBatchGeneric(input_tmp.buffer, input_tmp.shape(),
                                          reinterpret_cast<const int32_t*>(blockSize.buffer),
                                          reinterpret_cast<const int32_t*>(paddings.buffer),
                                          paddings.shape(), output_tmp.buffer, outShape);

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::PAD:
        case OperationType::PAD_V2: {
            const bool isV2 = operation.type == OperationType::PAD_V2;
            if (!allParametersPresent(isV2 ? 3 : 2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& paddings = mOperands[ins[1]];

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            if (!padPrepare(input.shape(), reinterpret_cast<const int32_t*>(paddings.buffer),
                            paddings.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&output, outShape)) {
                break;
            }
            if (input.type == OperandType::TENSOR_FLOAT32) {
                float pad_value = isV2 ? getScalarData<float>(mOperands[ins[2]]) : 0;
                success = padFloat32(reinterpret_cast<const float*>(input.buffer), input.shape(),
                                     reinterpret_cast<const int32_t*>(paddings.buffer), pad_value,
                                     reinterpret_cast<float*>(output.buffer), outShape);
            } else if (input.type == OperandType::TENSOR_QUANT8_ASYMM) {
                uint8_t pad_value = isV2 ? getScalarData<uint8_t>(mOperands[ins[2]]) : 0;
                success = padQuant8(input.buffer, input.shape(),
                                    reinterpret_cast<const int32_t*>(paddings.buffer), pad_value,
                                    output.buffer, outShape);
            }
        } break;
        case OperationType::CAST: {
            if (!allParametersPresent(1, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success = cast::prepare(input.shape(), &outShape) &&
                      setInfoAndAllocateIfNeeded(&output, outShape) &&
                      cast::eval(input.buffer, input.shape(), output.buffer, outShape);
        } break;
        case OperationType::SQUEEZE: {
            if (!allParametersPresent(2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& squeezeDims = mOperands[ins[1]];

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success = squeezePrepare(input.shape(),
                                     reinterpret_cast<const int32_t*>(squeezeDims.buffer),
                                     squeezeDims.shape(),
                                     &outShape) &&
                      setInfoAndAllocateIfNeeded(&output, outShape) &&
                      squeezeGeneric(input.buffer,
                                     input.shape(),
                                     output.buffer,
                                     outShape);
        } break;
        case OperationType::TRANSPOSE: {
            if (!allParametersPresent(2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& perms = mOperands[ins[1]];

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success = transposePrepare(input.shape(),
                                       reinterpret_cast<const int32_t*>(perms.buffer),
                                       perms.shape(),
                                       &outShape) &&
                      setInfoAndAllocateIfNeeded(&output, outShape) &&
                      transposeGeneric(input.buffer,
                                       input.shape(),
                                       reinterpret_cast<const int32_t*>(perms.buffer),
                                       perms.shape(),
                                       output.buffer,
                                       outShape);
        } break;
        case OperationType::STRIDED_SLICE: {
            if (!allParametersPresent(7, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& begins = mOperands[ins[1]];
            const RunTimeOperandInfo& ends = mOperands[ins[2]];
            const RunTimeOperandInfo& strides = mOperands[ins[3]];
            int32_t beginMask = getScalarData<int32_t>(mOperands[ins[4]]);
            int32_t endMask = getScalarData<int32_t>(mOperands[ins[5]]);
            int32_t shrinkAxisMask = getScalarData<int32_t>(mOperands[ins[6]]);

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success = stridedSlicePrepare(input.shape(),
                                          reinterpret_cast<const int32_t*>(begins.buffer),
                                          begins.shape(),
                                          reinterpret_cast<const int32_t*>(ends.buffer),
                                          ends.shape(),
                                          reinterpret_cast<const int32_t*>(strides.buffer),
                                          strides.shape(),
                                          beginMask, endMask, shrinkAxisMask,
                                          &outShape) &&
                      setInfoAndAllocateIfNeeded(&output, outShape) &&
                      stridedSliceGeneric(input.buffer,
                                          input.shape(),
                                          reinterpret_cast<const int32_t*>(begins.buffer),
                                          reinterpret_cast<const int32_t*>(ends.buffer),
                                          reinterpret_cast<const int32_t*>(strides.buffer),
                                          beginMask, endMask, shrinkAxisMask,
                                          output.buffer,
                                          outShape);
        } break;
        case OperationType::DIV: {
            if (!allParametersPresent(3, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& in1 = mOperands[ins[0]];
            const RunTimeOperandInfo& in2 = mOperands[ins[1]];
            int32_t activation = getScalarData<int32_t>(mOperands[ins[2]]);

            RunTimeOperandInfo& out = mOperands[outs[0]];
            Shape outShape = out.shape();

            if (in1.type == OperandType::TENSOR_FLOAT32) {
                success = addMulPrepare(in1.shape(), in2.shape(), &outShape) &&
                          setInfoAndAllocateIfNeeded(&out, outShape) &&
                          divFloat32(reinterpret_cast<const float*>(in1.buffer),
                                     in1.shape(),
                                     reinterpret_cast<const float*>(in2.buffer),
                                     in2.shape(),
                                     activation,
                                     reinterpret_cast<float*>(out.buffer),
                                     outShape);
            }
        } break;
        case OperationType::SUB: {
            if (!allParametersPresent(3, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& in1 = mOperands[ins[0]];
            const RunTimeOperandInfo& in2 = mOperands[ins[1]];
            int32_t activation = getScalarData<int32_t>(mOperands[ins[2]]);

            RunTimeOperandInfo& out = mOperands[outs[0]];
            Shape outShape = out.shape();

            if (!addMulPrepare(in1.shape(), in2.shape(), &outShape) ||
                !setInfoAndAllocateIfNeeded(&out, outShape)) {
                break;
            }
            if (in1.type == OperandType::TENSOR_FLOAT32) {
                success = subFloat32(reinterpret_cast<const float*>(in1.buffer), in1.shape(),
                                     reinterpret_cast<const float*>(in2.buffer), in2.shape(),
                                     activation, reinterpret_cast<float*>(out.buffer), outShape);
            } else if (in1.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = subQuant8(reinterpret_cast<const uint8_t*>(in1.buffer), in1.shape(),
                                    reinterpret_cast<const uint8_t*>(in2.buffer), in2.shape(),
                                    activation, reinterpret_cast<uint8_t*>(out.buffer), outShape);
            }
        } break;
        case OperationType::MEAN: {
            if (!allParametersPresent(3, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& axis = mOperands[ins[1]];
            int32_t keepDims = getScalarData<int32_t>(mOperands[ins[2]]);

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success = meanPrepare(input.shape(),
                                  reinterpret_cast<const int32_t*>(axis.buffer),
                                  axis.shape(),
                                  keepDims > 0,
                                  &outShape) &&
                      setInfoAndAllocateIfNeeded(&output, outShape) &&
                      meanGeneric(input.buffer,
                                  input.shape(),
                                  reinterpret_cast<const int32_t*>(axis.buffer),
                                  axis.shape(),
                                  keepDims > 0,
                                  output.buffer,
                                  outShape);
        } break;
        case OperationType::ARGMAX:
        case OperationType::ARGMIN: {
            if (!allParametersPresent(2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            int32_t axis = getScalarData<int32_t>(mOperands[ins[1]]);

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            const bool isArgMin = operation.type == OperationType::ARGMIN;
            success = argMinMaxPrepare(input.shape(), axis, &outShape) &&
                    setInfoAndAllocateIfNeeded(&output, outShape) &&
                    argMinMaxGeneric(input.buffer, input.shape(),
                                     axis, isArgMin,
                                     output.buffer, outShape);
        } break;
        case OperationType::GATHER: {
            if (!allParametersPresent(3, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            int32_t axis = getScalarData<int32_t>(mOperands[ins[1]]);
            const RunTimeOperandInfo& indices = mOperands[ins[2]];

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success = gather::prepare(input.shape(), axis, indices.shape(), &outShape) &&
                      setInfoAndAllocateIfNeeded(&output, outShape) &&
                      gather::compute(input.buffer, input.shape(), axis,
                                      reinterpret_cast<const int32_t*>(indices.buffer),
                                      indices.shape(), output.buffer, outShape);
        } break;
        case OperationType::EXPAND_DIMS: {
            if (!allParametersPresent(2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            int32_t axis = getScalarData<int32_t>(mOperands[ins[1]]);

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success = expand_dims::prepare(input.shape(), axis, &outShape) &&
                      setInfoAndAllocateIfNeeded(&output, outShape) &&
                      expand_dims::eval(input.buffer, input.shape(), axis, output.buffer, outShape);
        } break;
        case OperationType::SPLIT: {
            if (ins.size() != 3) {
                LOG(ERROR) << "Wrong input count";
                return ANEURALNETWORKS_BAD_DATA;
            }

            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const int32_t axis = getScalarData<int32_t>(mOperands[ins[1]]);
            const int32_t numOutputs = getScalarData<int32_t>(mOperands[ins[2]]);

            if (numOutputs != outs.size()) {
                return ANEURALNETWORKS_BAD_DATA;
            }

            std::vector<Shape> outputShapes(numOutputs);
            for (int i = 0; i < numOutputs; ++i) {
                outputShapes[i] = mOperands[outs[i]].shape();
            }

            success = splitPrepare(input.shape(), axis, numOutputs, &outputShapes);
            for (int i = 0; i < numOutputs; ++i) {
                success = success &&
                          setInfoAndAllocateIfNeeded(&(mOperands[outs[i]]), outputShapes[i]);
            }
            switch (input.type) {
                case OperandType::TENSOR_FLOAT32: {
                    std::vector<float*> outputDataPtrs(numOutputs);
                    for (int i = 0; i < numOutputs; ++i) {
                        outputDataPtrs[i] = reinterpret_cast<float*>(mOperands[outs[i]].buffer);
                    }
                    success = success &&
                              splitFloat32(reinterpret_cast<const float*>(input.buffer),
                                           input.shape(), axis, &outputDataPtrs, outputShapes);
                } break;
                case OperandType::TENSOR_INT32: {
                    std::vector<int32_t*> outputDataPtrs(numOutputs);
                    for (int i = 0; i < numOutputs; ++i) {
                        outputDataPtrs[i] = reinterpret_cast<int32_t*>(mOperands[outs[i]].buffer);
                    }
                    success = success &&
                              splitInt32(reinterpret_cast<const int32_t*>(input.buffer),
                                         input.shape(), axis, &outputDataPtrs, outputShapes);
                } break;
                case OperandType::TENSOR_QUANT8_ASYMM: {
                    std::vector<uint8_t*> outputDataPtrs(numOutputs);
                    for (int i = 0; i < numOutputs; ++i) {
                        outputDataPtrs[i] = reinterpret_cast<uint8_t*>(mOperands[outs[i]].buffer);
                    }
                    success = success &&
                              splitQuant8(reinterpret_cast<const uint8_t*>(input.buffer),
                                          input.shape(), axis, &outputDataPtrs, outputShapes);
                } break;
                default: { return ANEURALNETWORKS_BAD_DATA; }
            }
        } break;
        case OperationType::ROI_ALIGN: {
            if (!allParametersPresent(6, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& roi = mOperands[ins[1]];
            const RunTimeOperandInfo& outputShape = mOperands[ins[2]];
            const float spatialScale = getScalarData<float>(mOperands[ins[3]]);
            const int32_t samplingRatio = getScalarData<int32_t>(mOperands[ins[4]]);
            const bool data_layout = getScalarData<bool>(mOperands[ins[5]]);

            RunTimeOperandInfo& out = mOperands[outs[0]];
            Shape outShape = out.shape();

            RunTimeOperandInfo input_tmp, out_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, out_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            out_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            out_tmp.buffer = data_layout ? nullptr : out.buffer;

            if (!roiAlignPrepare(input_tmp.shape(), reinterpret_cast<const float*>(roi.buffer),
                                 roi.shape(), reinterpret_cast<const int32_t*>(outputShape.buffer),
                                 outputShape.shape(), spatialScale, &outShape) ||
                !setInfoAndAllocateIfNeeded(&out_tmp, outShape)) {
                success = false;
                break;
            }

            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = roiAlignFloat32(
                        reinterpret_cast<const float*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const float*>(roi.buffer), roi.shape(), spatialScale,
                        samplingRatio, reinterpret_cast<float*>(out_tmp.buffer), outShape);
            } else if (input_tmp.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = roiAlignQuant8(
                        reinterpret_cast<const uint8_t*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const float*>(roi.buffer), roi.shape(), spatialScale,
                        samplingRatio, reinterpret_cast<uint8_t*>(out_tmp.buffer), outShape);
            }

            if (data_layout) {
                out_tmp_guard.reset(out_tmp.buffer);
            }
            if (!success || !convertFromNhwc(out, out_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::HEATMAP_MAX_KEYPOINT: {
            if (!allParametersPresent(3, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& boxes = mOperands[ins[1]];
            const bool data_layout = getScalarData<bool>(mOperands[ins[2]]);

            RunTimeOperandInfo& out = mOperands[outs[0]];
            Shape outShape = out.shape();

            RunTimeOperandInfo input_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }

            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = heatmapMaxKeypointPrepare(input_tmp.shape(),
                                                    reinterpret_cast<const float*>(boxes.buffer),
                                                    boxes.shape(), &outShape) &&
                          setInfoAndAllocateIfNeeded(&out, outShape) &&
                          heatmapMaxKeypoint(
                                  reinterpret_cast<const float*>(input_tmp.buffer),
                                  input_tmp.shape(), reinterpret_cast<const float*>(boxes.buffer),
                                  boxes.shape(), reinterpret_cast<float*>(out.buffer), outShape);
            }
        } break;
        case OperationType::MAXIMUM:
        case OperationType::MINIMUM: {
            if (!allParametersPresent(2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& in1 = mOperands[ins[0]];
            const RunTimeOperandInfo& in2 = mOperands[ins[1]];

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outputShape = output.shape();

            const bool isMinimum = operation.type == OperationType::MINIMUM;
            success = maximum_minimum::prepare(in1.shape(), in2.shape(), &outputShape) &&
                      setInfoAndAllocateIfNeeded(&output, outputShape) &&
                      maximum_minimum::eval(in1.buffer, in1.shape(), in2.buffer, in2.shape(),
                                            isMinimum, output.buffer, outputShape);
        } break;
        case OperationType::GROUPED_CONV_2D: {
            const size_t inCount = ins.size();
            if ((inCount != 12 && inCount != 9) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& filter = mOperands[ins[1]];
            const RunTimeOperandInfo& bias = mOperands[ins[2]];

            int32_t padding_left, padding_right;
            int32_t padding_top, padding_bottom;
            int32_t padding_implicit = 0;
            int32_t stride_width, stride_height;
            int32_t numGroups;
            int32_t activation;
            bool data_layout = false;

            if (inCount == 12) {
                padding_left = getScalarData<int32_t>(mOperands[ins[3]]);
                padding_right = getScalarData<int32_t>(mOperands[ins[4]]);
                padding_top = getScalarData<int32_t>(mOperands[ins[5]]);
                padding_bottom = getScalarData<int32_t>(mOperands[ins[6]]);
                stride_width = getScalarData<int32_t>(mOperands[ins[7]]);
                stride_height = getScalarData<int32_t>(mOperands[ins[8]]);
                numGroups = getScalarData<int32_t>(mOperands[ins[9]]);
                activation = getScalarData<int32_t>(mOperands[ins[10]]);
                data_layout = getScalarData<bool>(mOperands[ins[11]]);
            } else {
                padding_implicit = getScalarData<int32_t>(mOperands[ins[3]]);
                stride_width = getScalarData<int32_t>(mOperands[ins[4]]);
                stride_height = getScalarData<int32_t>(mOperands[ins[5]]);
                numGroups = getScalarData<int32_t>(mOperands[ins[6]]);
                activation = getScalarData<int32_t>(mOperands[ins[7]]);
                data_layout = getScalarData<bool>(mOperands[ins[8]]);
            }

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            if (inCount == 9) {
                Shape inputShape = input_tmp.shape();
                Shape filterShape = filter.shape();
                int32_t input_width = getSizeOfDimension(inputShape, 2);
                int32_t input_height = getSizeOfDimension(inputShape, 1);
                int32_t filter_width = getSizeOfDimension(filterShape, 2);
                int32_t filter_height = getSizeOfDimension(filterShape, 1);
                calculateExplicitPadding(input_width, stride_width, filter_width, padding_implicit,
                                         &padding_left, &padding_right);
                calculateExplicitPadding(input_height, stride_height, filter_height,
                                         padding_implicit, &padding_top, &padding_bottom);
            }

            if (!groupedConvPrepare(input_tmp.shape(), filter.shape(), bias.shape(), padding_left,
                                    padding_right, padding_top, padding_bottom, stride_width,
                                    stride_height, numGroups, &outShape) ||
                !setInfoAndAllocateIfNeeded(&output_tmp, outShape)) {
                success = false;
                break;
            }

            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = groupedConvFloat32(
                        reinterpret_cast<const float*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const float*>(filter.buffer), filter.shape(),
                        reinterpret_cast<const float*>(bias.buffer), bias.shape(), padding_left,
                        padding_right, padding_top, padding_bottom, stride_width, stride_height,
                        numGroups, activation, reinterpret_cast<float*>(output_tmp.buffer),
                        outShape);
            } else if (input_tmp.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = groupedConvQuant8(
                        reinterpret_cast<const uint8_t*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const uint8_t*>(filter.buffer), filter.shape(),
                        reinterpret_cast<const int32_t*>(bias.buffer), bias.shape(), padding_left,
                        padding_right, padding_top, padding_bottom, stride_width, stride_height,
                        numGroups, activation, reinterpret_cast<uint8_t*>(output_tmp.buffer),
                        outShape);
            }

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::CHANNEL_SHUFFLE: {
            if (!allParametersPresent(3, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const int32_t numGroups = getScalarData<int32_t>(mOperands[ins[1]]);
            const int32_t axis = getScalarData<int32_t>(mOperands[ins[2]]);

            RunTimeOperandInfo& out = mOperands[outs[0]];
            Shape outShape = out.shape();

            success = channelShufflePrepare(input.shape(), numGroups, axis, &outShape) &&
                      setInfoAndAllocateIfNeeded(&out, outShape) &&
                      channelShuffleGeneric(input.buffer, input.shape(), numGroups, axis,
                                            out.buffer, outShape);
        } break;
        case OperationType::TRANSPOSE_CONV_2D: {
            const size_t inCount = ins.size();
            if ((inCount != 11 && inCount != 9) || !allParametersPresent(inCount, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& filter = mOperands[ins[1]];
            const RunTimeOperandInfo& bias = mOperands[ins[2]];

            int32_t padding_left, padding_right;
            int32_t padding_top, padding_bottom;
            int32_t padding_implicit = 0;
            int32_t stride_width, stride_height;
            int32_t activation;
            bool data_layout = false;

            if (inCount == 11) {
                padding_left = getScalarData<int32_t>(mOperands[ins[3]]);
                padding_right = getScalarData<int32_t>(mOperands[ins[4]]);
                padding_top = getScalarData<int32_t>(mOperands[ins[5]]);
                padding_bottom = getScalarData<int32_t>(mOperands[ins[6]]);
                stride_width = getScalarData<int32_t>(mOperands[ins[7]]);
                stride_height = getScalarData<int32_t>(mOperands[ins[8]]);
                activation = getScalarData<int32_t>(mOperands[ins[9]]);
                data_layout = getScalarData<bool>(mOperands[ins[10]]);
            } else {
                padding_implicit = getScalarData<int32_t>(mOperands[ins[4]]);
                stride_width = getScalarData<int32_t>(mOperands[ins[5]]);
                stride_height = getScalarData<int32_t>(mOperands[ins[6]]);
                activation = getScalarData<int32_t>(mOperands[ins[7]]);
                data_layout = getScalarData<bool>(mOperands[ins[8]]);
            }

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            RunTimeOperandInfo input_tmp, output_tmp;
            std::unique_ptr<uint8_t[]> input_tmp_guard, output_tmp_guard;
            if (!convertToNhwc(input_tmp, input, input_tmp_guard, data_layout)) {
                success = false;
                break;
            }
            output_tmp.lifetime = OperandLifeTime::TEMPORARY_VARIABLE;
            output_tmp.buffer = data_layout ? nullptr : output.buffer;

            if (inCount == 9) {
                const RunTimeOperandInfo& outShape = mOperands[ins[3]];
                const int32_t* outShapeData = reinterpret_cast<const int32_t*>(outShape.buffer);
                NN_OPS_CHECK(getNumberOfDimensions(outShape.shape()) == 1);
                NN_OPS_CHECK(getSizeOfDimension(outShape.shape(), 0) == 4);
                Shape filterShape = filter.shape();
                int32_t width = data_layout ? outShapeData[3] : outShapeData[2];
                int32_t height = data_layout ? outShapeData[2] : outShapeData[1];
                int32_t filter_width = getSizeOfDimension(filterShape, 2);
                int32_t filter_height = getSizeOfDimension(filterShape, 1);
                calculateExplicitPadding(width, stride_width, filter_width, padding_implicit,
                                         &padding_left, &padding_right);
                calculateExplicitPadding(height, stride_height, filter_height, padding_implicit,
                                         &padding_top, &padding_bottom);
            }

            if (!transposeConvPrepare(input_tmp.shape(), filter.shape(), bias.shape(), padding_left,
                                      padding_right, padding_top, padding_bottom, stride_width,
                                      stride_height, &outShape) ||
                !setInfoAndAllocateIfNeeded(&output_tmp, outShape)) {
                success = false;
                break;
            }

            if (input_tmp.type == OperandType::TENSOR_FLOAT32) {
                success = transposeConvFloat32(
                        reinterpret_cast<const float*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const float*>(filter.buffer), filter.shape(),
                        reinterpret_cast<const float*>(bias.buffer), bias.shape(), padding_left,
                        padding_right, padding_top, padding_bottom, stride_width, stride_height,
                        activation, reinterpret_cast<float*>(output_tmp.buffer), outShape);
            } else if (input_tmp.type == OperandType::TENSOR_QUANT8_ASYMM) {
                success = transposeConvQuant8(
                        reinterpret_cast<const uint8_t*>(input_tmp.buffer), input_tmp.shape(),
                        reinterpret_cast<const uint8_t*>(filter.buffer), filter.shape(),
                        reinterpret_cast<const int32_t*>(bias.buffer), bias.shape(), padding_left,
                        padding_right, padding_top, padding_bottom, stride_width, stride_height,
                        activation, reinterpret_cast<uint8_t*>(output_tmp.buffer), outShape);
            }

            if (data_layout) {
                output_tmp_guard.reset(output_tmp.buffer);
            }
            if (!success || !convertFromNhwc(output, output_tmp, data_layout)) {
                success = false;
                break;
            }
        } break;
        case OperationType::PRELU: {
            if (!allParametersPresent(2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& alpha = mOperands[ins[1]];

            RunTimeOperandInfo& out = mOperands[outs[0]];
            Shape outShape = out.shape();

            success = addMulPrepare(input.shape(), alpha.shape(), &outShape) &&
                      setInfoAndAllocateIfNeeded(&out, outShape) &&
                      pReluGeneric(input.buffer, input.shape(), alpha.buffer, alpha.shape(),
                                   out.buffer, outShape);
        } break;
        case OperationType::TILE: {
            if (!allParametersPresent(2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            const RunTimeOperandInfo& multiples = mOperands[ins[1]];

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success =
                    tile::prepare(input.shape(), reinterpret_cast<const int32_t*>(multiples.buffer),
                                  multiples.shape(), &outShape) &&
                    setInfoAndAllocateIfNeeded(&output, outShape) &&
                    tile::eval(input.buffer, input.shape(),
                               reinterpret_cast<const int32_t*>(multiples.buffer), output.buffer,
                               outShape);
        } break;
        case OperationType::QUANTIZED_16BIT_LSTM: {
            if (!allParametersPresent(5, 5)) {
                return ANEURALNETWORKS_BAD_DATA;
            }

            RunTimeOperandInfo& concatTemp = mOperands[outs[QuantizedLSTMCell::kConcatTempTensor]];
            RunTimeOperandInfo& activationTemp =
                    mOperands[outs[QuantizedLSTMCell::kActivationTempTensor]];
            RunTimeOperandInfo& outputStateOut =
                    mOperands[outs[QuantizedLSTMCell::kOutputStateOutTensor]];
            RunTimeOperandInfo& cellStateOut =
                    mOperands[outs[QuantizedLSTMCell::kCellStateOutTensor]];
            RunTimeOperandInfo& output = mOperands[outs[QuantizedLSTMCell::kOutputTensor]];

            Shape concatTempShape, activationTempShape, outputStateOutShape, cellStateOutShape,
                    outputShape;
            QuantizedLSTMCell quantizedLSTMCell(operation, mOperands);

            success = QuantizedLSTMCell::prepare(operation, mOperands, &concatTempShape,
                                                 &activationTempShape, &outputStateOutShape,
                                                 &cellStateOutShape, &outputShape) &&
                      setInfoAndAllocateIfNeeded(&concatTemp, concatTempShape) &&
                      setInfoAndAllocateIfNeeded(&activationTemp, activationTempShape) &&
                      setInfoAndAllocateIfNeeded(&outputStateOut, outputStateOutShape) &&
                      setInfoAndAllocateIfNeeded(&cellStateOut, cellStateOutShape) &&
                      setInfoAndAllocateIfNeeded(&output, outputShape) && quantizedLSTMCell.eval();
        } break;
        case OperationType::AXIS_ALIGNED_BBOX_TRANSFORM: {
            if (!allParametersPresent(5, 2)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& roi = mOperands[ins[0]];
            const RunTimeOperandInfo& bboxDeltas = mOperands[ins[1]];
            const RunTimeOperandInfo& imageInfo = mOperands[ins[2]];
            const RunTimeOperandInfo& weights = mOperands[ins[3]];
            const bool applyScale = getScalarData<bool>(mOperands[ins[4]]);

            RunTimeOperandInfo& out = mOperands[outs[0]];
            RunTimeOperandInfo& batchSplit = mOperands[outs[1]];
            Shape outShape = out.shape();
            Shape batchSplitShape = batchSplit.shape();

            if (roi.type == OperandType::TENSOR_FLOAT32) {
                success =
                        axisAlignedBBoxTransformPrepare(reinterpret_cast<const float*>(roi.buffer),
                                                        roi.shape(), bboxDeltas.shape(),
                                                        imageInfo.shape(), weights.shape(),
                                                        &outShape, &batchSplitShape) &&
                        setInfoAndAllocateIfNeeded(&out, outShape) &&
                        setInfoAndAllocateIfNeeded(&batchSplit, batchSplitShape) &&
                        axisAlignedBBoxTransform(
                                reinterpret_cast<const float*>(roi.buffer), roi.shape(),
                                reinterpret_cast<const float*>(bboxDeltas.buffer),
                                bboxDeltas.shape(),
                                reinterpret_cast<const float*>(imageInfo.buffer), imageInfo.shape(),
                                reinterpret_cast<const float*>(weights.buffer), weights.shape(),
                                applyScale, reinterpret_cast<float*>(out.buffer), outShape,
                                reinterpret_cast<int32_t*>(batchSplit.buffer), batchSplitShape);
            }
        } break;
        case OperationType::ROTATED_BBOX_TRANSFORM: {
            if (!allParametersPresent(9, 2)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& roi = mOperands[ins[0]];
            const RunTimeOperandInfo& bboxDeltas = mOperands[ins[1]];
            const RunTimeOperandInfo& imageInfo = mOperands[ins[2]];
            const RunTimeOperandInfo& weights = mOperands[ins[3]];
            const bool applyScale = getScalarData<bool>(mOperands[ins[4]]);
            const bool angleBoundOn = getScalarData<bool>(mOperands[ins[5]]);
            const int32_t angleBoundLow = getScalarData<int32_t>(mOperands[ins[6]]);
            const int32_t angleBoundHigh = getScalarData<int32_t>(mOperands[ins[7]]);
            const float clipAngleThreshold = getScalarData<float>(mOperands[ins[8]]);

            RunTimeOperandInfo& out = mOperands[outs[0]];
            RunTimeOperandInfo& batchSplit = mOperands[outs[1]];
            Shape outShape = out.shape();
            Shape batchSplitShape = batchSplit.shape();

            if (roi.type == OperandType::TENSOR_FLOAT32) {
                success =
                        rotatedBBoxTransformPrepare(reinterpret_cast<const float*>(roi.buffer),
                                                    roi.shape(), bboxDeltas.shape(),
                                                    imageInfo.shape(), weights.shape(),
                                                    angleBoundOn, angleBoundLow, angleBoundHigh,
                                                    &outShape, &batchSplitShape) &&
                        setInfoAndAllocateIfNeeded(&out, outShape) &&
                        setInfoAndAllocateIfNeeded(&batchSplit, batchSplitShape) &&
                        rotatedBBoxTransform(
                                reinterpret_cast<const float*>(roi.buffer), roi.shape(),
                                reinterpret_cast<const float*>(bboxDeltas.buffer),
                                bboxDeltas.shape(),
                                reinterpret_cast<const float*>(imageInfo.buffer), imageInfo.shape(),
                                reinterpret_cast<const float*>(weights.buffer), weights.shape(),
                                applyScale, angleBoundOn, angleBoundLow, angleBoundHigh,
                                clipAngleThreshold, reinterpret_cast<float*>(out.buffer), outShape,
                                reinterpret_cast<int32_t*>(batchSplit.buffer), batchSplitShape);
            }
        } break;
        case OperationType::POW: {
            if (!allParametersPresent(2, 1)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& base = mOperands[ins[0]];
            const RunTimeOperandInfo& exponent = mOperands[ins[1]];

            RunTimeOperandInfo& output = mOperands[outs[0]];
            Shape outShape = output.shape();

            success = pow::prepare(base.shape(), exponent.shape(), &outShape) &&
                      setInfoAndAllocateIfNeeded(&output, outShape) &&
                      pow::eval(base.buffer, base.shape(), exponent.buffer, exponent.shape(),
                                output.buffer, outShape);
        } break;
        case OperationType::TOPK_V2: {
            if (!allParametersPresent(2, 2)) {
                return ANEURALNETWORKS_BAD_DATA;
            }
            const RunTimeOperandInfo& input = mOperands[ins[0]];
            int32_t k = getScalarData<int32_t>(mOperands[ins[1]]);

            RunTimeOperandInfo& values = mOperands[outs[0]];
            Shape valuesShape = values.shape();
            RunTimeOperandInfo& indices = mOperands[outs[1]];
            Shape indicesShape = indices.shape();

            success = topk_v2::prepare(input.shape(), k, &valuesShape, &indicesShape) &&
                      setInfoAndAllocateIfNeeded(&values, valuesShape) &&
                      setInfoAndAllocateIfNeeded(&indices, indicesShape) &&
                      topk_v2::eval(input.buffer, input.shape(), k, values.buffer, valuesShape,
                                    indices.buffer, indicesShape);
        } break;
        default:
            nnAssert(false);
            break;
    }
    if (!success) {
        LOG(ERROR) << getOperationName(operation.type) << " failed.";
        return ANEURALNETWORKS_OP_FAILED;
    }

    freeNoLongerUsedOperands(ins);
    return ANEURALNETWORKS_NO_ERROR;
}

// b/109953668, disable OpenMP
#ifdef NNAPI_OPENMP
ScopedOpenmpSettings::ScopedOpenmpSettings() {
    mBlocktimeInitial = kmp_get_blocktime();
    kmp_set_blocktime(1);  // ms

#if NNAPI_LIMIT_CPU_THREADS
    // Code not yet enabled. Choosing the number of threads to be based on
    // benchmarking. See longer comment by the class declaration.
    mMaxThreadsInitial = Eigen::nbThreads();
    const int nProcs = omp_get_num_procs();
    int threads = nProcs;
    if (nProcs >= 8) {
        threads = nProcs - 4;
    } else if (nProcs >= 4) {
        threads = nProcs - 2;
    }
    Eigen::setNbThreads(threads);
#endif
}

ScopedOpenmpSettings::~ScopedOpenmpSettings() {
    kmp_set_blocktime(mBlocktimeInitial);
#if NNAPI_LIMIT_CPU_THREADS
    Eigen::setNbThreads(mMaxThreadsInitial);
#endif
}
#endif  // NNAPI_OPENMP
} // namespace nn
} // namespace android
