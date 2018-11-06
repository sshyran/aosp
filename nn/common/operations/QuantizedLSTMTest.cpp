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

#include "NeuralNetworksWrapper.h"
#include "gmock/gmock-matchers.h"
#include "gtest/gtest.h"

namespace android {
namespace nn {
namespace wrapper {

using ::testing::Each;
using ::testing::ElementsAreArray;
using ::testing::FloatNear;
using ::testing::Matcher;

class QuantizedLSTMOpModel {
   public:
    QuantizedLSTMOpModel(uint32_t numBatches, uint32_t inputSize, uint32_t cellSize,
                         uint32_t outputSize, float weightsScale, int weightsZeroPoint,
                         const std::vector<std::vector<uint32_t>>& input_shapes)
        : inputSize_(inputSize), outputSize_(outputSize) {
        std::vector<uint32_t> inputs;
        // clang-format off
        OperandType inputOperandType(Type::TENSOR_QUANT8_ASYMM, input_shapes[0],
                                     1. / 128., 128);
        inputs.push_back(model_.addOperand(&inputOperandType));
        OperandType prevOutputOperandType(Type::TENSOR_QUANT8_ASYMM, input_shapes[1],
                                          1. / 128., 128);
        inputs.push_back(model_.addOperand(&prevOutputOperandType));
        OperandType weightsOperandType(Type::TENSOR_QUANT8_ASYMM, input_shapes[2],
                                       weightsScale, weightsZeroPoint);
        inputs.push_back(model_.addOperand(&weightsOperandType));
        OperandType biasOperandType(Type::TENSOR_INT32, input_shapes[3],
                                    weightsScale / 128., 0);
        inputs.push_back(model_.addOperand(&biasOperandType));
        OperandType prevCellStateOperandType(Type::TENSOR_QUANT16_ASYMM, input_shapes[4],
                                             1. / 2048., 0);
        inputs.push_back(model_.addOperand(&prevCellStateOperandType));
        // clang-format on

        std::vector<std::vector<uint32_t>> output_shapes = {
                {numBatches, inputSize + outputSize},  // concatTemp
                {numBatches, 4 * cellSize},            // activationTemp
                {numBatches, outputSize},              // outputStateOut
                {numBatches, cellSize},                // cellStateOut
                {numBatches, outputSize}};             // output

        std::vector<uint32_t> outputs;
        // clang-format off
        OperandType concatTempOperandType(Type::TENSOR_QUANT8_ASYMM, output_shapes[0],
                                          1. / 128., 128);
        outputs.push_back(model_.addOperand(&concatTempOperandType));
        OperandType activationTempOperandType(Type::TENSOR_QUANT16_ASYMM, output_shapes[1],
                                              1. / 128., 128);
        outputs.push_back(model_.addOperand(&activationTempOperandType));
        OperandType outputStateOutOperandType(Type::TENSOR_QUANT8_ASYMM, output_shapes[2],
                                              1. / 128., 128);
        outputs.push_back(model_.addOperand(&outputStateOutOperandType));
        OperandType cellStateOutOperandType(Type::TENSOR_QUANT16_ASYMM, output_shapes[3],
                                            1. / 2048., 0);
        outputs.push_back(model_.addOperand(&cellStateOutOperandType));
        OperandType outputOperandType(Type::TENSOR_QUANT8_ASYMM, output_shapes[4],
                                      1. / 128., 128);
        outputs.push_back(model_.addOperand(&outputOperandType));
        // clang-format on

        model_.addOperation(ANEURALNETWORKS_QUANTIZED_16BIT_LSTM, inputs, outputs);
        model_.identifyInputsAndOutputs(inputs, outputs);

        input_.insert(input_.end(), numBatches * inputSize, 0);
        prevOutput_.insert(prevOutput_.end(), numBatches * outputSize, 128);
        prevCellState_.insert(prevCellState_.end(), numBatches * cellSize, 0);

        reserveOutputTensor(&concatTemp_, output_shapes[0]);
        reserveOutputTensor(&activationTemp_, output_shapes[1]);
        reserveOutputTensor(&outputStateOut_, output_shapes[2]);
        reserveOutputTensor(&cellStateOut_, output_shapes[3]);
        reserveOutputTensor(&output_, output_shapes[4]);

        model_.finish();
    }

    void invoke() {
        ASSERT_TRUE(model_.isValid());

        Compilation compilation(&model_);
        compilation.finish();
        Execution execution(&compilation);

        // Set all the inputs.
        ASSERT_EQ(setInputTensor(&execution, QuantizedLSTMCell::kInputTensor, input_),
                  Result::NO_ERROR);
        ASSERT_EQ(setInputTensor(&execution, QuantizedLSTMCell::kPrevOutputTensor, prevOutput_),
                  Result::NO_ERROR);
        ASSERT_EQ(setInputTensor(&execution, QuantizedLSTMCell::kWeightsTensor, weights_),
                  Result::NO_ERROR);
        ASSERT_EQ(setInputTensor(&execution, QuantizedLSTMCell::kBiasTensor, bias_),
                  Result::NO_ERROR);
        ASSERT_EQ(
                setInputTensor(&execution, QuantizedLSTMCell::kPrevCellStateTensor, prevCellState_),
                Result::NO_ERROR);
        // Set all the outputs.
        ASSERT_EQ(setOutputTensor(&execution, QuantizedLSTMCell::kConcatTempTensor, &concatTemp_),
                  Result::NO_ERROR);
        ASSERT_EQ(setOutputTensor(&execution, QuantizedLSTMCell::kActivationTempTensor,
                                  &activationTemp_),
                  Result::NO_ERROR);
        ASSERT_EQ(setOutputTensor(&execution, QuantizedLSTMCell::kOutputStateOutTensor,
                                  &outputStateOut_),
                  Result::NO_ERROR);
        ASSERT_EQ(
                setOutputTensor(&execution, QuantizedLSTMCell::kCellStateOutTensor, &cellStateOut_),
                Result::NO_ERROR);
        ASSERT_EQ(setOutputTensor(&execution, QuantizedLSTMCell::kOutputTensor, &output_),
                  Result::NO_ERROR);

        ASSERT_EQ(execution.compute(), Result::NO_ERROR);

        // Put state outputs into inputs for the next step
        prevOutput_.swap(outputStateOut_);
        prevCellState_.swap(cellStateOut_);
    }

    int inputSize() { return inputSize_; }
    int outputSize() { return outputSize_; }
    void setInput(const std::vector<uint8_t>& input) { input_ = input; }
    void setWeights(const std::vector<uint8_t>& weights) { weights_ = weights; }
    void setBias(const std::vector<int32_t>& bias) { bias_ = bias; }
    std::vector<uint8_t> getOutput() { return output_; }

   private:
    Model model_;
    // Inputs
    std::vector<uint8_t> input_;
    std::vector<uint8_t> prevOutput_;
    std::vector<uint8_t> weights_;
    std::vector<int32_t> bias_;
    std::vector<int16_t> prevCellState_;
    // Outputs
    std::vector<uint8_t> concatTemp_;
    std::vector<int16_t> activationTemp_;
    std::vector<uint8_t> outputStateOut_;
    std::vector<int16_t> cellStateOut_;
    std::vector<uint8_t> output_;

    int inputSize_;
    int outputSize_;

    template <typename T>
    Result setInputTensor(Execution* execution, int tensor, const std::vector<T>& data) {
        return execution->setInput(tensor, data.data(), sizeof(T) * data.size());
    }
    template <typename T>
    Result setOutputTensor(Execution* execution, int tensor, std::vector<T>* data) {
        return execution->setOutput(tensor, data->data(), sizeof(T) * data->size());
    }
    template <typename T>
    void reserveOutputTensor(std::vector<T>* tensor, const std::vector<uint32_t>& dims) {
        int size = 1;
        for (int d : dims) {
            size *= d;
        }
        tensor->insert(tensor->end(), size, static_cast<T>(0));
    }
};

class QuantizedLstmTest : public ::testing::Test {
   protected:
    void VerifyGoldens(const std::vector<std::vector<uint8_t>>& input,
                       const std::vector<std::vector<uint8_t>>& output,
                       QuantizedLSTMOpModel* lstm) {
        const int numBatches = input.size();
        EXPECT_GT(numBatches, 0);
        const int inputSize = lstm->inputSize();
        EXPECT_GT(inputSize, 0);
        const int inputSequenceSize = input[0].size() / inputSize;
        EXPECT_GT(inputSequenceSize, 0);
        for (int i = 0; i < inputSequenceSize; ++i) {
            std::vector<uint8_t> inputStep;
            for (int b = 0; b < numBatches; ++b) {
                const uint8_t* batchStart = input[b].data() + i * inputSize;
                const uint8_t* batchEnd = batchStart + inputSize;
                inputStep.insert(inputStep.end(), batchStart, batchEnd);
            }
            lstm->setInput(inputStep);
            lstm->invoke();

            const int outputSize = lstm->outputSize();
            std::vector<float> expected;
            for (int b = 0; b < numBatches; ++b) {
                const uint8_t* goldenBatchStart = output[b].data() + i * outputSize;
                const uint8_t* goldenBatchEnd = goldenBatchStart + outputSize;
                expected.insert(expected.end(), goldenBatchStart, goldenBatchEnd);
            }
            EXPECT_THAT(lstm->getOutput(), ElementsAreArray(expected));
        }
    }
};

// Inputs and weights in this test are random and the test only checks that the
// outputs are equal to outputs obtained from running TF Lite version of
// quantized LSTM on the same inputs.
TEST_F(QuantizedLstmTest, BasicQuantizedLstmTest) {
    const int numBatches = 2;
    const int inputSize = 2;
    const int cellSize = 4;
    const int outputSize = cellSize;

    float weightsScale = 0.00408021;
    int weightsZeroPoint = 100;

    QuantizedLSTMOpModel lstm(numBatches, inputSize, cellSize, outputSize, weightsScale,
                              weightsZeroPoint,
                              {
                                      {numBatches, inputSize},                 // input
                                      {numBatches, outputSize},                // prevOutput
                                      {4 * cellSize, inputSize + outputSize},  // weights
                                      {4 * cellSize},                          // bias
                                      {numBatches, cellSize}                   // prevCellState
                              });

    // clang-format off
    lstm.setWeights({254, 206, 77,  168, 146, 250,
                     71,  20,  215, 6,   235, 171,
                     223, 7,   118, 225, 10,  218,
                     59,  130, 174, 26,  171, 108,
                     172, 60,  205, 65,  133, 34,
                     14,  0,   140, 168, 29,  49,
                     240, 223, 133, 56,  206, 109,
                     142, 64,  246, 216, 54,  183,
                     137, 240, 103, 52,  24,  50,
                     68,  51,  237, 112, 132, 179,
                     0,   220, 89,  23,  158, 110,
                     69,  4,   207, 253, 3,   169,
                     106, 214, 67,  23,  195, 187,
                     59,  158, 45,  3,   11,  99,
                     119, 132, 49,  205, 109, 10,
                     129, 218, 11,  98,  218, 48});
    // clang-format on

    lstm.setBias({-7876, 13488, -726, 32839, 39481, 48624, 48976, -21419, 9206, -46884, -11693,
                  -38724, -58999, -17050, -41852, -40538});

    // LSTM input is stored as numBatches x (sequenceLength x inputSize) vector.
    std::vector<std::vector<uint8_t>> lstmInput;
    // clang-format off
    lstmInput = {{154, 166,
                  166, 179,
                  141, 141},
                 {100, 200,
                  50,  150,
                  111, 222}};
    // clang-format on

    // LSTM output is stored as numBatches x (sequenceLength x outputSize) vector.
    std::vector<std::vector<uint8_t>> lstmGoldenOutput;
    // clang-format off
    lstmGoldenOutput = {{136, 150, 140, 115,
                         140, 151, 146, 112,
                         139, 153, 146, 114},
                        {135, 152, 138, 112,
                         136, 156, 142, 112,
                         141, 154, 146, 108}};
    // clang-format on
    VerifyGoldens(lstmInput, lstmGoldenOutput, &lstm);
};

}  // namespace wrapper
}  // namespace nn
}  // namespace android
