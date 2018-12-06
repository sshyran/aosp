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

#include "RNN.h"

#include "CpuExecutor.h"
#include "CpuOperationUtils.h"
#include "HalInterfaces.h"

#include "Tracing.h"

namespace android {
namespace nn {

RNN::RNN(const Operation& operation,
         std::vector<RunTimeOperandInfo>& operands) {
  NNTRACE_TRANS("RNN::RNN");
  input_ = GetInput(operation, operands, kInputTensor);
  weights_ = GetInput(operation, operands, kWeightsTensor);
  recurrent_weights_ = GetInput(operation, operands, kRecurrentWeightsTensor);
  hidden_state_in_ = GetInput(operation, operands, kHiddenStateInTensor);
  bias_ = GetInput(operation, operands, kBiasTensor);

  activation_ = static_cast<ActivationFn>(
      getScalarData<int32_t>(operands[operation.inputs[kActivationParam]]));

  hidden_state_out_ = GetOutput(operation, operands, kHiddenStateOutTensor);
  output_ = GetOutput(operation, operands, kOutputTensor);
}

bool RNN::Prepare(const Operation &operation,
                  std::vector<RunTimeOperandInfo> &operands,
                  Shape *hiddenStateShape,
                  Shape *outputShape) {
  NNTRACE_TRANS("RNN::Prepare");
  // Check we have all the inputs and outputs we need.
  const int num_inputs = NumInputsWithValues(operation, operands);
  NN_CHECK(num_inputs == 5 || num_inputs == 6);
  NN_CHECK_EQ(NumOutputs(operation), 2);

  const RunTimeOperandInfo *input =
      GetInput(operation, operands, kInputTensor);
  const RunTimeOperandInfo *input_weights =
      GetInput(operation, operands, kWeightsTensor);
  const RunTimeOperandInfo *recurrent_weights =
      GetInput(operation, operands, kRecurrentWeightsTensor);
  const RunTimeOperandInfo *bias =
      GetInput(operation, operands, kBiasTensor);

  // Check all the parameters of tensor match within themselves and match the
  // input configuration.
  const uint32_t batch_size = SizeOfDimension(input, 0);
  const uint32_t num_units = SizeOfDimension(input_weights, 0);
  NN_CHECK_EQ(SizeOfDimension(input, 1), SizeOfDimension(input_weights, 1));
  NN_CHECK_EQ(SizeOfDimension(input_weights, 0), SizeOfDimension(bias, 0));
  NN_CHECK_EQ(SizeOfDimension(recurrent_weights, 0), SizeOfDimension(bias, 0));
  NN_CHECK_EQ(SizeOfDimension(recurrent_weights, 1), SizeOfDimension(bias, 0));

  const Shape &inputShape = input->shape();

  // Resize state.
  hiddenStateShape->type = inputShape.type;
  hiddenStateShape->dimensions = { batch_size, num_units };

  // Resize output.
  outputShape->type = inputShape.type;
  outputShape->dimensions = { batch_size, num_units };

  return true;
}

bool RNN::Eval() {
    switch (input_->type) {
        case OperandType::TENSOR_FLOAT16: {
            std::vector<float> inputDataFloat32(getNumberOfElements(input_->shape()));
            convertFloat16ToFloat32(reinterpret_cast<_Float16*>(input_->buffer), &inputDataFloat32);
            std::vector<float> hiddenStateDataFloat32(
                    getNumberOfElements(hidden_state_in_->shape()));
            convertFloat16ToFloat32(reinterpret_cast<_Float16*>(hidden_state_in_->buffer),
                                    &hiddenStateDataFloat32);
            std::vector<float> biasDataFloat32(getNumberOfElements(bias_->shape()));
            convertFloat16ToFloat32(reinterpret_cast<_Float16*>(bias_->buffer), &biasDataFloat32);
            std::vector<float> weightsDataFloat32(getNumberOfElements(weights_->shape()));
            convertFloat16ToFloat32(reinterpret_cast<_Float16*>(weights_->buffer),
                                    &weightsDataFloat32);
            std::vector<float> recurrentWeightsDataFloat32(
                    getNumberOfElements(recurrent_weights_->shape()));
            convertFloat16ToFloat32(reinterpret_cast<_Float16*>(recurrent_weights_->buffer),
                                    &recurrentWeightsDataFloat32);
            std::vector<float> outputDataFloat32(getNumberOfElements(output_->shape()));
            std::vector<float> hiddenStateOutputDataFloat32(
                    getNumberOfElements(hidden_state_out_->shape()));

            EvalFloat32(inputDataFloat32.data(), hiddenStateDataFloat32.data(),
                        biasDataFloat32.data(), weightsDataFloat32.data(),
                        recurrentWeightsDataFloat32.data(), outputDataFloat32.data(),
                        hiddenStateOutputDataFloat32.data());
            convertFloat32ToFloat16(outputDataFloat32,
                                    reinterpret_cast<_Float16*>(output_->buffer));
            convertFloat32ToFloat16(hiddenStateOutputDataFloat32,
                                    reinterpret_cast<_Float16*>(hidden_state_out_->buffer));
            break;
        }
        case OperandType::TENSOR_FLOAT32: {
            EvalFloat32(reinterpret_cast<float*>(input_->buffer),
                        reinterpret_cast<float*>(hidden_state_in_->buffer),
                        reinterpret_cast<float*>(bias_->buffer),
                        reinterpret_cast<float*>(weights_->buffer),
                        reinterpret_cast<float*>(recurrent_weights_->buffer),
                        reinterpret_cast<float*>(output_->buffer),
                        reinterpret_cast<float*>(hidden_state_out_->buffer));
            break;
        }
        default: {
            LOG(ERROR) << "Unsupported data type: " << static_cast<int>(input_->type);
            return false;
        }
    }
    return true;
}

bool RNN::EvalFloat32(const float* inputData, const float* hiddenStateInputData,
                      const float* biasData, const float* weightsData,
                      const float* recurrentWeightsData, float* outputData,
                      float* hiddenStateOutputData) {
    NNTRACE_COMP("RNN::Eval");

    const uint32_t batch_size = input_->shape().dimensions[0];
    const uint32_t num_units = weights_->shape().dimensions[0];
    const uint32_t input_size = input_->shape().dimensions[1];
    const uint32_t input_weights_stride = weights_->shape().dimensions[1];
    const uint32_t recurrent_weights_stride = recurrent_weights_->shape().dimensions[1];

    // For each batch
    for (uint32_t b = 0; b < batch_size; b++) {
        // Initialize the pointer to input, output and bias.
        const float* input_ptr_batch = inputData + b * input_size;
        const float* hidden_state_in_ptr_batch = hiddenStateInputData + b * num_units;
        float* output_ptr_batch = outputData + b * num_units;
        float* hidden_state_out_ptr_batch = hiddenStateOutputData + b * num_units;

        // Initialize input_weights and recurrent_weights.
        const float* input_weights_ptr = weightsData;
        const float* recurrent_weights_ptr = recurrentWeightsData;

        // Output = bias
        for (uint32_t o = 0; o < num_units; o++) {
            output_ptr_batch[o] = biasData[o];
        }

        // Output += input * input_weights
        for (uint32_t o = 0; o < num_units; o++) {
            for (uint32_t i = 0; i < input_size; i++) {
                output_ptr_batch[o] += input_ptr_batch[i] * input_weights_ptr[i];
            }
            input_weights_ptr += input_weights_stride;
        }

        // Output += recurrent_weights * hidden_state
        for (uint32_t o = 0; o < num_units; o++) {
            for (uint32_t h = 0; h < num_units; h++) {
                output_ptr_batch[o] += hidden_state_in_ptr_batch[h] * recurrent_weights_ptr[h];
            }
            recurrent_weights_ptr += recurrent_weights_stride;
        }

        // Output = activation(Output) and update hidden_state
        for (uint32_t o = 0; o < num_units; o++) {
            output_ptr_batch[o] = (ActivationFunctor(activation_))(output_ptr_batch[o]);
            hidden_state_out_ptr_batch[o] = output_ptr_batch[o];
        }
    }

    return true;
}

}  // namespace nn
}  // namespace android
