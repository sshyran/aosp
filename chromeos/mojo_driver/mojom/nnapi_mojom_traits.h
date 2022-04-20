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
    // We use version value 0 indicates a nullptr native handle
    return h.getNativeHandle() ? h->version : 0;
  }
  static uint32_t numFds(const android::hardware::hidl_handle& h) {
    return h.getNativeHandle() ? h->numFds : 0;
  }
  static uint32_t numInts(const android::hardware::hidl_handle& h) {
    return h.getNativeHandle() ? h->numInts : 0;
  }
  static std::vector<mojo::PlatformHandle> fds(
      const android::hardware::hidl_handle& h) {
    std::vector<mojo::PlatformHandle> handles;
    uint32_t num_fds = h.getNativeHandle() ? h->numFds : 0;
    for (int i = 0; i < num_fds; i++) {
      // Need to dup the file handles otherwise they get closed when this
      // goes out of scope.
      handles.push_back(
          mojo::PlatformHandle(::base::ScopedFD(dup(h->data[i]))));
    }
    return handles;
  }
  static std::vector<int> ints(const android::hardware::hidl_handle& h) {
    std::vector<int> int_vec;
    uint32_t num_ints = h.getNativeHandle() ? h->numInts : 0;
    for (int i = 0; i < num_ints; i++) {
      int_vec.push_back(h->data[h->numFds + i]);
    }
    return int_vec;
  }

  static bool Read(chromeos::nnapi::mojom::HidlHandleDataView hidl_handle_view,
                   android::hardware::hidl_handle* out) {
    if (hidl_handle_view.version() == 0) {
      // We use version value 0 indicate a nullptr native handle
      return true;
    }
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

template <>
struct EnumTraits<chromeos::nnapi::mojom::DeviceType,
                  android::hardware::neuralnetworks::V1_2::DeviceType> {
  static chromeos::nnapi::mojom::DeviceType ToMojom(
      android::hardware::neuralnetworks::V1_2::DeviceType input) {
    return static_cast<chromeos::nnapi::mojom::DeviceType>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::DeviceType input,
      android::hardware::neuralnetworks::V1_2::DeviceType* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_2::DeviceType>(input);
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::OperandTypeInformationDataView,
                    android::nn::V1_2::Extension::OperandTypeInformation> {
 public:
  static uint16_t type(
      const android::nn::V1_2::Extension::OperandTypeInformation& obj) {
    return obj.type;
  }

  static bool isTensor(
      const android::nn::V1_2::Extension::OperandTypeInformation& obj) {
    return obj.isTensor;
  }

  static uint32_t byteSize(
      const android::nn::V1_2::Extension::OperandTypeInformation& obj) {
    return obj.byteSize;
  }

  static bool Read(chromeos::nnapi::mojom::OperandTypeInformationDataView data,
                   android::nn::V1_2::Extension::OperandTypeInformation* out) {
    out->type = data.type();
    out->isTensor = data.isTensor();
    out->byteSize = data.byteSize();
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::ExtensionDataView,
                    android::nn::V1_2::Extension> {
 public:
  static std::string name(const android::nn::V1_2::Extension& obj) {
    return obj.name;
  }

  static const android::hardware::hidl_vec<
      android::nn::V1_2::Extension::OperandTypeInformation>&
  operandTypes(const android::nn::V1_2::Extension& obj) {
    return obj.operandTypes;
  }

  static bool Read(chromeos::nnapi::mojom::ExtensionDataView data,
                   android::nn::V1_2::Extension* out) {
    bool result = true;
    result &= data.ReadName(&out->name);
    result &= data.ReadOperandTypes(&out->operandTypes);
    return result;
  }
};

template <>
struct StringTraits<android::hardware::hidl_string> {
  static bool IsNull(android::hardware::hidl_string input) { return false; }

  static void SetToNull(android::hardware::hidl_string* output) {
    // Convert null to an "empty" android::hardware::hidl_string.
    *output = android::hardware::hidl_string();
  }

  static android::hardware::hidl_string GetUTF8(
      android::hardware::hidl_string input) {
    return input;
  }

  static bool Read(StringDataView input,
                   android::hardware::hidl_string* output) {
    *output = android::hardware::hidl_string(input.storage(), input.size());
    return true;
  }

  static bool IsValidUTF8(const android::hardware::hidl_string& value) {
    return true;
  }
};

// V1_2

template <>
struct StructTraits<chromeos::nnapi::mojom::OutputShapeDataView,
                    android::nn::V1_2::OutputShape> {
 public:
  static const android::hardware::hidl_vec<uint32_t>& dimensions(
      const android::nn::V1_2::OutputShape& obj) {
    return obj.dimensions;
  }
  static bool isSufficient(const android::nn::V1_2::OutputShape& obj) {
    return obj.isSufficient;
  }

  static bool Read(chromeos::nnapi::mojom::OutputShapeDataView data,
                   android::nn::V1_2::OutputShape* out) {
    bool result = true;
    result &= data.ReadDimensions(&out->dimensions);
    out->isSufficient = data.isSufficient();
    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::TimingDataView,
                    android::nn::V1_2::Timing> {
 public:
  static uint64_t timeOnDevice(const android::nn::V1_2::Timing& obj) {
    return obj.timeOnDevice;
  }
  static uint64_t timeInDriver(const android::nn::V1_2::Timing& obj) {
    return obj.timeInDriver;
  }

  static bool Read(chromeos::nnapi::mojom::TimingDataView data,
                   android::nn::V1_2::Timing* out) {
    out->timeOnDevice = data.timeOnDevice();
    out->timeInDriver = data.timeInDriver();
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::ExtensionNameAndPrefixDataView,
                    android::nn::V1_2::Model::ExtensionNameAndPrefix> {
 public:
  static std::string name(
      const android::nn::V1_2::Model::ExtensionNameAndPrefix& obj) {
    return obj.name;
  }
  static uint16_t prefix(
      const android::nn::V1_2::Model::ExtensionNameAndPrefix& obj) {
    return obj.prefix;
  }

  static bool Read(chromeos::nnapi::mojom::ExtensionNameAndPrefixDataView data,
                   android::nn::V1_2::Model::ExtensionNameAndPrefix* out) {
    bool result = true;
    result &= data.ReadName(&out->name);
    out->prefix = data.prefix();
    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::SymmPerChannelQuantParamsDataView,
                    android::nn::V1_2::SymmPerChannelQuantParams> {
 public:
  static const android::hardware::hidl_vec<float>& scales(
      const android::nn::V1_2::SymmPerChannelQuantParams& obj) {
    return obj.scales;
  }
  static uint32_t channelDim(
      const android::nn::V1_2::SymmPerChannelQuantParams& obj) {
    return obj.channelDim;
  }

  static bool Read(
      chromeos::nnapi::mojom::SymmPerChannelQuantParamsDataView data,
      android::nn::V1_2::SymmPerChannelQuantParams* out) {
    bool result = true;
    result &= data.ReadScales(&out->scales);
    out->channelDim = data.channelDim();
    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::MonostateDataView,
                    android::hidl::safe_union::V1_0::Monostate> {
 public:
  static bool Read(chromeos::nnapi::mojom::MonostateDataView data,
                   android::hidl::safe_union::V1_0::Monostate* out) {
    return true;
  }
};

template <>
struct UnionTraits<chromeos::nnapi::mojom::ExtraParams::DataView,
                   android::nn::V1_2::Operand::ExtraParams> {
 public:
  static const ::android::hidl::safe_union::V1_0::Monostate& none(
      const android::nn::V1_2::Operand::ExtraParams& obj) {
    return obj.none();
  }
  static android::nn::V1_2::SymmPerChannelQuantParams channelQuant(
      const android::nn::V1_2::Operand::ExtraParams& obj) {
    return obj.channelQuant();
  }
  static const android::hardware::hidl_vec<uint8_t>& extension(
      const android::nn::V1_2::Operand::ExtraParams& obj) {
    return obj.extension();
  }
  static chromeos::nnapi::mojom::ExtraParams::DataView::Tag GetTag(
      const android::nn::V1_2::Operand::ExtraParams& obj) {
    return static_cast<chromeos::nnapi::mojom::ExtraParams::DataView::Tag>(
        obj.getDiscriminator());
  }

  static bool Read(chromeos::nnapi::mojom::ExtraParams::DataView data,
                   android::nn::V1_2::Operand::ExtraParams* out) {
    bool result = true;
    switch (data.tag()) {
      case chromeos::nnapi::mojom::ExtraParams::Tag::NONE:
        out->none(android::hidl::safe_union::V1_0::Monostate());
        break;
      case chromeos::nnapi::mojom::ExtraParams::Tag::CHANNELQUANT: {
        android::hardware::neuralnetworks::V1_2::SymmPerChannelQuantParams
            params;
        result &= data.ReadChannelQuant(&params);
        out->channelQuant(std::move(params));
        break;
      }
      case chromeos::nnapi::mojom::ExtraParams::Tag::EXTENSION: {
        android::hardware::hidl_vec<uint8_t> extension;
        result &= data.ReadExtension(&extension);
        out->extension(std::move(extension));
        break;
      }
    }
    return result;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::OperandType_1_2,
                  android::hardware::neuralnetworks::V1_2::OperandType> {
  static chromeos::nnapi::mojom::OperandType_1_2 ToMojom(
      android::hardware::neuralnetworks::V1_2::OperandType input) {
    return static_cast<chromeos::nnapi::mojom::OperandType_1_2>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::OperandType_1_2 input,
      android::hardware::neuralnetworks::V1_2::OperandType* output) {
    *output = static_cast<android::hardware::neuralnetworks::V1_2::OperandType>(
        input);
    return true;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::OperationType_1_2,
                  android::hardware::neuralnetworks::V1_2::OperationType> {
  static chromeos::nnapi::mojom::OperationType_1_2 ToMojom(
      android::hardware::neuralnetworks::V1_2::OperationType input) {
    return static_cast<chromeos::nnapi::mojom::OperationType_1_2>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::OperationType_1_2 input,
      android::hardware::neuralnetworks::V1_2::OperationType* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_2::OperationType>(
            input);
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::Operation_1_2DataView,
                    android::nn::V1_2::Operation> {
 public:
  static android::hardware::neuralnetworks::V1_2::OperationType type(
      const android::nn::V1_2::Operation& m) {
    return m.type;
  }
  static const android::hardware::hidl_vec<uint32_t>& inputs(
      const android::nn::V1_2::Operation& m) {
    return m.inputs;
  }
  static const android::hardware::hidl_vec<uint32_t>& outputs(
      const android::nn::V1_2::Operation& m) {
    return m.outputs;
  }

  static bool Read(chromeos::nnapi::mojom::Operation_1_2DataView operation,
                   android::nn::V1_2::Operation* out) {
    bool result = true;

    EnumTraits<chromeos::nnapi::mojom::OperationType_1_2,
               android::hardware::neuralnetworks::V1_2::OperationType>::
        FromMojom(operation.type(), &out->type);
    result &= operation.ReadInputs(&out->inputs);
    result &= operation.ReadOutputs(&out->outputs);

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::Operand_1_2DataView,
                    android::nn::V1_2::Operand> {
 public:
  static const android::hardware::neuralnetworks::V1_2::OperandType& type(
      const android::nn::V1_2::Operand& m) {
    return m.type;
  }
  static const android::hardware::hidl_vec<uint32_t>& dimensions(
      const android::nn::V1_2::Operand& m) {
    return m.dimensions;
  }
  static const uint32_t& numberOfConsumers(
      const android::nn::V1_2::Operand& m) {
    return m.numberOfConsumers;
  }
  static const float& scale(const android::nn::V1_2::Operand& m) {
    return m.scale;
  }
  static const int32_t& zeroPoint(const android::nn::V1_2::Operand& m) {
    return m.zeroPoint;
  }
  static const android::hardware::neuralnetworks::V1_0::OperandLifeTime&
  lifetime(const android::nn::V1_2::Operand& m) {
    return m.lifetime;
  }
  static const android::hardware::neuralnetworks::V1_0::DataLocation& location(
      const android::nn::V1_2::Operand& m) {
    return m.location;
  }
  static const android::hardware::neuralnetworks::V1_2::Operand::ExtraParams&
  extraParams(const android::nn::V1_2::Operand& m) {
    return m.extraParams;
  }

  static bool Read(chromeos::nnapi::mojom::Operand_1_2DataView operand,
                   android::nn::V1_2::Operand* out) {
    bool result = true;

    EnumTraits<chromeos::nnapi::mojom::OperandType_1_2,
               android::hardware::neuralnetworks::V1_2::OperandType>::
        FromMojom(operand.type(), &out->type);
    result &= operand.ReadDimensions(&out->dimensions);
    out->numberOfConsumers = operand.numberOfConsumers();
    out->scale = operand.scale();
    out->zeroPoint = operand.zeroPoint();
    EnumTraits<chromeos::nnapi::mojom::OperandLifeTime,
               android::hardware::neuralnetworks::V1_0::OperandLifeTime>::
        FromMojom(operand.lifetime(), &out->lifetime);
    result &= operand.ReadLocation(&out->location);
    result &= operand.ReadExtraParams(&out->extraParams);

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::Model_1_2DataView,
                    android::nn::V1_2::Model> {
 public:
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_2::Operand>&
  operands(const android::nn::V1_2::Model& m) {
    return m.operands;
  }
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_2::Operation>&
  operations(const android::nn::V1_2::Model& m) {
    return m.operations;
  }
  static const android::hardware::hidl_vec<uint32_t>& inputIndexes(
      const android::nn::V1_2::Model& m) {
    return m.inputIndexes;
  }
  static const android::hardware::hidl_vec<uint32_t>& outputIndexes(
      const android::nn::V1_2::Model& m) {
    return m.outputIndexes;
  }
  static const android::hardware::hidl_vec<uint8_t>& operandValues(
      const android::nn::V1_2::Model& m) {
    return m.operandValues;
  }
  static const android::hardware::hidl_vec<android::hardware::hidl_memory>&
  pools(const android::nn::V1_2::Model& m) {
    return m.pools;
  }
  static bool relaxComputationFloat32toFloat16(
      const android::nn::V1_2::Model& m) {
    return m.relaxComputationFloat32toFloat16;
  }
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix>&
  extensionNameToPrefix(const android::nn::V1_2::Model& m) {
    return m.extensionNameToPrefix;
  }

  static bool Read(chromeos::nnapi::mojom::Model_1_2DataView model,
                   android::nn::V1_2::Model* out) {
    bool result = true;

    result &= model.ReadOperands(&out->operands);
    result &= model.ReadOperations(&out->operations);
    result &= model.ReadInputIndexes(&out->inputIndexes);
    result &= model.ReadOutputIndexes(&out->outputIndexes);
    result &= model.ReadOperandValues(&out->operandValues);
    result &= model.ReadPools(&out->pools);
    out->relaxComputationFloat32toFloat16 =
        model.relaxComputationFloat32toFloat16();
    result &= model.ReadExtensionNameToPrefix(&out->extensionNameToPrefix);

    return result;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::MeasureTiming,
                  android::hardware::neuralnetworks::V1_2::MeasureTiming> {
  static chromeos::nnapi::mojom::MeasureTiming ToMojom(
      android::hardware::neuralnetworks::V1_2::MeasureTiming input) {
    return static_cast<chromeos::nnapi::mojom::MeasureTiming>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::MeasureTiming input,
      android::hardware::neuralnetworks::V1_2::MeasureTiming* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_2::MeasureTiming>(
            input);
    return true;
  }
};

// V1_3

template <>
struct EnumTraits<chromeos::nnapi::mojom::ErrorStatus_1_3,
                  android::hardware::neuralnetworks::V1_3::ErrorStatus> {
  static chromeos::nnapi::mojom::ErrorStatus_1_3 ToMojom(
      android::hardware::neuralnetworks::V1_3::ErrorStatus input) {
    return static_cast<chromeos::nnapi::mojom::ErrorStatus_1_3>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::ErrorStatus_1_3 input,
      android::hardware::neuralnetworks::V1_3::ErrorStatus* output) {
    *output = static_cast<android::hardware::neuralnetworks::V1_3::ErrorStatus>(
        input);
    return true;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::OperandLifeTime_1_3,
                  android::hardware::neuralnetworks::V1_3::OperandLifeTime> {
  static chromeos::nnapi::mojom::OperandLifeTime_1_3 ToMojom(
      android::hardware::neuralnetworks::V1_3::OperandLifeTime input) {
    return static_cast<chromeos::nnapi::mojom::OperandLifeTime_1_3>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::OperandLifeTime_1_3 input,
      android::hardware::neuralnetworks::V1_3::OperandLifeTime* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_3::OperandLifeTime>(
            input);
    return true;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::OperandType_1_3,
                  android::hardware::neuralnetworks::V1_3::OperandType> {
  static chromeos::nnapi::mojom::OperandType_1_3 ToMojom(
      android::hardware::neuralnetworks::V1_3::OperandType input) {
    return static_cast<chromeos::nnapi::mojom::OperandType_1_3>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::OperandType_1_3 input,
      android::hardware::neuralnetworks::V1_3::OperandType* output) {
    *output = static_cast<android::hardware::neuralnetworks::V1_3::OperandType>(
        input);
    return true;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::OperationType_1_3,
                  android::hardware::neuralnetworks::V1_3::OperationType> {
  static chromeos::nnapi::mojom::OperationType_1_3 ToMojom(
      android::hardware::neuralnetworks::V1_3::OperationType input) {
    return static_cast<chromeos::nnapi::mojom::OperationType_1_3>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::OperationType_1_3 input,
      android::hardware::neuralnetworks::V1_3::OperationType* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_3::OperationType>(
            input);
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::Operation_1_3DataView,
                    android::nn::V1_3::Operation> {
 public:
  static android::hardware::neuralnetworks::V1_3::OperationType type(
      const android::nn::V1_3::Operation& obj) {
    return obj.type;
  }
  static const android::hardware::hidl_vec<uint32_t>& inputs(
      const android::nn::V1_3::Operation& obj) {
    return obj.inputs;
  }
  static const android::hardware::hidl_vec<uint32_t>& outputs(
      const android::nn::V1_3::Operation& obj) {
    return obj.outputs;
  }

  static bool Read(chromeos::nnapi::mojom::Operation_1_3DataView operation,
                   android::nn::V1_3::Operation* out) {
    bool result = true;

    EnumTraits<chromeos::nnapi::mojom::OperationType_1_3,
               android::hardware::neuralnetworks::V1_3::OperationType>::
        FromMojom(operation.type(), &out->type);
    result &= operation.ReadInputs(&out->inputs);
    result &= operation.ReadOutputs(&out->outputs);

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::Operand_1_3DataView,
                    android::nn::V1_3::Operand> {
 public:
  static const android::hardware::neuralnetworks::V1_3::OperandType& type(
      const android::nn::V1_3::Operand& obj) {
    return obj.type;
  }
  static const android::hardware::hidl_vec<uint32_t>& dimensions(
      const android::nn::V1_3::Operand& obj) {
    return obj.dimensions;
  }
  static const uint32_t& numberOfConsumers(
      const android::nn::V1_3::Operand& obj) {
    return obj.numberOfConsumers;
  }
  static const float& scale(const android::nn::V1_3::Operand& obj) {
    return obj.scale;
  }
  static const int32_t& zeroPoint(const android::nn::V1_3::Operand& obj) {
    return obj.zeroPoint;
  }
  static const android::hardware::neuralnetworks::V1_3::OperandLifeTime&
  lifetime(const android::nn::V1_3::Operand& obj) {
    return obj.lifetime;
  }
  static const android::hardware::neuralnetworks::V1_0::DataLocation& location(
      const android::nn::V1_3::Operand& obj) {
    return obj.location;
  }
  static const android::hardware::neuralnetworks::V1_2::Operand::ExtraParams&
  extraParams(const android::nn::V1_3::Operand& obj) {
    return obj.extraParams;
  }

  static bool Read(chromeos::nnapi::mojom::Operand_1_3DataView operand,
                   android::nn::V1_3::Operand* out) {
    bool result = true;

    EnumTraits<chromeos::nnapi::mojom::OperandType_1_3,
               android::hardware::neuralnetworks::V1_3::OperandType>::
        FromMojom(operand.type(), &out->type);
    result &= operand.ReadDimensions(&out->dimensions);
    out->numberOfConsumers = operand.numberOfConsumers();
    out->scale = operand.scale();
    out->zeroPoint = operand.zeroPoint();
    EnumTraits<chromeos::nnapi::mojom::OperandLifeTime_1_3,
               android::hardware::neuralnetworks::V1_3::OperandLifeTime>::
        FromMojom(operand.lifetime(), &out->lifetime);
    result &= operand.ReadLocation(&out->location);
    result &= operand.ReadExtraParams(&out->extraParams);

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::SubgraphDataView,
                    android::nn::V1_3::Subgraph> {
 public:
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_3::Operand>&
  operands(const android::nn::V1_3::Subgraph& obj) {
    return obj.operands;
  }
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_3::Operation>&
  operations(const android::nn::V1_3::Subgraph& obj) {
    return obj.operations;
  }
  static const android::hardware::hidl_vec<uint32_t>& inputIndexes(
      const android::nn::V1_3::Subgraph& obj) {
    return obj.inputIndexes;
  }
  static const android::hardware::hidl_vec<uint32_t>& outputIndexes(
      const android::nn::V1_3::Subgraph& obj) {
    return obj.outputIndexes;
  }

  static bool Read(chromeos::nnapi::mojom::SubgraphDataView data,
                   android::nn::V1_3::Subgraph* out) {
    bool result = true;

    result &= data.ReadOperands(&out->operands);
    result &= data.ReadOperations(&out->operations);
    result &= data.ReadInputIndexes(&out->inputIndexes);
    result &= data.ReadOutputIndexes(&out->outputIndexes);

    return result;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::Model_1_3DataView,
                    android::nn::V1_3::Model> {
 public:
  static const android::nn::V1_3::Subgraph& main(
      const android::nn::V1_3::Model& m) {
    return m.main;
  }
  static const android::hardware::hidl_vec<android::nn::V1_3::Subgraph>&
  referenced(const android::nn::V1_3::Model& m) {
    return m.referenced;
  }
  static const android::hardware::hidl_vec<uint8_t>& operandValues(
      const android::nn::V1_3::Model& m) {
    return m.operandValues;
  }
  static const android::hardware::hidl_vec<android::hardware::hidl_memory>&
  pools(const android::nn::V1_3::Model& m) {
    return m.pools;
  }
  static bool relaxComputationFloat32toFloat16(
      const android::nn::V1_3::Model& m) {
    return m.relaxComputationFloat32toFloat16;
  }
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_2::Model::ExtensionNameAndPrefix>&
  extensionNameToPrefix(const android::nn::V1_3::Model& m) {
    return m.extensionNameToPrefix;
  }

  static bool Read(chromeos::nnapi::mojom::Model_1_3DataView model,
                   android::nn::V1_3::Model* out) {
    bool result = true;

    result &= model.ReadMain(&out->main);
    result &= model.ReadReferenced(&out->referenced);
    result &= model.ReadOperandValues(&out->operandValues);
    result &= model.ReadPools(&out->pools);
    out->relaxComputationFloat32toFloat16 =
        model.relaxComputationFloat32toFloat16();
    result &= model.ReadExtensionNameToPrefix(&out->extensionNameToPrefix);

    return result;
  }
};

template <>
struct EnumTraits<chromeos::nnapi::mojom::Priority,
                  android::hardware::neuralnetworks::V1_3::Priority> {
  static chromeos::nnapi::mojom::Priority ToMojom(
      android::hardware::neuralnetworks::V1_3::Priority input) {
    return static_cast<chromeos::nnapi::mojom::Priority>(input);
  }
  static bool FromMojom(
      chromeos::nnapi::mojom::Priority input,
      android::hardware::neuralnetworks::V1_3::Priority* output) {
    *output =
        static_cast<android::hardware::neuralnetworks::V1_3::Priority>(input);
    return true;
  }
};

template <>
struct UnionTraits<chromeos::nnapi::mojom::OptionalTimePoint::DataView,
                   android::nn::V1_3::OptionalTimePoint> {
 public:
  static const ::android::hidl::safe_union::V1_0::Monostate& none(
      const android::nn::V1_3::OptionalTimePoint& obj) {
    return obj.none();
  }
  static uint64_t nanosecondsSinceEpoch(
      const android::nn::V1_3::OptionalTimePoint& obj) {
    return obj.nanosecondsSinceEpoch();
  }
  static chromeos::nnapi::mojom::OptionalTimePoint::DataView::Tag GetTag(
      const android::nn::V1_3::OptionalTimePoint& obj) {
    return static_cast<
        chromeos::nnapi::mojom::OptionalTimePoint::DataView::Tag>(
        obj.getDiscriminator());
  }

  static bool Read(chromeos::nnapi::mojom::OptionalTimePoint::DataView data,
                   android::nn::V1_3::OptionalTimePoint* out) {
    switch (data.tag()) {
      case chromeos::nnapi::mojom::OptionalTimePoint::Tag::NONE:
        out->none(android::hidl::safe_union::V1_0::Monostate());
        break;
      case chromeos::nnapi::mojom::OptionalTimePoint::Tag::
          NANOSECONDSSINCEEPOCH: {
        out->nanosecondsSinceEpoch(data.nanosecondsSinceEpoch());
        break;
      }
    }
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::Request_1_3DataView,
                    android::nn::V1_3::Request> {
 public:
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_0::RequestArgument>&
  inputs(const android::nn::V1_3::Request& obj) {
    return obj.inputs;
  }
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_0::RequestArgument>&
  outputs(const android::nn::V1_3::Request& obj) {
    return obj.outputs;
  }
  static const android::hardware::hidl_vec<
      android::hardware::neuralnetworks::V1_3::Request::MemoryPool>&
  pools(const android::nn::V1_3::Request& obj) {
    return obj.pools;
  }

  static bool Read(chromeos::nnapi::mojom::Request_1_3DataView data,
                   android::nn::V1_3::Request* out) {
    bool result = true;

    result &= data.ReadInputs(&out->inputs);
    result &= data.ReadOutputs(&out->outputs);
    result &= data.ReadPools(&out->pools);

    return result;
  }
};

template <>
struct UnionTraits<chromeos::nnapi::mojom::MemoryPool::DataView,
                   android::nn::V1_3::Request::MemoryPool> {
 public:
  static android::hardware::hidl_memory hidlMemory(
      const android::nn::V1_3::Request::MemoryPool& obj) {
    return obj.hidlMemory();
  }
  static uint32_t token(const android::nn::V1_3::Request::MemoryPool& obj) {
    return obj.token();
  }
  static chromeos::nnapi::mojom::MemoryPool::DataView::Tag GetTag(
      const android::nn::V1_3::Request::MemoryPool& obj) {
    return static_cast<chromeos::nnapi::mojom::MemoryPool::DataView::Tag>(
        obj.getDiscriminator());
  }

  static bool Read(chromeos::nnapi::mojom::MemoryPool::DataView data,
                   android::nn::V1_3::Request::MemoryPool* out) {
    bool result = true;

    switch (data.tag()) {
      case chromeos::nnapi::mojom::MemoryPool::Tag::HIDLMEMORY: {
        android::hardware::hidl_memory hidl_memory;
        result &= data.ReadHidlMemory(&hidl_memory);
        out->hidlMemory(std::move(hidl_memory));
        break;
      }
      case chromeos::nnapi::mojom::MemoryPool::Tag::TOKEN: {
        out->token(data.token());
        break;
      }
    }

    return result;
  }
};

template <>
struct UnionTraits<chromeos::nnapi::mojom::OptionalTimeoutDuration::DataView,
                   android::nn::V1_3::OptionalTimeoutDuration> {
 public:
  static const ::android::hidl::safe_union::V1_0::Monostate& none(
      const android::nn::V1_3::OptionalTimeoutDuration& obj) {
    return obj.none();
  }
  static uint64_t nanoseconds(
      const android::nn::V1_3::OptionalTimeoutDuration& obj) {
    return obj.nanoseconds();
  }
  static chromeos::nnapi::mojom::OptionalTimeoutDuration::DataView::Tag GetTag(
      const android::nn::V1_3::OptionalTimeoutDuration& obj) {
    return static_cast<
        chromeos::nnapi::mojom::OptionalTimeoutDuration::DataView::Tag>(
        obj.getDiscriminator());
  }

  static bool Read(
      chromeos::nnapi::mojom::OptionalTimeoutDuration::DataView data,
      android::nn::V1_3::OptionalTimeoutDuration* out) {
    switch (data.tag()) {
      case chromeos::nnapi::mojom::OptionalTimeoutDuration::Tag::NONE:
        out->none(android::hidl::safe_union::V1_0::Monostate());
        break;
      case chromeos::nnapi::mojom::OptionalTimeoutDuration::Tag::NANOSECONDS: {
        out->nanoseconds(data.nanoseconds());
        break;
      }
    }
    return true;
  }
};

template <>
struct StructTraits<chromeos::nnapi::mojom::HalCacheToken::DataView,
                    android::nn::HalCacheToken> {
 public:
  static const std::vector<uint8_t> token(
      const android::nn::HalCacheToken& obj) {
    std::vector<uint8_t> v_token{obj.data(), obj.data() + obj.elementCount()};
    return v_token;
  }

  static bool Read(chromeos::nnapi::mojom::HalCacheToken::DataView data,
                   android::nn::HalCacheToken* out) {
    bool result = true;
    std::vector<uint8_t> v_token{};
    result &= data.ReadToken(&v_token);
    *out = android::nn::HalCacheToken{v_token.data()};
    return result;
  }
};

}  // namespace mojo
