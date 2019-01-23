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

#ifndef ANDROID_ML_NN_COMMON_OPERATIONS_UTILS_H
#define ANDROID_ML_NN_COMMON_OPERATIONS_UTILS_H

#include "Utils.h"

#include <cstdint>
#include <vector>

namespace android {
namespace nn {

// The NN_RET_CHECK family of macros defined below is similar to the CHECK family defined in
// system/core/base/include/android-base/logging.h
//
// The difference is that NN_RET_CHECK macros use LOG(ERROR) instead of LOG(FATAL)
// and return false instead of aborting.

// Logs an error and returns false. Append context using << after. For example:
//
//   NN_RET_CHECK_FAIL() << "Something went wrong";
//
// The containing function must return a bool.
#define NN_RET_CHECK_FAIL() return ::android::nn::FalseyErrorStream() << "NN_RET_CHECK failed: "

// Logs an error and returns false if condition is false. Extra logging can be appended using <<
// after. For example:
//
//   NN_RET_CHECK(false) << "Something went wrong";
//
// The containing function must return a bool.
#define NN_RET_CHECK(condition) \
    while (UNLIKELY(!(condition))) NN_RET_CHECK_FAIL() << #condition << " "

// Helper for NN_CHECK_xx(x, y) macros.
#define NN_RET_CHECK_OP(LHS, RHS, OP)                                                 \
    for (auto _values = ::android::base::MakeEagerEvaluator(LHS, RHS);                \
         UNLIKELY(!(_values.lhs OP _values.rhs));                                     \
         /* empty */)                                                                 \
    NN_RET_CHECK_FAIL() << #LHS << " " << #OP << " " << #RHS << " (" << #LHS << " = " \
                        << _values.lhs << ", " << #RHS << " = " << _values.rhs << ") "

// Logs an error and returns false if a condition between x and y does not hold. Extra logging can
// be appended using << after. For example:
//
//   NN_RET_CHECK_EQ(a, b) << "Something went wrong";
//
// The values must implement the appropriate comparison operator as well as
// `operator<<(std::ostream&, ...)`.
// The containing function must return a bool.
#define NN_RET_CHECK_EQ(x, y) NN_RET_CHECK_OP(x, y, ==)
#define NN_RET_CHECK_NE(x, y) NN_RET_CHECK_OP(x, y, !=)
#define NN_RET_CHECK_LE(x, y) NN_RET_CHECK_OP(x, y, <=)
#define NN_RET_CHECK_LT(x, y) NN_RET_CHECK_OP(x, y, <)
#define NN_RET_CHECK_GE(x, y) NN_RET_CHECK_OP(x, y, >=)
#define NN_RET_CHECK_GT(x, y) NN_RET_CHECK_OP(x, y, >)

// DEPRECATED. Use NN_RET_CHECK instead.
#define NN_CHECK(x) NN_RET_CHECK(x)
#define NN_OPS_CHECK(x) NN_RET_CHECK(x)

// DEPRECATED. Use NN_RET_CHECK_EQ instead.
#define NN_CHECK_EQ(x, y) NN_RET_CHECK_EQ(x, y)

// A wrapper around LOG(ERROR) that can be implicitly converted to bool (always evaluates to false).
// Used to implement stream logging in NN_RET_CHECK.
class FalseyErrorStream {
    DISALLOW_COPY_AND_ASSIGN(FalseyErrorStream);

   public:
    FalseyErrorStream() {}

    template <typename T>
    FalseyErrorStream& operator<<(const T& value) {
        mBuffer << value;
        return *this;
    }

    ~FalseyErrorStream() { LOG(ERROR) << mBuffer.str(); }

    operator bool() const { return false; }

   private:
    std::ostringstream mBuffer;
};

// An 8-bit boolean type (sizeof(bool) is implementation-defined).
typedef uint8_t bool8;

enum PaddingScheme {
    kPaddingUnknown = 0,
    kPaddingSame = 1,
    kPaddingValid = 2,
};

// The type and dimensions of an operand.
struct Shape {
    OperandType type;
    std::vector<uint32_t> dimensions;
    float scale;
    int32_t offset;
};

// Provides information available during graph creation to validate an operation.
class IOperationValidationContext {
   public:
    virtual ~IOperationValidationContext() {}

    // The HAL version of the environment in which the operation is to be
    // executed.
    //
    // Operation validation logic needs to handle all HAL versions to support
    // the following use cases (assume in these examples that the latest HAL
    // version is V1_2):
    // 1. Our runtime wants to distribute work to a driver implementing an older
    //    HAL version and calls, for example,
    //    compliantWithV1_0(const V1_2::Model&).
    // 2. A driver implements an older HAL version and delegates model
    //    validation to, for example, validateModel(const V1_0::Model&).
    //
    // If getHalVersion() returns HalVersion::V1_0 and the operation
    // is only supported since HalVersion::V1_1, validation will fail.
    virtual HalVersion getHalVersion() const = 0;

    virtual uint32_t getNumInputs() const = 0;
    virtual OperandType getInputType(uint32_t index) const = 0;
    virtual Shape getInputShape(uint32_t index) const = 0;

    virtual uint32_t getNumOutputs() const = 0;
    virtual OperandType getOutputType(uint32_t index) const = 0;
    virtual Shape getOutputShape(uint32_t index) const = 0;
};

// Provides inputs and outputs during operation execution.
class IOperationExecutionContext {
   public:
    virtual ~IOperationExecutionContext() {}

    virtual uint32_t getNumInputs() const = 0;
    virtual OperandType getInputType(uint32_t index) const = 0;
    virtual Shape getInputShape(uint32_t index) const = 0;
    virtual const void* getInputBuffer(uint32_t index) const = 0;

    virtual uint32_t getNumOutputs() const = 0;
    virtual OperandType getOutputType(uint32_t index) const = 0;
    virtual Shape getOutputShape(uint32_t index) const = 0;
    virtual void* getOutputBuffer(uint32_t index) = 0;

    // Updates the output shape, allocating the buffer if necessary.
    virtual bool setOutputShape(uint32_t index, const Shape& shape) = 0;

    virtual bool isNullInput(uint32_t index) const = 0;

    template <typename T>
    const T* getInputBuffer(uint32_t index) const {
        return reinterpret_cast<const T*>(getInputBuffer(index));
    }

    template <typename T>
    T* getOutputBuffer(uint32_t index) {
        return reinterpret_cast<T*>(getOutputBuffer(index));
    }

    template <typename T>
    T getInputValue(uint32_t index) const {
        return getInputBuffer<T>(index)[0];
    }
};

// Verifies that the number and types of operation inputs are as expected.
bool validateInputTypes(const IOperationValidationContext* context,
                        const std::vector<OperandType>& expectedTypes);

// Verifies that the number and types of operation outputs are as expected.
bool validateOutputTypes(const IOperationValidationContext* context,
                         const std::vector<OperandType>& expectedTypes);

// Verifies that the HAL version specified in the context is greater or equal
// than the minimal supported HAL version.
bool validateHalVersion(const IOperationValidationContext* context,
                        HalVersion minSupportedHalVersion);

// Verifies that the two shapes are the same.
bool SameShape(const Shape& in1, const Shape& in2);

// Sets out to the same shape as in.
bool SetShape(const Shape& in, Shape* out);

// Combine two tensor dimensions, both can have unspecified dimensions.
bool combineDimensions(const std::vector<uint32_t>& lhs, const std::vector<uint32_t>& rhs,
                       std::vector<uint32_t>* combined);

// Return the total number of elements, i.e. all the dimensions multiplied
// together. For a scalar, returns one.
uint32_t getNumberOfElements(const Shape& shape);
uint32_t getNumberOfElements(const Shape& shape,
                             size_t firstAxisInclusive,
                             size_t lastAxisExclusive);

uint32_t getNumberOfDimensions(const Shape& shape);

uint32_t getSizeOfDimension(const Shape& shape, uint32_t dimensionIdx);

// Converts an axis index from the range [-dims, dims) into the range [0, dims).
bool handleNegativeAxis(int32_t numberOfDimensions, int32_t* axis);

inline bool handleNegativeAxis(const Shape& shape, int32_t* axis) {
    return handleNegativeAxis(getNumberOfDimensions(shape), axis);
}

inline uint32_t computeOutSize(uint32_t imageSize, uint32_t filterSize, uint32_t stride,
                               uint32_t paddingHead, uint32_t paddingTail) {
    return (imageSize - filterSize + stride + paddingHead + paddingTail) / stride;
}

inline uint32_t computeOutSize(uint32_t imageSize, uint32_t filterSize, uint32_t stride,
                               uint32_t dilationRate, uint32_t paddingHead, uint32_t paddingTail) {
    uint32_t effectiveFilterSize = ((filterSize - 1) * dilationRate + 1);
    return (imageSize - effectiveFilterSize + stride + paddingHead + paddingTail) / stride;
}

inline uint32_t computeOutSizeTransposeConv(uint32_t imageSize, uint32_t filterSize,
                                            uint32_t stride, uint32_t paddingHead,
                                            uint32_t paddingTail) {
    return imageSize * stride + filterSize - stride - paddingHead - paddingTail;
}

__wur
bool QuantizeMultiplierSmallerThanOne(double double_multiplier,
                                      int32_t* quantized_multiplier,
                                      int32_t* right_shift);

__wur
bool QuantizeMultiplierGreaterThanOne(double double_multiplier,
                                      int32_t* quantized_multiplier,
                                      int* left_shift);

__wur
bool GetQuantizedConvolutionMultipler(const Shape& inputShape,
                                      const Shape& filterShape,
                                      const Shape& biasShape,
                                      const Shape& outputShape,
                                      float* multiplier);

void CalculateActivationRangeUint8(int32_t activation,
                                   const Shape& outputShape,
                                   int32_t* act_min,
                                   int32_t* act_max);

void CalculateActivationRangeFloat(int32_t activation,
                                   float* activation_min,
                                   float* activation_max);

int32_t CalculateInputRadius(int input_integer_bits, int input_left_shift);

inline void calculateExplicitPadding(int32_t in_size, int32_t stride, int32_t dilation_factor,
                                     int32_t filter_size, int32_t padding_implicit,
                                     int32_t* padding_head, int32_t* padding_tail) {
    *padding_head = 0;
    *padding_tail = 0;

    int32_t effective_filter_size = (filter_size - 1) * dilation_factor + 1;

    if (padding_implicit == kPaddingSame) {
        int32_t out_size = (in_size + stride - 1) / stride;
        int32_t tmp = (out_size - 1) * stride + effective_filter_size;
        if (tmp > in_size) {
            *padding_head = (tmp - in_size) / 2;
            *padding_tail = (tmp - in_size) - *padding_head;
        }
    }
}

inline void calculateExplicitPadding(int32_t in_size, int32_t stride, int32_t filter_size,
                                     int32_t padding_implicit, int32_t* padding_head,
                                     int32_t* padding_tail) {
    calculateExplicitPadding(in_size, stride, 1, filter_size, padding_implicit, padding_head,
                             padding_tail);
}

inline PaddingScheme getPaddingScheme(int32_t inWidth, int32_t inHeight,
                                      int32_t strideWidth, int32_t strideHeight,
                                      int32_t filterWidth, int32_t filterHeight,
                                      int32_t paddingLeft, int32_t paddingRight,
                                      int32_t paddingTop, int32_t paddingBottom) {
    if (paddingLeft == 0 && paddingRight == 0 && paddingTop == 0 && paddingBottom == 0) {
        return kPaddingValid;
    }

    int32_t expectedPaddingLeft, expectedPaddingRight;
    int32_t expectedPaddingTop, expectedPaddingBottom;

    calculateExplicitPadding(inWidth, strideWidth, filterWidth, kPaddingSame,
                             &expectedPaddingLeft, &expectedPaddingRight);
    calculateExplicitPadding(inHeight, strideHeight, filterHeight, kPaddingSame,
                             &expectedPaddingTop, &expectedPaddingBottom);
    if (expectedPaddingLeft == paddingLeft && expectedPaddingRight == paddingRight &&
        expectedPaddingTop == paddingTop && expectedPaddingBottom == paddingBottom) {
        return kPaddingSame;
    } else {
        return kPaddingUnknown;
    }
}

// TODO: add more documentation from upstream.
// Reverse order of bits in the mask to match the expected order in kernel
inline int ReverseMaskBits(int mask, int num_dimensions) {
  int out = 0;
  for (int dim = 0; dim < num_dimensions; dim++) {
    out <<= 1;
    out += (mask & 1);
    mask >>= 1;
  }
  return out;
}

// TODO: add more documentation from upstream.
inline int32_t PositiveRemainder(int32_t dividend, int32_t divisor) {
  return (divisor + (dividend % divisor)) % divisor;
}

// TODO: add more documentation from upstream.
inline int32_t ClampedIndex(int32_t index, int dim, bool pos_stride) {
  return pos_stride
             ? (index >= dim ? dim
                             : PositiveRemainder(
                                   std::min(std::max(index, -dim), dim), dim))
             : (index < -dim
                    ? -1
                    : PositiveRemainder(
                          std::min(std::max(index, -dim), dim - 1), dim));
}

// Broadcasts input shape against one another and puts the result into output
// shape. Returns true on success and false on error.
bool calculateBroadcastedShape(const Shape& in1, const Shape& in2, Shape* out);

// Dequantizes a value and quantizes it back using new scale and offset.
uint8_t requantize(uint8_t value, const Shape& oldShape, const Shape& newShape);

// Preparation functions for the corresponding ops
bool addMulPrepare(const Shape& in1, const Shape& in2, Shape* out1);

bool floorPrepare(const Shape& input, Shape* output);

bool dequantizePrepare(const Shape& input, Shape* output);

bool quantizePrepare(const Shape& input, Shape* output);

bool depthwiseConvPrepare(const Shape& input, const Shape& filter, const Shape& bias,
                          int32_t padding_left, int32_t padding_right, int32_t padding_top,
                          int32_t padding_bottom, int32_t stride_width, int32_t stride_height,
                          int32_t depth_multiplier, int32_t dilation_width_factor,
                          int32_t dilation_height_factor, Shape* output);

bool convPrepare(const Shape& input, const Shape& filter, const Shape& bias, int32_t padding_left,
                 int32_t padding_right, int32_t padding_top, int32_t padding_bottom,
                 int32_t stride_width, int32_t stride_height, int32_t dilation_width_factor,
                 int32_t dilation_height_factor, Shape* output);

bool genericPoolingPrepare(const Shape& input,
                           int32_t padding_left, int32_t padding_right,
                           int32_t padding_top, int32_t padding_bottom,
                           int32_t stride_width, int32_t stride_height,
                           int32_t filter_width, int32_t filter_height,
                           Shape* output);

bool genericActivationPrepare(const Shape& input, Shape* output);

bool fullyConnectedPrepare(const Shape& input,
                           const Shape& weights,
                           const Shape& bias,
                           Shape* output);

bool concatenationPrepare(const std::vector<Shape>& inputShapes,
                          int32_t axis,
                          Shape* output);

bool genericNormalizationPrepare(const Shape& input, Shape* output);

bool reshapePrepare(const Shape& input,
                    const int32_t* targetDims,
                    const int32_t targetDimsSize,
                    Shape* output);

bool resizeBilinearPrepare(const Shape& input,
                           int32_t height,
                           int32_t width,
                           Shape* output);

bool depthToSpacePrepare(const Shape& input,
                         int32_t blockSize,
                         Shape* output);

bool spaceToDepthPrepare(const Shape& input,
                         int32_t blockSize,
                         Shape* output);

bool embeddingLookupPrepare(const Shape &valueShape,
                            const Shape &lookupShape,
                            Shape *outputShape);

bool hashtableLookupPrepare(const Shape &lookupShape,
                            const Shape &keyShape,
                            const Shape &valueShape,
                            Shape *outputShape,
                            Shape *hitShape);

bool padPrepare(const Shape& input,
                const int32_t* paddingsData,
                const Shape& paddingsShape,
                Shape* output);

bool batchToSpacePrepare(const Shape& input,
                         const int32_t* blockSizeData,
                         const Shape& blockSizeShape,
                         Shape* output);

bool spaceToBatchPrepare(const Shape& input,
                         const int32_t* blockSizeData,
                         const Shape& blockSizeShape,
                         const int32_t* paddingsData,
                         const Shape& paddingsShape,
                         Shape* output);

bool squeezePrepare(const Shape& input,
                    const int32_t* squeezeDims,
                    const Shape& squeezeDimsShape,
                    Shape* output);

bool transposePrepare(const Shape& input,
                      const int32_t* permData,
                      const Shape& permShape,
                      Shape* output);

bool meanPrepare(const Shape& input,
                 const int32_t* axisData,
                 const Shape& axisShape,
                 bool keepDims,
                 Shape* output);

bool stridedSlicePrepare(const Shape& input,
                         const int32_t* beginData, const Shape& beginShape,
                         const int32_t* endData, const Shape& endShape,
                         const int32_t* stridesData, const Shape& stridesShape,
                         int32_t beginMask, int32_t endMask, int32_t shrinkAxisMask,
                         Shape* output);

bool argMinMaxPrepare(const Shape& input, int32_t axis, Shape* output);

bool splitPrepare(const Shape& input, int32_t axis, int32_t numOutputs, std::vector<Shape>* output);

bool groupedConvPrepare(const Shape& input, const Shape& filter, const Shape& bias,
                        int32_t padding_left, int32_t padding_right, int32_t padding_top,
                        int32_t padding_bottom, int32_t stride_width, int32_t stride_height,
                        int32_t numGroups, Shape* output);

bool transposeConvPrepare(const Shape& input, const Shape& filter, const Shape& bias,
                          int32_t padding_left, int32_t padding_right, int32_t padding_top,
                          int32_t padding_bottom, int32_t stride_width, int32_t stride_height,
                          Shape* output);

// Transposes the first two dimensions.
template <typename T>
inline bool transposeFirstTwoDimensions(const T* buffer, const Shape& shape, T* transposedBuffer) {
    const int numDims = getNumberOfDimensions(shape);
    NN_RET_CHECK(numDims >= 2);
    const int firstDim = getSizeOfDimension(shape, 0);
    const int secondDim = getSizeOfDimension(shape, 1);
    int blockSize = 1;
    for (int i = 2; i < numDims; ++i) {
        blockSize *= getSizeOfDimension(shape, i);
    }

    for (int i = 0; i < firstDim; ++i) {
        for (int j = 0; j < secondDim; ++j) {
            for (int k = 0; k < blockSize; ++k) {
                transposedBuffer[(j * firstDim + i) * blockSize + k] =
                        buffer[(i * secondDim + j) * blockSize + k];
            }
        }
    }
    return true;
}

inline bool transposeFirstTwoDimensions(const Shape& shape, Shape* transposedShape) {
    NN_RET_CHECK(getNumberOfDimensions(shape) >= 2);
    *transposedShape = shape;
    transposedShape->dimensions[0] = shape.dimensions[1];
    transposedShape->dimensions[1] = shape.dimensions[0];
    return true;
}

} // namespace nn
} // namespace android

#endif // ANDROID_ML_NN_COMMON_OPERATIONS_UTILS_H
