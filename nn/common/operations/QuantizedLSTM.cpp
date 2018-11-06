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

#include "QuantizedLSTM.h"

#include "CpuExecutor.h"
#include "CpuOperationUtils.h"

#include "Tracing.h"

#include "public/gemmlowp.h"
#include "tensorflow/contrib/lite/kernels/internal/reference/reference_ops.h"

namespace android {
namespace nn {

namespace {

template <typename T>
inline T* GetBuffer(RunTimeOperandInfo* operand) {
    return reinterpret_cast<T*>(operand->buffer);
}

template <typename T>
inline const T* GetBuffer(const RunTimeOperandInfo* operand) {
    return reinterpret_cast<const T*>(operand->buffer);
}

using tflite::Dims;

// The function below is taken from TF Lite implementation in order to decouple
// NN API from TF Lite dependency. Original function, with a description of its
// parameters and types can be found by this link:
// https://github.com/tensorflow/tensorflow/blob/0d697e5fc4c05c699eea0764364104ea500ccc68/tensorflow/contrib/lite/kernels/internal/reference/reference_ops.h#L1926
//
// clang-format off
template <int StateIntegerBits>
void quantizedLstmStep(const uint8_t* input_data_uint8, const Dims<4>& input_dims,
                       const uint8_t* prev_activ_data_uint8,
                       const Dims<4>& prev_activ_dims, const uint8_t* weights_data_uint8,
                       const Dims<4>& weights_dims, const int32_t* bias_data_int32,
                       const Dims<4>& bias_dims, const int16_t* prevCellState_data_int16,
                       const Dims<4>& prevCellState_dims, int16_t* output_state_data_int16,
                       const Dims<4>& output_state_dims, uint8_t* output_activ_data_uint8,
                       const Dims<4>& output_activ_dims, uint8_t* concatTemp_data_uint8,
                       const Dims<4>& concatTemp_dims, int16_t* activ_temp_data_int16,
                       const Dims<4>& activ_temp_dims, int32_t weights_zero_point,
                       int32_t accum_multiplier, int accum_shift) {
  // Gather dimensions information, and perform consistency checks.
  const int outer_size =
      MatchingFlatSizeSkipDim(input_dims, 0, prev_activ_dims, prevCellState_dims,
                              output_state_dims, output_activ_dims);
  TFLITE_CHECK_EQ(ArraySize(weights_dims, 2), 1);
  TFLITE_CHECK_EQ(ArraySize(weights_dims, 3), 1);
  const int input_depth = ArraySize(input_dims, 0);
  const int prev_activ_depth = ArraySize(prev_activ_dims, 0);
  const int total_input_depth = prev_activ_depth + input_depth;
  TFLITE_CHECK_EQ(ArraySize(weights_dims, 0), total_input_depth);
  TFLITE_CHECK_EQ(MatchingArraySize(bias_dims, 1, bias_dims, 2, bias_dims, 3),
                  1);
  const int intern_activ_depth =
      MatchingArraySize(weights_dims, 1, bias_dims, 0);
  TFLITE_CHECK_EQ(intern_activ_depth % 4, 0);
  const int output_depth =
      MatchingArraySize(prevCellState_dims, 0, prev_activ_dims, 0,
                        output_state_dims, 0, output_activ_dims, 0);
  TFLITE_CHECK_EQ(output_depth, intern_activ_depth / 4);
  const int fc_batches = FlatSizeSkipDim(activ_temp_dims, 0);
  const int fc_output_depth =
      MatchingArraySize(weights_dims, 1, activ_temp_dims, 0);
  const int fc_accum_depth = ArraySize(weights_dims, 0);
  TFLITE_CHECK_EQ(fc_output_depth, 4 * output_depth);

  // Depth-concatenate prev_activ and input data together.
  uint8_t const* concat_input_arrays_data[2] = {input_data_uint8,
                                                prev_activ_data_uint8};
  Dims<4> const* concat_input_arrays_dims[2] = {&input_dims, &prev_activ_dims};
  tflite::reference_ops::Concatenation<tflite::FusedActivationFunctionType::kNone, uint8_t>(
      0, concat_input_arrays_data, concat_input_arrays_dims, 2,
      concatTemp_data_uint8, concatTemp_dims);

  // Implementation of the fully connected node inside the LSTM cell.
  // The operands are 8-bit integers, the accumulators are internally 32bit
  // integers, and the output is 16-bit fixed-point with 3 integer bits so
  // the output range is [-2^3, 2^3] == [-8, 8]. The rationale for that
  // is explained in the function comment above.
  for (int b = 0; b < fc_batches; ++b) {
    for (int out_c = 0; out_c < fc_output_depth; ++out_c) {
      // Internal accumulation.
      // Initialize accumulator with the bias-value.
      int32_t accum = bias_data_int32[out_c];
      // Accumulation loop.
      for (int d = 0; d < fc_accum_depth; ++d) {
        int16_t input_val = concatTemp_data_uint8[b * fc_accum_depth + d] - 128;
        int16_t weights_val =
            weights_data_uint8[out_c * fc_accum_depth + d] - weights_zero_point;
        accum += input_val * weights_val;
      }
      // Down-scale the final int32 accumulator to the scale used by our
      // (16-bit, using 3 integer bits) fixed-point format. The quantized
      // multiplier and shift here have been pre-computed offline
      // (e.g. by toco).
      accum =
          tflite::MultiplyByQuantizedMultiplier(accum, accum_multiplier, accum_shift);
      // Saturate, cast to int16, and store to the temporary activations array.
      accum = std::max(-32768, std::min(32767, accum));
      activ_temp_data_int16[out_c + fc_output_depth * b] = accum;
    }
  }

  // Rest of the LSTM cell: tanh and logistic math functions, and some adds
  // and muls, all done in 16-bit fixed-point.
  for (int b = 0; b < outer_size; ++b) {
    for (int c = 0; c < output_depth; ++c) {
      // Define the fixed-point data types that we will use here. All use
      // int16 as the underlying integer type i.e. all are 16-bit fixed-point.
      // They only differ by the number of integral vs. fractional bits,
      // determining the range of values that they can represent.
      //
      // F0 uses 0 integer bits, range [-1, 1].
      // This is the return type of math functions such as tanh, logistic,
      // whose range is in [-1, 1].
      using F0 = gemmlowp::FixedPoint<std::int16_t, 0>;
      // F3 uses 3 integer bits, range [-8, 8].
      // This is the range of the previous fully-connected node's output,
      // which is our input here.
      using F3 = gemmlowp::FixedPoint<std::int16_t, 3>;
      // FS uses StateIntegerBits integer bits, range [-2^StateIntegerBits,
      // 2^StateIntegerBits]. It's used to represent the internal state, whose
      // number of integer bits is currently dictated by the model. See comment
      // on the StateIntegerBits template parameter above.
      using FS = gemmlowp::FixedPoint<std::int16_t, StateIntegerBits>;
      // Implementation of input gate, using fixed-point logistic function.
      F3 input_gate_input = F3::FromRaw(
          activ_temp_data_int16[b * fc_output_depth + 0 * output_depth + c]);
      F0 input_gate_output = gemmlowp::logistic(input_gate_input);
      // Implementation of input modulation gate, using fixed-point tanh
      // function.
      F3 input_modulation_gate_input = F3::FromRaw(
          activ_temp_data_int16[b * fc_output_depth + 1 * output_depth + c]);
      F0 input_modulation_gate_output =
          gemmlowp::tanh(input_modulation_gate_input);
      // Implementation of forget gate, using fixed-point logistic function.
      F3 forget_gate_input = F3::FromRaw(
          activ_temp_data_int16[b * fc_output_depth + 2 * output_depth + c]);
      F0 forget_gate_output = gemmlowp::logistic(forget_gate_input);
      // Implementation of output gate, using fixed-point logistic function.
      F3 output_gate_input = F3::FromRaw(
          activ_temp_data_int16[b * fc_output_depth + 3 * output_depth + c]);
      F0 output_gate_output = gemmlowp::logistic(output_gate_input);
      // Implementation of internal multiplication nodes, still in fixed-point.
      F0 input_times_input_modulation =
          input_gate_output * input_modulation_gate_output;
      FS prevCellState = FS::FromRaw(prevCellState_data_int16[b * output_depth + c]);
      FS prevCellState_times_forget_state = forget_gate_output * prevCellState;
      // Implementation of internal addition node, saturating.
      FS new_state = gemmlowp::SaturatingAdd(
          gemmlowp::Rescale<StateIntegerBits>(input_times_input_modulation),
          prevCellState_times_forget_state);
      // Implementation of last internal Tanh node, still in fixed-point.
      // Since a Tanh fixed-point implementation is specialized for a given
      // number or integer bits, and each specialization can have a substantial
      // code size, and we already used above a Tanh on an input with 3 integer
      // bits, and per the table in the above function comment there is no
      // significant accuracy to be lost by clamping to [-8, +8] for a
      // 3-integer-bits representation, let us just do that. This helps people
      // porting this to targets where code footprint must be minimized.
      F3 new_state_f3 = gemmlowp::Rescale<3>(new_state);
      F0 output_activ_int16 = output_gate_output * gemmlowp::tanh(new_state_f3);
      // Store the new internal state back to memory, as 16-bit integers.
      // Note: here we store the original value with StateIntegerBits, not
      // the rescaled 3-integer-bits value fed to tanh.
      output_state_data_int16[b * output_depth + c] = new_state.raw();
      // Down-scale the output activations to 8-bit integers, saturating,
      // and store back to memory.
      int16_t rescaled_output_activ =
          gemmlowp::RoundingDivideByPOT(output_activ_int16.raw(), 8);
      int16_t clamped_output_activ =
          std::max<int16_t>(-128, std::min<int16_t>(127, rescaled_output_activ));
      output_activ_data_uint8[b * output_depth + c] =
          128 + clamped_output_activ;
    }
  }
}
// clang-format on

}  // namespace

QuantizedLSTMCell::QuantizedLSTMCell(const Operation& operation,
                                     std::vector<RunTimeOperandInfo>& operands) {
    input_ = GetInput(operation, operands, kInputTensor);
    prevOutput_ = GetInput(operation, operands, kPrevOutputTensor);
    weights_ = GetInput(operation, operands, kWeightsTensor);
    bias_ = GetInput(operation, operands, kBiasTensor);
    prevCellState_ = GetInput(operation, operands, kPrevCellStateTensor);

    concatTemp_ = GetOutput(operation, operands, kConcatTempTensor);
    activationTemp_ = GetOutput(operation, operands, kActivationTempTensor);
    outputStateOut_ = GetOutput(operation, operands, kOutputStateOutTensor);
    cellStateOut_ = GetOutput(operation, operands, kCellStateOutTensor);
    output_ = GetOutput(operation, operands, kOutputTensor);
}

bool QuantizedLSTMCell::prepare(const Operation& operation,
                                std::vector<RunTimeOperandInfo>& operands, Shape* concatTempShape,
                                Shape* activationTempShape, Shape* outputStateOutShape,
                                Shape* cellStateOutShape, Shape* outputShape) {
    auto input = GetInput(operation, operands, kInputTensor);
    NN_CHECK_EQ(NumDimensions(input), 2);
    NN_CHECK_EQ(input->scale, 1. / 128.0);
    NN_CHECK_EQ(input->zeroPoint, 128);
    const uint32_t numBatches = SizeOfDimension(input, 0);
    const uint32_t inputDepth = SizeOfDimension(input, 1);

    auto prevOutput = GetInput(operation, operands, kPrevOutputTensor);
    NN_CHECK_EQ(NumDimensions(prevOutput), 2);
    NN_CHECK_EQ(SizeOfDimension(prevOutput, 0), numBatches);
    NN_CHECK_EQ(prevOutput->scale, 1. / 128.0);
    NN_CHECK_EQ(prevOutput->zeroPoint, 128);
    const uint32_t activationDepth = SizeOfDimension(prevOutput, 1);
    const uint32_t totalDepth = inputDepth + activationDepth;

    auto weights = GetInput(operation, operands, kWeightsTensor);
    NN_CHECK_EQ(NumDimensions(weights), 2);
    NN_CHECK_EQ(SizeOfDimension(weights, 0), 4 * activationDepth);
    NN_CHECK_EQ(SizeOfDimension(weights, 1), totalDepth);
    NN_CHECK(weights->scale != 0);
    float weightsScale = weights->scale;

    auto bias = GetInput(operation, operands, kBiasTensor);
    NN_CHECK_EQ(NumDimensions(bias), 1);
    NN_CHECK_EQ(SizeOfDimension(bias, 0), 4 * activationDepth);
    NN_CHECK_EQ(bias->scale, weightsScale / 128.0);
    NN_CHECK_EQ(bias->zeroPoint, 0);

    auto prevCellState = GetInput(operation, operands, kPrevCellStateTensor);
    NN_CHECK_EQ(NumDimensions(prevCellState), 2);
    NN_CHECK_EQ(SizeOfDimension(prevCellState, 0), numBatches);
    NN_CHECK_EQ(SizeOfDimension(prevCellState, 1), activationDepth);
    NN_CHECK_EQ(prevCellState->zeroPoint, 0);
    // Cell state range for quantized LSTM is a function of StateIntegerBits and
    // can be calculated as:
    // [-2^StateIntegerBits, 2^StateIntegerBits * 32767/32768].
    // Therefore, for a fixed StateIntegerBits parameter, cell state scale is
    // equal to 2^StateIntegerBits * 2^(-15) = 2^(StateIntegerBits - 15) and
    // therefore:
    // StateIntegerBits = log2(cell state scale) + 15
    int stateScaleLog2Rounded;
    NN_CHECK(tflite::CheckedLog2(prevCellState->scale, &stateScaleLog2Rounded))
    const int stateIntegerBits = 15 + stateScaleLog2Rounded;
    // We only support StateIntegerBits == 4
    NN_CHECK(stateIntegerBits == 4);

    *concatTempShape = input->shape();
    concatTempShape->dimensions[1] = totalDepth;

    activationTempShape->type = OperandType::TENSOR_QUANT16_ASYMM;
    activationTempShape->dimensions = {numBatches, 4 * activationDepth};
    activationTempShape->scale = prevOutput->scale;
    activationTempShape->offset = prevOutput->zeroPoint;

    *outputStateOutShape = prevOutput->shape();
    *cellStateOutShape = prevCellState->shape();
    *outputShape = prevOutput->shape();
    return true;
}

bool QuantizedLSTMCell::eval() {
    NNTRACE_COMP("QuantizedLSTM::eval");
    // From https://arxiv.org/pdf/1712.05877, for a fully-connected layer,
    // accumulator multiplier is equal to:
    // (input scale) * (weights scale) / (fully-connected output scale)
    // In our case fully-connected output scale is fixed and equal to
    // 2^(-12) (See LSTMCell definition in TF Lite for more details on that).
    // But bias scale is set to (input scale) * (weights scale) (also from the
    // paper), so we can multiply it to an inverse of the fc-output scale to get
    // the multiplier value:
    double realAccumMultiplier = 4096 * bias_->scale;
    int32_t accumMultiplier;
    int accumShift;
    tflite::QuantizeMultiplier(realAccumMultiplier, &accumMultiplier, &accumShift);
    quantizedLstmStep<4>(
            // Inputs.
            GetBuffer<const uint8_t>(input_), convertShapeToDims(input_->shape()),
            GetBuffer<const uint8_t>(prevOutput_), convertShapeToDims(prevOutput_->shape()),
            GetBuffer<const uint8_t>(weights_), convertShapeToDims(weights_->shape()),
            GetBuffer<const int32_t>(bias_), convertShapeToDims(bias_->shape()),
            GetBuffer<const int16_t>(prevCellState_), convertShapeToDims(prevCellState_->shape()),
            // Outputs.
            GetBuffer<int16_t>(cellStateOut_), convertShapeToDims(cellStateOut_->shape()),
            GetBuffer<uint8_t>(output_), convertShapeToDims(output_->shape()),
            GetBuffer<uint8_t>(concatTemp_), convertShapeToDims(concatTemp_->shape()),
            GetBuffer<int16_t>(activationTemp_), convertShapeToDims(activationTemp_->shape()),
            weights_->zeroPoint, accumMultiplier, accumShift);
    // Copy output_ to outputStateOut_ to use it in the next time step
    const int flat_output_size = output_->shape().dimensions[0] * output_->shape().dimensions[1];
    memcpy(outputStateOut_->buffer, output_->buffer, flat_output_size);
    outputStateOut_->scale = output_->scale;
    outputStateOut_->zeroPoint = output_->zeroPoint;
    return true;
}

}  // namespace nn
}  // namespace android
