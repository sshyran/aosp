// Copyright 2022 The Chromium OS Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "aosp/frameworks/ml/chromeos/mojo_driver/mojom/nnapi_hal.mojom.h"

// This is declared in LegacyHalUtils.h but we can't include that here
// due to the incompatability of Android + Chrome headers.
namespace android {
namespace nn {
V1_0::PerformanceInfo lookup(
    const android::hardware::hidl_vec<V1_3::Capabilities::OperandPerformance>&
        operandPerformance,
    V1_3::OperandType type);
}
}  // namespace android

namespace mojo {

template <typename U>
struct ArrayTraits<android::hardware::hidl_vec<U>> {
  using Element = U;

  static bool IsNull(const android::hardware::hidl_vec<U>& input) {
    return false;
  }

  static size_t GetSize(const android::hardware::hidl_vec<U>& input) {
    return input.size();
  }

  static U* GetData(android::hardware::hidl_vec<U>& input) {
    return input.data();
  }

  static const U* GetData(const android::hardware::hidl_vec<U>& input) {
    return input.data();
  }

  static U& GetAt(android::hardware::hidl_vec<U>& input, size_t index) {
    return input[index];
  }

  static const U& GetAt(const android::hardware::hidl_vec<U>& input,
                        size_t index) {
    return input[index];
  }

  static bool Resize(android::hardware::hidl_vec<U>& input, size_t size) {
    input.resize(size);
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::PerformanceInfoDataView,
                    android::nn::V1_0::PerformanceInfo> {
 public:
  static float execTime(const android::nn::V1_0::PerformanceInfo& p) {
    return p.execTime;
  }
  static float powerUsage(const android::nn::V1_0::PerformanceInfo& p) {
    return p.powerUsage;
  }

  static bool Read(chromeos::nnapi::mojom::PerformanceInfoDataView data,
                   android::nn::V1_0::PerformanceInfo* out) {
    out->execTime = data.execTime();
    out->powerUsage = data.powerUsage();
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::CapabilitiesDataView,
                    android::nn::V1_3::Capabilities> {
 public:
  static android::nn::V1_0::PerformanceInfo float32Performance(
      const android::nn::V1_3::Capabilities& c) {
    return android::nn::lookup(c.operandPerformance,
                               android::nn::V1_3::OperandType::TENSOR_FLOAT32);
  }

  static android::nn::V1_0::PerformanceInfo quantized8Performance(
      const android::nn::V1_3::Capabilities& c) {
    return android::nn::lookup(
        c.operandPerformance,
        android::nn::V1_3::OperandType::TENSOR_QUANT8_ASYMM);
  }

  static android::nn::V1_0::PerformanceInfo relaxedFloat32toFloat16Performance(
      const android::nn::V1_3::Capabilities& c) {
    return c.relaxedFloat32toFloat16PerformanceTensor;
  }

  static bool Read(chromeos::nnapi::mojom::CapabilitiesDataView cap,
                   android::nn::V1_3::Capabilities* out) {
    bool result = true;

    android::nn::V1_0::PerformanceInfo float32Perf, quant8Perf,
        relaxedFloat32toFloat16Perf;
    result &= cap.ReadFloat32Performance(&float32Perf);
    result &= cap.ReadQuantized8Performance(&quant8Perf);
    result &= cap.ReadRelaxedFloat32toFloat16Performance(
        &relaxedFloat32toFloat16Perf);

    out->operandPerformance.resize(2);
    out->operandPerformance[0] = {
        .type = android::nn::V1_3::OperandType::TENSOR_FLOAT32,
        .info = float32Perf};
    out->operandPerformance[1] = {
        .type = android::nn::V1_3::OperandType::TENSOR_QUANT8_ASYMM,
        .info = quant8Perf};
    out->relaxedFloat32toFloat16PerformanceScalar = relaxedFloat32toFloat16Perf;
    out->relaxedFloat32toFloat16PerformanceTensor = relaxedFloat32toFloat16Perf;
    out->ifPerformance = relaxedFloat32toFloat16Perf;
    out->whilePerformance = relaxedFloat32toFloat16Perf;
    return result;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::ErrorStatus,
                  android::hardware::neuralnetworks::V1_0::ErrorStatus> {
  static chromeos::nnapi::mojom::ErrorStatus ToMojom(
      android::hardware::neuralnetworks::V1_0::ErrorStatus input) {
    return static_cast<chromeos::nnapi::mojom::ErrorStatus>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::ErrorStatus input,
      android::hardware::neuralnetworks::V1_0::ErrorStatus* output) {
    *output = static_cast<android::hardware::neuralnetworks::V1_0::ErrorStatus>(
        input);
    return true;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::OperationType,
                  android::hardware::neuralnetworks::V1_1::OperationType> {
  static chromeos::nnapi::mojom::OperationType ToMojom(
      android::hardware::neuralnetworks::V1_1::OperationType input) {
    return static_cast<chromeos::nnapi::mojom::OperationType>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::OperationType input,
      android::hardware::neuralnetworks::V1_1::OperationType* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_1::OperationType>(
            input);
    return true;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::OperandType,
                  android::hardware::neuralnetworks::V1_0::OperandType> {
  static chromeos::nnapi::mojom::OperandType ToMojom(
      android::hardware::neuralnetworks::V1_0::OperandType input) {
    return static_cast<chromeos::nnapi::mojom::OperandType>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::OperandType input,
      android::hardware::neuralnetworks::V1_0::OperandType* output) {
    *output = static_cast<android::hardware::neuralnetworks::V1_0::OperandType>(
        input);
    return true;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::OperandLifeTime,
                  android::hardware::neuralnetworks::V1_0::OperandLifeTime> {
  static chromeos::nnapi::mojom::OperandLifeTime ToMojom(
      android::hardware::neuralnetworks::V1_0::OperandLifeTime input) {
    return static_cast<chromeos::nnapi::mojom::OperandLifeTime>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::OperandLifeTime input,
      android::hardware::neuralnetworks::V1_0::OperandLifeTime* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_0::OperandLifeTime>(
            input);
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::OperationDataView,
                    android::nn::V1_1::Operation> {
 public:
  static android::hardware::neuralnetworks::V1_1::OperationType type(
      const android::nn::V1_1::Operation& m) {
    return m.type;
  }
  static const android::hardware::hidl_vec<uint32_t>& inputs(
      const android::nn::V1_1::Operation& m) {
    return m.inputs;
  }
  static const android::hardware::hidl_vec<uint32_t>& outputs(
      const android::nn::V1_1::Operation& m) {
    return m.outputs;
  }

  static bool Read(chromeos::nnapi::mojom::OperationDataView operation,
                   android::nn::V1_1::Operation* out) {
    bool result = true;

    EnumTraits<chromeos::nnapi::mojom::OperationType,
               android::hardware::neuralnetworks::V1_1::OperationType>::
        FromMojom(operation.type(), &out->type);
    result &= operation.ReadInputs(&out->inputs);
    result &= operation.ReadOutputs(&out->outputs);

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::OperandDataView,
                    android::nn::V1_0::Operand> {
 public:
  static const android::hardware::neuralnetworks::V1_0::OperandType& type(
      const android::nn::V1_0::Operand& m) {
    return m.type;
  }
  static const android::hardware::hidl_vec<uint32_t>& dimensions(
      const android::nn::V1_0::Operand& m) {
    return m.dimensions;
  }
  static const uint32_t& numberOfConsumers(
      const android::nn::V1_0::Operand& m) {
    return m.numberOfConsumers;
  }
  static const float& scale(const android::nn::V1_0::Operand& m) {
    return m.scale;
  }
  static const int32_t& zeroPoint(const android::nn::V1_0::Operand& m) {
    return m.zeroPoint;
  }
  static const android::hardware::neuralnetworks::V1_0::OperandLifeTime&
  lifetime(const android::nn::V1_0::Operand& m) {
    return m.lifetime;
  }
  static const android::hardware::neuralnetworks::V1_0::DataLocation& location(
      const android::nn::V1_0::Operand& m) {
    return m.location;
  }

  static bool Read(chromeos::nnapi::mojom::OperandDataView operand,
                   android::nn::V1_0::Operand* out) {
    bool result = true;

    EnumTraits<chromeos::nnapi::mojom::OperandType,
               android::hardware::neuralnetworks::V1_0::OperandType>::
        FromMojom(operand.type(), &out->type);
    result &= operand.ReadDimensions(&out->dimensions);
    out->numberOfConsumers = operand.numberOfConsumers();
    out->scale = operand.scale();
    out->zeroPoint = operand.zeroPoint();
    EnumTraits<chromeos::nnapi::mojom::OperandLifeTime,
               android::hardware::neuralnetworks::V1_0::OperandLifeTime>::
        FromMojom(operand.lifetime(), &out->lifetime);
    result &= operand.ReadLocation(&out->location);

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::ModelDataView,
                    android::nn::V1_1::Model> {
 public:
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_0::Operand>&
  operands(const android::nn::V1_1::Model& m) {
    return m.operands;
  }
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_1::Operation>&
  operations(const android::nn::V1_1::Model& m) {
    return m.operations;
  }
  static const android::hardware::hidl_vec<uint32_t>& inputIndexes(
      const android::nn::V1_1::Model& m) {
    return m.inputIndexes;
  }
  static const android::hardware::hidl_vec<uint32_t>& outputIndexes(
      const android::nn::V1_1::Model& m) {
    return m.outputIndexes;
  }
  static const android::hardware::hidl_vec<uint8_t>& operandValues(
      const android::nn::V1_1::Model& m) {
    return m.operandValues;
  }
  static const android::hardware::hidl_vec<android::hardware::hidl_memory>&
  pools(const android::nn::V1_1::Model& m) {
    return m.pools;
  }

  static bool relaxComputationFloat32toFloat16(
      const android::nn::V1_1::Model& m) {
    return m.relaxComputationFloat32toFloat16;
  }

  static bool Read(chromeos::nnapi::mojom::ModelDataView model,
                   android::nn::V1_1::Model* out) {
    bool result = true;

    result &= model.ReadOperands(&out->operands);
    result &= model.ReadOperations(&out->operations);
    result &= model.ReadInputIndexes(&out->inputIndexes);
    result &= model.ReadOutputIndexes(&out->outputIndexes);
    result &= model.ReadOperandValues(&out->operandValues);
    result &= model.ReadPools(&out->pools);
    out->relaxComputationFloat32toFloat16 =
        model.relaxComputationFloat32toFloat16();

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::HidlHandleDataView,
                    android::hardware::hidl_handle> {
 public:
  static uint32_t version(const android::hardware::hidl_handle& h) {
    return h->version;
  }
  static uint32_t numFds(const android::hardware::hidl_handle& h) {
    return h->numFds;
  }
  static uint32_t numInts(const android::hardware::hidl_handle& h) {
    return h->numInts;
  }
  static std::vector<mojo::PlatformHandle> fds(
      const android::hardware::hidl_handle& h) {
    std::vector<mojo::PlatformHandle> handles;
    for (int i = 0; i < h->numFds; i++) {
      // Need to dup the file handles otherwise they get closed when this
      // goes out of scope.
      handles.push_back(
          mojo::PlatformHandle(::base::ScopedFD(dup(h->data[i]))));
    }
    return handles;
  }
  static std::vector<int> ints(const android::hardware::hidl_handle& h) {
    std::vector<int> int_vec;
    for (int i = 0; i < h->numInts; i++) {
      int_vec.push_back(h->data[h->numFds + i]);
    }
    return int_vec;
  }

  static bool Read(chromeos::nnapi::mojom::HidlHandleDataView hidl_handle_view,
                   android::hardware::hidl_handle* out) {
    mojo::ArrayDataView<mojo::PlatformHandle> fds;
    mojo::ArrayDataView<int32_t> ints;
    hidl_handle_view.GetFdsDataView(&fds);
    hidl_handle_view.GetIntsDataView(&ints);

    native_handle_t* nativeHandle =
        native_handle_create(fds.size(), ints.size());
    for (int i = 0; i < fds.size(); i++) {
      nativeHandle->data[i] = fds.Take(i).ReleaseFD();
    }

    for (int i = 0; i < ints.size(); i++) {
      nativeHandle->data[fds.size() + i] = ints[i];
    }

    out->setTo(nativeHandle, /*shouldOwn=*/true);
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::HidlMemoryDataView,
                    android::hardware::hidl_memory> {
 public:
  static android::hardware::hidl_handle hidl_handle(
      const android::hardware::hidl_memory& m) {
    return m.handle();
  }
  static uint64_t size(const android::hardware::hidl_memory& m) {
    return m.size();
  }
  static std::string name(const android::hardware::hidl_memory& m) {
    return m.name();
  }

  static bool Read(chromeos::nnapi::mojom::HidlMemoryDataView data_view,
                   android::hardware::hidl_memory* out) {
    bool result = true;

    std::string name;
    android::hardware::hidl_handle handle;
    result &= data_view.ReadName(&name);
    result &= data_view.ReadHidlHandle(&handle);

    *out = android::hardware::hidl_memory(name, std::move(handle),
                                          data_view.size());

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::DataLocationDataView,
                    android::nn::V1_0::DataLocation> {
 public:
  static const uint32_t& poolIndex(const android::nn::V1_0::DataLocation& d) {
    return d.poolIndex;
  }
  static const uint32_t& offset(const android::nn::V1_0::DataLocation& d) {
    return d.offset;
  }
  static const uint32_t& length(const android::nn::V1_0::DataLocation& d) {
    return d.length;
  }

  static bool Read(chromeos::nnapi::mojom::DataLocationDataView data_location,
                   android::nn::V1_0::DataLocation* out) {
    bool result = true;

    out->poolIndex = data_location.poolIndex();
    out->offset = data_location.offset();
    out->length = data_location.length();

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::RequestArgumentDataView,
                    android::nn::V1_0::RequestArgument> {
 public:
  static const bool& hasNoValue(const android::nn::V1_0::RequestArgument& r) {
    return r.hasNoValue;
  }
  static const android::nn::V1_0::DataLocation& location(
      const android::nn::V1_0::RequestArgument& r) {
    return r.location;
  }
  static const android::hardware::hidl_vec<uint32_t>& dimensions(
      const android::nn::V1_0::RequestArgument& r) {
    return r.dimensions;
  }

  static bool Read(chromeos::nnapi::mojom::RequestArgumentDataView request,
                   android::nn::V1_0::RequestArgument* out) {
    bool result = true;

    out->hasNoValue = request.hasNoValue();
    result &= request.ReadLocation(&out->location);
    result &= request.ReadDimensions(&out->dimensions);

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::RequestDataView,
                    android::nn::V1_0::Request> {
 public:
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_0::RequestArgument>&
  inputs(const android::nn::V1_0::Request& r) {
    return r.inputs;
  }
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_0::RequestArgument>&
  outputs(const android::nn::V1_0::Request& r) {
    return r.outputs;
  }
  static const android::hardware::hidl_vec<android::hardware::hidl_memory>&
  pools(const android::nn::V1_0::Request& m) {
    return m.pools;
  }

  static bool Read(chromeos::nnapi::mojom::RequestDataView request,
                   android::nn::V1_0::Request* out) {
    bool result = true;

    result &= request.ReadInputs(&out->inputs);
    result &= request.ReadOutputs(&out->outputs);
    result &= request.ReadPools(&out->pools);

    return result;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::DeviceStatus,
                  android::hardware::neuralnetworks::V1_0::DeviceStatus> {
  static chromeos::nnapi::mojom::DeviceStatus ToMojom(
      android::hardware::neuralnetworks::V1_0::DeviceStatus input) {
    return static_cast<chromeos::nnapi::mojom::DeviceStatus>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::DeviceStatus input,
      android::hardware::neuralnetworks::V1_0::DeviceStatus* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_0::DeviceStatus>(
            input);
    return true;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::ExecutionPreference,
                  android::hardware::neuralnetworks::V1_1::ExecutionPreference> {
  static chromeos::nnapi::mojom::ExecutionPreference ToMojom(
      android::hardware::neuralnetworks::V1_1::ExecutionPreference input) {
    return static_cast<chromeos::nnapi::mojom::ExecutionPreference>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::ExecutionPreference input,
      android::hardware::neuralnetworks::V1_1::ExecutionPreference* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_1::ExecutionPreference>(
            input);
    return true;
  }
};

}  // namespace mojo
