/*
 * Copyright (C) 2019 The Android Open Source Project
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

#include "fuzzing/OperationManager.h"
#include "fuzzing/RandomGraphGenerator.h"
#include "fuzzing/RandomGraphGeneratorUtils.h"

#include "TestNeuralNetworksWrapper.h"

#include <vector>

namespace android {
namespace nn {
namespace fuzzing_test {

namespace {

// From Type to cpp type.
template <Type type>
struct CppType;
template <>
struct CppType<Type::TENSOR_FLOAT32> {
    using type = float;
};
template <>
struct CppType<Type::FLOAT32> {
    using type = float;
};
template <>
struct CppType<Type::TENSOR_INT32> {
    using type = int32_t;
};
template <>
struct CppType<Type::INT32> {
    using type = int32_t;
};
template <>
struct CppType<Type::TENSOR_QUANT8_ASYMM> {
    using type = uint8_t;
};

constexpr float kMaxFloat32 = 10;
constexpr float kMinFloat32 = -10;

template <typename T>
inline void uniform(RandomOperand* op);
template <>
inline void uniform<float>(RandomOperand* op) {
    float* data = reinterpret_cast<float*>(op->buffer.data());
    uint32_t len = op->getNumberOfElements();
    for (uint32_t i = 0; i < len; i++) data[i] = getUniform(kMinFloat32, kMaxFloat32);
}

}  // namespace

// Macros for INPUT operands.
// - INPUT_UNIFORM(opType): An INPUT operand with uniformly distributed values.
#define INPUT_UNIFORM(opType)                                                            \
    {                                                                                    \
        .dataType = Type::opType, .type = RandomOperandType::INPUT,                      \
        .finalizer = [](RandomOperand* op) { uniform<CppType<Type::opType>::type>(op); } \
    }

// Macros for CONST operands.
// - PARAMETER_CONST(opType, v): A CONST parameter of value v.
// - PARAMETER_RANGE(opType, low, up): A CONST parameter uniformly selected within range [low, up].
// - PARAMETER_CHOICE(opType, ...): A CONST parameter uniformly selected from provided choices.
// - PARAMETER_NONE(opType): A CONST parameter with no constructor, the buffer values are expected
//                           to be filled in the operation constructor or finalizer.
#define PARAMETER_CONST(opType, v)                                                      \
    {                                                                                   \
        .dataType = Type::opType, .type = RandomOperandType::CONST,                     \
        .constructor = [](RandomOperand* op) {                                          \
            op->buffer.resize(sizeof(CppType<Type::opType>::type));                     \
            reinterpret_cast<CppType<Type::opType>::type*>(op->buffer.data())[0] = (v); \
        }                                                                               \
    }
#define PARAMETER_RANGE(opType, low, up)                                           \
    {                                                                              \
        .dataType = Type::opType, .type = RandomOperandType::CONST,                \
        .constructor = [](RandomOperand* op) {                                     \
            op->buffer.resize(sizeof(CppType<Type::opType>::type));                \
            reinterpret_cast<CppType<Type::opType>::type*>(op->buffer.data())[0] = \
                    getUniform<CppType<Type::opType>::type>((low), (up));          \
        }                                                                          \
    }
#define PARAMETER_CHOICE(opType, ...)                                              \
    {                                                                              \
        .dataType = Type::opType, .type = RandomOperandType::CONST,                \
        .constructor = [](RandomOperand* op) {                                     \
            op->buffer.resize(sizeof(CppType<Type::opType>::type));                \
            reinterpret_cast<CppType<Type::opType>::type*>(op->buffer.data())[0] = \
                    getRandomChoice<CppType<Type::opType>::type>({__VA_ARGS__});   \
        }                                                                          \
    }
#define PARAMETER_NONE(opType) \
    { .dataType = Type::opType, .type = RandomOperandType::CONST }

// Macros for integer scalar operands as RandomVariable.
// - RANDOM_INT_RANGE(low, up): A FREE RandomVariable within range [low, up].
// - RANDOM_INT_CHOICE(...): A FREE RandomVariable of provided choices.
#define RANDOM_INT_RANGE(low, up)                                                                  \
    {                                                                                              \
        .dataType = Type::INT32, .type = RandomOperandType::CONST,                                 \
        .constructor = [](RandomOperand* op) { op->randomBuffer = {RandomVariable((low), (up))}; } \
    }
#define RANDOM_INT_CHOICE(...)                                     \
    {                                                              \
        .dataType = Type::INT32, .type = RandomOperandType::CONST, \
        .constructor = [](RandomOperand* op) {                     \
            op->randomBuffer = {RandomVariable({__VA_ARGS__})};    \
        }                                                          \
    }

// Macro for operation output.
#define OUTPUT(opType) \
    { .dataType = Type::opType, .type = RandomOperandType::OUTPUT }
#define OUTPUT_QUANT(opType, s, z) \
    { .dataType = Type::opType, .type = RandomOperandType::OUTPUT, .scale = (s), .zeroPoint = (z) }

inline void samePadding(const RandomVariable& input, [[maybe_unused]] const RandomVariable& filter,
                        const RandomVariable& stride, RandomVariable* output) {
    *output = (input + stride - 1) / stride;
}

inline void validPadding(const RandomVariable& input, const RandomVariable& filter,
                         const RandomVariable& stride, RandomVariable* output) {
    *output = (input - filter + stride) / stride;
}

inline void explicitPadding(const RandomVariable& input, const RandomVariable& filter,
                            const RandomVariable& stride, const RandomVariable& paddingHead,
                            const RandomVariable& paddingTail, RandomVariable* output) {
    *output = (input - filter + stride + (paddingHead + paddingTail)) / stride;
    // TFLite will crash if the filter size is less than or equal to the paddings.
    filter.setGreaterThan(paddingHead);
    filter.setGreaterThan(paddingTail);
}

// For broadcast ops.
static void broadcastOpConstructor(RandomOperation* op) {
    // TODO: Number of dimensions is always 4 for now.
    uint32_t numDims = getRandomChoice<uint32_t>({4});
    // TODO: All inputs of the broadcast op have the same rank 4 for now.
    op->inputs[0]->dimensions.resize(numDims);
    op->inputs[1]->dimensions.resize(numDims);
    op->outputs[0]->dimensions.resize(numDims);
    for (uint32_t i = 0; i < numDims; i++) {
        if (getBernoulli(0.9f)) {
            op->inputs[0]->dimensions[i] = RandomVariableType::FREE;
        } else {
            op->inputs[0]->dimensions[i] = 1;
        }
        if (getBernoulli(0.9f)) {
            op->inputs[1]->dimensions[i] = op->inputs[0]->dimensions[i];
        } else {
            op->inputs[1]->dimensions[i] = 1;
        }
        op->outputs[0]->dimensions[i] =
                max(op->inputs[0]->dimensions[i], op->inputs[1]->dimensions[i]);
    }
}

#define DEFINE_BROADCAST_OP_SIGNATURE(op)                        \
    const OperationSignature signature_##op##_float32 = {        \
            .opType = ANEURALNETWORKS_##op,                      \
            .inputs =                                            \
                    {                                            \
                            INPUT_UNIFORM(TENSOR_FLOAT32),       \
                            INPUT_UNIFORM(TENSOR_FLOAT32),       \
                            PARAMETER_CHOICE(INT32, 0, 1, 2, 3), \
                    },                                           \
            .outputs = {OUTPUT(TENSOR_FLOAT32)},                 \
            .constructor = broadcastOpConstructor};

DEFINE_BROADCAST_OP_SIGNATURE(ADD);
DEFINE_BROADCAST_OP_SIGNATURE(MUL);

#undef DEFINE_BROADCAST_OP_SIGNATURE

// For ops with input0 and output0 of the same shape.
static void sameShapeOpConstructor(RandomOperation* op) {
    // TODO: Number of dimensions is always 4 for now.
    uint32_t numDims = getRandomChoice<uint32_t>({4});
    op->inputs[0]->dimensions.resize(numDims);
    for (uint32_t i = 0; i < numDims; i++) {
        op->inputs[0]->dimensions[i] = RandomVariableType::FREE;
    }
    op->outputs[0]->dimensions = op->inputs[0]->dimensions;
}

#define DEFINE_ELEMENTWISE_OP_SIGNATURE(op)               \
    const OperationSignature signature_##op##_float32 = { \
            .opType = ANEURALNETWORKS_##op,               \
            .inputs = {INPUT_UNIFORM(TENSOR_FLOAT32)},    \
            .outputs = {OUTPUT(TENSOR_FLOAT32)},          \
            .constructor = sameShapeOpConstructor};

DEFINE_ELEMENTWISE_OP_SIGNATURE(FLOOR);
DEFINE_ELEMENTWISE_OP_SIGNATURE(LOGISTIC);
DEFINE_ELEMENTWISE_OP_SIGNATURE(RELU);
DEFINE_ELEMENTWISE_OP_SIGNATURE(RELU1);
DEFINE_ELEMENTWISE_OP_SIGNATURE(RELU6);
DEFINE_ELEMENTWISE_OP_SIGNATURE(TANH);

#undef DEFINE_ELEMENTWISE_OP_SIGNATURE

const OperationSignature signature_SOFTMAX_float32 = {
        .opType = ANEURALNETWORKS_SOFTMAX,
        .inputs = {INPUT_UNIFORM(TENSOR_FLOAT32), PARAMETER_RANGE(FLOAT32, 0.1, 10.0)},
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = sameShapeOpConstructor};

const OperationSignature signature_L2_NORMALIZATION_float32 = {
        .opType = ANEURALNETWORKS_L2_NORMALIZATION,
        .inputs = {INPUT_UNIFORM(TENSOR_FLOAT32)},
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = sameShapeOpConstructor};

const OperationSignature signature_LOCAL_RESPONSE_NORMALIZATION_float32 = {
        .opType = ANEURALNETWORKS_LOCAL_RESPONSE_NORMALIZATION,
        .inputs =
                {
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        PARAMETER_RANGE(INT32, 1, 10),
                        PARAMETER_RANGE(FLOAT32, 0.0, 10.0),
                        PARAMETER_RANGE(FLOAT32, 0.1, 10.0),
                        PARAMETER_RANGE(FLOAT32, 0.1, 1.0),
                },
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = sameShapeOpConstructor};

// For pooling ops with explicit padding.
static void poolingExplicitOpConstructor(RandomOperation* op) {
    // Input, [batch, height_in, width_in, channel]
    op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                 RandomVariableType::FREE, RandomVariableType::FREE};

    // Output, [batch, height_out, width_out, channel]
    op->outputs[0]->dimensions.resize(4);

    // batch and channel
    op->outputs[0]->dimensions[0] = op->inputs[0]->dimensions[0];
    op->outputs[0]->dimensions[3] = op->inputs[0]->dimensions[3];

    // height
    explicitPadding(op->inputs[0]->dimensions[1], op->inputs[8]->getValue<RandomVariable>(),
                    op->inputs[6]->getValue<int32_t>(), op->inputs[3]->getValue<int32_t>(),
                    op->inputs[4]->getValue<int32_t>(), &op->outputs[0]->dimensions[1]);

    // width
    explicitPadding(op->inputs[0]->dimensions[2], op->inputs[7]->getValue<RandomVariable>(),
                    op->inputs[5]->getValue<int32_t>(), op->inputs[1]->getValue<int32_t>(),
                    op->inputs[2]->getValue<int32_t>(), &op->outputs[0]->dimensions[2]);
}

// For pooling ops with implicit padding.
static void poolingImplicitOpConstructor(RandomOperation* op) {
    // Input, [batch, height_in, width_in, channel]
    op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                 RandomVariableType::FREE, RandomVariableType::FREE};

    // Output, [batch, height_out, width_out, channel]
    op->outputs[0]->dimensions.resize(4);

    // batch and channel
    op->outputs[0]->dimensions[0] = op->inputs[0]->dimensions[0];
    op->outputs[0]->dimensions[3] = op->inputs[0]->dimensions[3];

    // height and width
    auto paddingScheme = op->inputs[1]->getValue<int32_t>();
    switch (paddingScheme) {
        case ANEURALNETWORKS_PADDING_SAME:
            samePadding(op->inputs[0]->dimensions[1], op->inputs[5]->getValue<RandomVariable>(),
                        op->inputs[3]->getValue<int32_t>(), &op->outputs[0]->dimensions[1]);
            samePadding(op->inputs[0]->dimensions[2], op->inputs[4]->getValue<RandomVariable>(),
                        op->inputs[2]->getValue<int32_t>(), &op->outputs[0]->dimensions[2]);
            break;
        case ANEURALNETWORKS_PADDING_VALID:
            validPadding(op->inputs[0]->dimensions[1], op->inputs[5]->getValue<RandomVariable>(),
                         op->inputs[3]->getValue<int32_t>(), &op->outputs[0]->dimensions[1]);
            validPadding(op->inputs[0]->dimensions[2], op->inputs[4]->getValue<RandomVariable>(),
                         op->inputs[2]->getValue<int32_t>(), &op->outputs[0]->dimensions[2]);
            break;
        default:
            NN_FUZZER_CHECK(false) << "Unknown padding scheme";
    }
}

#define DEFINE_POOLING_OP_SIGNATURE(op)                            \
    const OperationSignature signature_##op##_explicit_float32 = { \
            .opType = ANEURALNETWORKS_##op,                        \
            .inputs =                                              \
                    {                                              \
                            INPUT_UNIFORM(TENSOR_FLOAT32),         \
                            PARAMETER_RANGE(INT32, 1, 3),          \
                            PARAMETER_RANGE(INT32, 1, 3),          \
                            PARAMETER_RANGE(INT32, 1, 3),          \
                            PARAMETER_RANGE(INT32, 1, 3),          \
                            PARAMETER_RANGE(INT32, 1, 3),          \
                            PARAMETER_RANGE(INT32, 1, 3),          \
                            RANDOM_INT_RANGE(1, 4),                \
                            RANDOM_INT_RANGE(1, 4),                \
                            PARAMETER_CHOICE(INT32, 0, 1, 2, 3),   \
                    },                                             \
            .outputs = {OUTPUT(TENSOR_FLOAT32)},                   \
            .constructor = poolingExplicitOpConstructor};          \
    const OperationSignature signature_##op##_implicit_float32 = { \
            .opType = ANEURALNETWORKS_##op,                        \
            .inputs =                                              \
                    {                                              \
                            INPUT_UNIFORM(TENSOR_FLOAT32),         \
                            PARAMETER_CHOICE(INT32, 1, 2),         \
                            PARAMETER_RANGE(INT32, 1, 3),          \
                            PARAMETER_RANGE(INT32, 1, 3),          \
                            RANDOM_INT_RANGE(1, 4),                \
                            RANDOM_INT_RANGE(1, 4),                \
                            PARAMETER_CHOICE(INT32, 0, 1, 2, 3),   \
                    },                                             \
            .outputs = {OUTPUT(TENSOR_FLOAT32)},                   \
            .constructor = poolingImplicitOpConstructor};

DEFINE_POOLING_OP_SIGNATURE(AVERAGE_POOL_2D);
DEFINE_POOLING_OP_SIGNATURE(L2_POOL_2D);
DEFINE_POOLING_OP_SIGNATURE(MAX_POOL_2D);

#undef DEFINE_POOLING_OP_SIGNATURE

const OperationSignature signature_CONV_2D_explicit_float32 = {
        .opType = ANEURALNETWORKS_CONV_2D,
        .inputs =
                {
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_CHOICE(INT32, 0, 1, 2, 3),
                },
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) {
            // Input, [batch, height_in, width_in, channel_in]
            op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, RandomVariableType::FREE};

            // Filter, [channel_out, height_flt, width_flt, channel_in]
            op->inputs[1]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, op->inputs[0]->dimensions[3]};

            // Bias, [channel_out]
            op->inputs[2]->dimensions = {op->inputs[1]->dimensions[0]};

            // Output, [batch, height_out, width_out, channel_out]
            op->outputs[0]->dimensions.resize(4);

            // batch and channel
            op->outputs[0]->dimensions[0] = op->inputs[0]->dimensions[0];
            op->outputs[0]->dimensions[3] = op->inputs[1]->dimensions[0];

            // height
            explicitPadding(op->inputs[0]->dimensions[1], op->inputs[1]->dimensions[1],
                            op->inputs[8]->getValue<int32_t>(), op->inputs[5]->getValue<int32_t>(),
                            op->inputs[6]->getValue<int32_t>(), &op->outputs[0]->dimensions[1]);

            // width
            explicitPadding(op->inputs[0]->dimensions[2], op->inputs[1]->dimensions[2],
                            op->inputs[7]->getValue<int32_t>(), op->inputs[3]->getValue<int32_t>(),
                            op->inputs[4]->getValue<int32_t>(), &op->outputs[0]->dimensions[2]);
        }};

const OperationSignature signature_CONV_2D_implicit_float32 = {
        .opType = ANEURALNETWORKS_CONV_2D,
        .inputs =
                {
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        PARAMETER_CHOICE(INT32, 1, 2),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_CHOICE(INT32, 0, 1, 2, 3),
                },
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) {
            // Input, [batch, height_in, width_in, channel_in]
            op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, RandomVariableType::FREE};

            // Filter, [channel_out, height_flt, width_flt, channel_in]
            op->inputs[1]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, op->inputs[0]->dimensions[3]};

            // Bias, [channel_out]
            op->inputs[2]->dimensions = {op->inputs[1]->dimensions[0]};

            // Output, [batch, height_out, width_out, channel_out]
            op->outputs[0]->dimensions.resize(4);

            // batch and channel
            op->outputs[0]->dimensions[0] = op->inputs[0]->dimensions[0];
            op->outputs[0]->dimensions[3] = op->inputs[1]->dimensions[0];

            // height and width
            auto paddingScheme = op->inputs[3]->getValue<int32_t>();
            switch (paddingScheme) {
                case ANEURALNETWORKS_PADDING_SAME:
                    samePadding(op->inputs[0]->dimensions[1], op->inputs[1]->dimensions[1],
                                op->inputs[5]->getValue<int32_t>(), &op->outputs[0]->dimensions[1]);
                    samePadding(op->inputs[0]->dimensions[2], op->inputs[1]->dimensions[2],
                                op->inputs[4]->getValue<int32_t>(), &op->outputs[0]->dimensions[2]);
                    break;
                case ANEURALNETWORKS_PADDING_VALID:
                    validPadding(op->inputs[0]->dimensions[1], op->inputs[1]->dimensions[1],
                                 op->inputs[5]->getValue<int32_t>(),
                                 &op->outputs[0]->dimensions[1]);
                    validPadding(op->inputs[0]->dimensions[2], op->inputs[1]->dimensions[2],
                                 op->inputs[4]->getValue<int32_t>(),
                                 &op->outputs[0]->dimensions[2]);
                    break;
                default:
                    NN_FUZZER_CHECK(false) << "Unknown padding scheme";
            }
        }};

const OperationSignature signature_DEPTHWISE_CONV_2D_explicit_float32 = {
        .opType = ANEURALNETWORKS_DEPTHWISE_CONV_2D,
        .inputs =
                {
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        RANDOM_INT_RANGE(1, 5),
                        PARAMETER_CHOICE(INT32, 0, 1, 2, 3),
                },
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) {
            // Input, [batch, height_in, width_in, channel_in]
            op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, RandomVariableType::FREE};

            // Filter, [1, height_flt, width_flt, channel_out]
            RandomVariable channelOut =
                    op->inputs[9]->getValue<RandomVariable>() * op->inputs[0]->dimensions[3];
            op->inputs[1]->dimensions = {1, RandomVariableType::FREE, RandomVariableType::FREE,
                                         channelOut};

            // Bias, [channel_out]
            op->inputs[2]->dimensions = {channelOut};

            // Output, [batch, height_out, width_out, channel_out]
            op->outputs[0]->dimensions.resize(4);

            // batch and channel
            op->outputs[0]->dimensions[0] = op->inputs[0]->dimensions[0];
            op->outputs[0]->dimensions[3] = channelOut;

            // height
            explicitPadding(op->inputs[0]->dimensions[1], op->inputs[1]->dimensions[1],
                            op->inputs[8]->getValue<int32_t>(), op->inputs[5]->getValue<int32_t>(),
                            op->inputs[6]->getValue<int32_t>(), &op->outputs[0]->dimensions[1]);

            // width
            explicitPadding(op->inputs[0]->dimensions[2], op->inputs[1]->dimensions[2],
                            op->inputs[7]->getValue<int32_t>(), op->inputs[3]->getValue<int32_t>(),
                            op->inputs[4]->getValue<int32_t>(), &op->outputs[0]->dimensions[2]);
        }};

const OperationSignature signature_DEPTHWISE_CONV_2D_implicit_float32 = {
        .opType = ANEURALNETWORKS_DEPTHWISE_CONV_2D,
        .inputs =
                {
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        PARAMETER_CHOICE(INT32, 1, 2),
                        PARAMETER_RANGE(INT32, 1, 3),
                        PARAMETER_RANGE(INT32, 1, 3),
                        RANDOM_INT_RANGE(1, 5),
                        PARAMETER_CHOICE(INT32, 0, 1, 2, 3),
                },
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) {
            // Input, [batch, height_in, width_in, channel_in]
            op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, RandomVariableType::FREE};

            // Filter, [1, height_flt, width_flt, channel_out]
            RandomVariable channelOut =
                    op->inputs[6]->getValue<RandomVariable>() * op->inputs[0]->dimensions[3];
            op->inputs[1]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, channelOut};

            // Bias, [channel_out]
            op->inputs[2]->dimensions = {channelOut};

            // Output, [batch, height_out, width_out, channel_out]
            op->outputs[0]->dimensions.resize(4);

            // batch and channel
            op->outputs[0]->dimensions[0] = op->inputs[0]->dimensions[0];
            op->outputs[0]->dimensions[3] = channelOut;

            // height and width
            auto paddingScheme = op->inputs[3]->getValue<int32_t>();
            switch (paddingScheme) {
                case ANEURALNETWORKS_PADDING_SAME:
                    samePadding(op->inputs[0]->dimensions[1], op->inputs[1]->dimensions[1],
                                op->inputs[5]->getValue<int32_t>(), &op->outputs[0]->dimensions[1]);
                    samePadding(op->inputs[0]->dimensions[2], op->inputs[1]->dimensions[2],
                                op->inputs[4]->getValue<int32_t>(), &op->outputs[0]->dimensions[2]);
                    break;
                case ANEURALNETWORKS_PADDING_VALID:
                    validPadding(op->inputs[0]->dimensions[1], op->inputs[1]->dimensions[1],
                                 op->inputs[5]->getValue<int32_t>(),
                                 &op->outputs[0]->dimensions[1]);
                    validPadding(op->inputs[0]->dimensions[2], op->inputs[1]->dimensions[2],
                                 op->inputs[4]->getValue<int32_t>(),
                                 &op->outputs[0]->dimensions[2]);
                    break;
                default:
                    NN_FUZZER_CHECK(false) << "Unknown padding scheme";
            }
        }};

// CONCATENATION with fixed number of input tensors.
static void concatConstructor(uint32_t numInputs, RandomOperation* op) {
    // TODO: Number of dimensions is always 4 for now.
    uint32_t numDims = getRandomChoice<uint32_t>({4});
    for (uint32_t i = 0; i < numInputs; i++) op->inputs[i]->dimensions.resize(numDims);
    op->outputs[0]->dimensions.resize(numDims);

    uint32_t axis = op->inputs[numInputs]->getValue<int32_t>();
    for (uint32_t i = 0; i < numDims; i++) {
        op->inputs[0]->dimensions[i] = RandomVariableType::FREE;
        op->outputs[0]->dimensions[i] = op->inputs[0]->dimensions[i];
        for (uint32_t j = 1; j < numInputs; j++) {
            if (axis == i) {
                op->inputs[j]->dimensions[i] = RandomVariableType::FREE;
                op->outputs[0]->dimensions[i] =
                        op->outputs[0]->dimensions[i] + op->inputs[j]->dimensions[i];
            } else {
                op->inputs[j]->dimensions[i] = op->inputs[0]->dimensions[i];
            }
        }
    }
}

const OperationSignature signature_CONCAT_2_float32 = {
        .opType = ANEURALNETWORKS_CONCATENATION,
        .inputs = {INPUT_UNIFORM(TENSOR_FLOAT32), INPUT_UNIFORM(TENSOR_FLOAT32),
                   PARAMETER_RANGE(INT32, 0, 3)},
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) { concatConstructor(/*numInputs=*/2, op); }};

const OperationSignature signature_CONCAT_3_float32 = {
        .opType = ANEURALNETWORKS_CONCATENATION,
        .inputs = {INPUT_UNIFORM(TENSOR_FLOAT32), INPUT_UNIFORM(TENSOR_FLOAT32),
                   INPUT_UNIFORM(TENSOR_FLOAT32), PARAMETER_RANGE(INT32, 0, 3)},
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) { concatConstructor(/*numInputs=*/3, op); }};

const OperationSignature signature_RESIZE_BILINEAR_float32 = {
        .opType = ANEURALNETWORKS_RESIZE_BILINEAR,
        .inputs =
                {
                        INPUT_UNIFORM(TENSOR_FLOAT32),
                        RANDOM_INT_RANGE(1, 10),
                        RANDOM_INT_RANGE(1, 10),
                },
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) {
            op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, RandomVariableType::FREE};
            op->outputs[0]->dimensions = {
                    op->inputs[0]->dimensions[0], op->inputs[1]->getValue<RandomVariable>(),
                    op->inputs[2]->getValue<RandomVariable>(), op->inputs[0]->dimensions[3]};
        }};

const OperationSignature signature_SPACE_TO_DEPTH_float32 = {
        .opType = ANEURALNETWORKS_SPACE_TO_DEPTH,
        .inputs = {INPUT_UNIFORM(TENSOR_FLOAT32), PARAMETER_RANGE(INT32, 1, 5)},
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) {
            op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, RandomVariableType::FREE};
            int32_t blockSize = op->inputs[1]->getValue<int32_t>();
            // blockSize must be a divisor of both the input height and width
            auto tmp1 = op->inputs[0]->dimensions[1] % blockSize;
            auto tmp2 = op->inputs[0]->dimensions[2] % blockSize;
            tmp1.setEqual(0);
            tmp2.setEqual(0);
            op->outputs[0]->dimensions = {op->inputs[0]->dimensions[0],
                                          op->inputs[0]->dimensions[1] / blockSize,
                                          op->inputs[0]->dimensions[2] / blockSize,
                                          op->inputs[0]->dimensions[3] * blockSize * blockSize};
        }};

const OperationSignature signature_DEPTH_TO_SPACE_float32 = {
        .opType = ANEURALNETWORKS_DEPTH_TO_SPACE,
        .inputs = {INPUT_UNIFORM(TENSOR_FLOAT32), PARAMETER_RANGE(INT32, 1, 3)},
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) {
            op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, RandomVariableType::FREE};
            int32_t blockSize = op->inputs[1]->getValue<int32_t>();
            // blockSize must be a divisor of the input depth
            auto tmp = op->inputs[0]->dimensions[3] % (blockSize * blockSize);
            tmp.setEqual(0);
            op->outputs[0]->dimensions = {op->inputs[0]->dimensions[0],
                                          op->inputs[0]->dimensions[1] * blockSize,
                                          op->inputs[0]->dimensions[2] * blockSize,
                                          op->inputs[0]->dimensions[3] / blockSize / blockSize};
        }};

const OperationSignature signature_EMBEDDING_LOOKUP_float32 = {
        .opType = ANEURALNETWORKS_EMBEDDING_LOOKUP,
        .inputs = {PARAMETER_NONE(TENSOR_INT32), INPUT_UNIFORM(TENSOR_FLOAT32)},
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor =
                [](RandomOperation* op) {
                    op->inputs[0]->dimensions = {RandomVariableType::FREE};
                    op->inputs[1]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                                 RandomVariableType::FREE,
                                                 RandomVariableType::FREE};
                    op->outputs[0]->dimensions = {
                            op->inputs[0]->dimensions[0], op->inputs[1]->dimensions[1],
                            op->inputs[1]->dimensions[2], op->inputs[1]->dimensions[3]};
                },
        .finalizer =
                [](RandomOperation* op) {
                    uint32_t dimValue = op->inputs[1]->dimensions[0].getValue();
                    uint32_t numElements = op->inputs[0]->getNumberOfElements();
                    int32_t* data = reinterpret_cast<int32_t*>(op->inputs[0]->buffer.data());
                    for (uint32_t i = 0; i < numElements; i++) {
                        data[i] = getUniform<int32_t>(0, dimValue - 1);
                    }
                }};

const OperationSignature signature_HASHTABLE_LOOKUP_float32 = {
        .opType = ANEURALNETWORKS_HASHTABLE_LOOKUP,
        .inputs = {PARAMETER_NONE(TENSOR_INT32), PARAMETER_NONE(TENSOR_INT32),
                   INPUT_UNIFORM(TENSOR_FLOAT32)},
        .outputs = {OUTPUT(TENSOR_FLOAT32), OUTPUT_QUANT(TENSOR_QUANT8_ASYMM, 1.0f, 0)},
        .constructor =
                [](RandomOperation* op) {
                    op->inputs[0]->dimensions = {RandomVariableType::FREE};
                    op->inputs[1]->dimensions = {RandomVariableType::FREE};
                    op->inputs[2]->dimensions = {op->inputs[1]->dimensions[0],
                                                 RandomVariableType::FREE, RandomVariableType::FREE,
                                                 RandomVariableType::FREE};
                    op->outputs[0]->dimensions = {
                            op->inputs[0]->dimensions[0], op->inputs[2]->dimensions[1],
                            op->inputs[2]->dimensions[2], op->inputs[2]->dimensions[3]};
                    op->outputs[1]->dimensions = {op->inputs[0]->dimensions[0]};
                },
        .finalizer =
                [](RandomOperation* op) {
                    uint32_t n = op->inputs[1]->getNumberOfElements();
                    int32_t* data = reinterpret_cast<int32_t*>(op->inputs[1]->buffer.data());
                    int32_t val = 0;
                    for (uint32_t i = 0; i < n; i++) {
                        data[i] = val;
                        val += getUniform<int32_t>(1, 2);
                    }
                    uint32_t k = op->inputs[0]->getNumberOfElements();
                    data = reinterpret_cast<int32_t*>(op->inputs[0]->buffer.data());
                    for (uint32_t i = 0; i < k; i++) {
                        data[i] = getUniform<int32_t>(0, val);
                    }
                }};

const OperationSignature signature_FULLY_CONNECTED_float32 = {
        .opType = ANEURALNETWORKS_FULLY_CONNECTED,
        .inputs = {INPUT_UNIFORM(TENSOR_FLOAT32), INPUT_UNIFORM(TENSOR_FLOAT32),
                   INPUT_UNIFORM(TENSOR_FLOAT32), PARAMETER_CHOICE(INT32, 0, 1, 2, 3)},
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) {
            // TODO: Number of dimensions is always 4 for now.
            op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, RandomVariableType::FREE};
            op->inputs[1]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE};
            op->inputs[2]->dimensions = {op->inputs[1]->dimensions[0]};
            auto numElements = op->inputs[0]->dimensions[0] * op->inputs[0]->dimensions[1] *
                               op->inputs[0]->dimensions[2] * op->inputs[0]->dimensions[3];
            (numElements % op->inputs[1]->dimensions[1]).setEqual(0);
            op->outputs[0]->dimensions = {numElements / op->inputs[1]->dimensions[1],
                                          op->inputs[1]->dimensions[0]};
        }};

const OperationSignature signature_RESHAPE_float32 = {
        .opType = ANEURALNETWORKS_RESHAPE,
        .inputs = {INPUT_UNIFORM(TENSOR_FLOAT32),
                   {.dataType = Type::TENSOR_INT32,
                    .type = RandomOperandType::CONST,
                    .constructor =
                            [](RandomOperand* op) {
                                op->randomBuffer = {
                                        RandomVariableType::FREE, RandomVariableType::FREE,
                                        RandomVariableType::FREE, RandomVariableType::FREE};
                            }}},
        .outputs = {OUTPUT(TENSOR_FLOAT32)},
        .constructor = [](RandomOperation* op) {
            // TODO: Number of dimensions is always 4 for now.
            op->inputs[0]->dimensions = {RandomVariableType::FREE, RandomVariableType::FREE,
                                         RandomVariableType::FREE, RandomVariableType::FREE};
            op->inputs[1]->dimensions = {4};
            op->outputs[0]->dimensions = op->inputs[1]->randomBuffer;
            auto numInputElements = op->inputs[0]->dimensions[0] * op->inputs[0]->dimensions[1] *
                                    op->inputs[0]->dimensions[2] * op->inputs[0]->dimensions[3];
            auto numOutputElements = op->outputs[0]->dimensions[0] * op->outputs[0]->dimensions[1] *
                                     op->outputs[0]->dimensions[2] * op->outputs[0]->dimensions[3];
            numInputElements.setEqual(numOutputElements);
        }};

#undef INPUT_UNIFORM
#undef PARAMETER_CONST
#undef PARAMETER_RANGE
#undef PARAMETER_CHOICE
#undef RANDOM_INT_RANGE
#undef RANDOM_INT_CHOICE
#undef OUTPUT
#undef OUTPUT_QUANT

OperationManager::OperationManager() {
    mOperationSignatures.push_back(signature_ADD_float32);
    mOperationSignatures.push_back(signature_MUL_float32);
    mOperationSignatures.push_back(signature_FLOOR_float32);
    mOperationSignatures.push_back(signature_LOGISTIC_float32);
    mOperationSignatures.push_back(signature_RELU_float32);
    mOperationSignatures.push_back(signature_RELU1_float32);
    mOperationSignatures.push_back(signature_RELU6_float32);
    mOperationSignatures.push_back(signature_TANH_float32);
    mOperationSignatures.push_back(signature_AVERAGE_POOL_2D_explicit_float32);
    mOperationSignatures.push_back(signature_AVERAGE_POOL_2D_implicit_float32);
    mOperationSignatures.push_back(signature_L2_POOL_2D_explicit_float32);
    mOperationSignatures.push_back(signature_L2_POOL_2D_implicit_float32);
    mOperationSignatures.push_back(signature_L2_NORMALIZATION_float32);
    mOperationSignatures.push_back(signature_LOCAL_RESPONSE_NORMALIZATION_float32);
    mOperationSignatures.push_back(signature_MAX_POOL_2D_explicit_float32);
    mOperationSignatures.push_back(signature_MAX_POOL_2D_implicit_float32);
    mOperationSignatures.push_back(signature_CONV_2D_explicit_float32);
    mOperationSignatures.push_back(signature_CONV_2D_implicit_float32);
    mOperationSignatures.push_back(signature_DEPTHWISE_CONV_2D_explicit_float32);
    mOperationSignatures.push_back(signature_DEPTHWISE_CONV_2D_implicit_float32);
    mOperationSignatures.push_back(signature_CONCAT_2_float32);
    mOperationSignatures.push_back(signature_CONCAT_3_float32);
    mOperationSignatures.push_back(signature_RESIZE_BILINEAR_float32);
    mOperationSignatures.push_back(signature_DEPTH_TO_SPACE_float32);
    mOperationSignatures.push_back(signature_SPACE_TO_DEPTH_float32);
    mOperationSignatures.push_back(signature_EMBEDDING_LOOKUP_float32);
    mOperationSignatures.push_back(signature_HASHTABLE_LOOKUP_float32);
    mOperationSignatures.push_back(signature_FULLY_CONNECTED_float32);
    mOperationSignatures.push_back(signature_RESHAPE_float32);
}

const OperationSignature& OperationManager::getRandomOperation() const {
    return getRandomChoice(mOperationSignatures);
}

}  // namespace fuzzing_test
}  // namespace nn
}  // namespace android
