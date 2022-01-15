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

#include <vector>

#include "OperationsUtils.h"
#include "SVDF.h"

namespace android::nn::svdf {

Result<Version> validate(const IOperationValidationContext* context) {
    NN_RET_CHECK(context->getNumInputs() == 7 && context->getNumOutputs() == 2)
            << context->invalidInOutNumberMessage(7, 2);
    Version version;
    OperandType inputType = context->getInputType(0);
    if (inputType == OperandType::TENSOR_FLOAT32) {
        version = kVersionFeatureLevel1;
    } else if (inputType == OperandType::TENSOR_FLOAT16) {
        version = kVersionFeatureLevel3;
    } else {
        NN_RET_CHECK_FAIL() << "Unsupported input tensor type for operation "
                            << context->getOperationName();
    }
    std::vector<OperandType> inExpectedTypes = {
            inputType, inputType,          inputType,          inputType,
            inputType, OperandType::INT32, OperandType::INT32,
    };
    std::vector<OperandType> outExpectedTypes = {inputType, inputType};
    NN_TRY(context->validateOperationOperandTypes(inExpectedTypes, outExpectedTypes));
    return version;
}

}  // namespace android::nn::svdf
