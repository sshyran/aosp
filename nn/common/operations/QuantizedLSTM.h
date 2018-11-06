#ifndef FRAMEWORKS_ML_NN_QUANTIZEDLSTM_H
#define FRAMEWORKS_ML_NN_QUANTIZEDLSTM_H

#include "HalOperation.h"

#include <vector>

namespace android {
namespace nn {

struct RunTimeOperandInfo;
struct Shape;

class QuantizedLSTMCell {
   public:
    QuantizedLSTMCell(const android::hardware::neuralnetworks::V1_2::Operation& operation,
                      std::vector<RunTimeOperandInfo>& operands);

    static bool prepare(const android::hardware::neuralnetworks::V1_2::Operation& operation,
                        std::vector<RunTimeOperandInfo>& operands, Shape* concatTempShape,
                        Shape* activationTempShape, Shape* outputStateShape, Shape* cellStateShape,
                        Shape* outputShape);
    bool eval();

    // Inputs:
    static constexpr int kInputTensor = 0;
    static constexpr int kPrevOutputTensor = 1;
    static constexpr int kWeightsTensor = 2;
    static constexpr int kBiasTensor = 3;
    static constexpr int kPrevCellStateTensor = 4;
    // Outputs:
    static constexpr int kConcatTempTensor = 0;
    static constexpr int kActivationTempTensor = 1;
    static constexpr int kOutputStateOutTensor = 2;
    static constexpr int kCellStateOutTensor = 3;
    static constexpr int kOutputTensor = 4;

   private:
    const RunTimeOperandInfo* input_;
    const RunTimeOperandInfo* prevOutput_;
    const RunTimeOperandInfo* weights_;
    const RunTimeOperandInfo* bias_;
    const RunTimeOperandInfo* prevCellState_;

    RunTimeOperandInfo* concatTemp_;
    RunTimeOperandInfo* activationTemp_;
    RunTimeOperandInfo* outputStateOut_;
    RunTimeOperandInfo* cellStateOut_;
    RunTimeOperandInfo* output_;
};

}  // namespace nn
}  // namespace android

#endif  // FRAMEWORKS_ML_NN_QUANTIZEDLSTM_H
