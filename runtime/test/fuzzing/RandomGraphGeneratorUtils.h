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

#ifndef ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_FUZZING_RANDOM_GRAPH_GENERATOR_UTILS_H
#define ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_FUZZING_RANDOM_GRAPH_GENERATOR_UTILS_H

#include "RandomGraphGenerator.h"
#include "RandomVariable.h"

#include "TestNeuralNetworksWrapper.h"

#include <chrono>
#include <fstream>
#include <memory>
#include <random>
#include <sstream>
#include <string>

namespace android {
namespace nn {
namespace fuzzing_test {

#define NN_FUZZER_LOG_INIT(filename) Logger::get()->init((filename))
#define NN_FUZZER_LOG_CLOSE Logger::get()->close()
#define NN_FUZZER_LOG              \
    if (!Logger::get()->enabled()) \
        ;                          \
    else                           \
        LoggerStream(false) << alignedString(__FUNCTION__, 20)
#define NN_FUZZER_CHECK(condition)                                                             \
    if ((condition))                                                                           \
        ;                                                                                      \
    else                                                                                       \
        LoggerStream(true) << alignedString(__FUNCTION__, 20) << "Check failed " << #condition \
                           << ": "

// A Singleton manages the global configurations of logging.
class Logger {
   public:
    static Logger* get() {
        static Logger instance;
        return &instance;
    }
    void init(const std::string& filename) {
        os.open(filename);
        mStart = std::chrono::high_resolution_clock::now();
    }
    bool enabled() { return os.is_open(); }
    void close() {
        if (os.is_open()) os.close();
    }
    void log(const std::string& str) {
        if (os.is_open()) os << getElapsedTime() << str << std::flush;
    }

   private:
    Logger() = default;
    Logger(const Logger&) = delete;
    Logger& operator=(const Logger&) = delete;
    std::string getElapsedTime();
    std::ofstream os;
    std::chrono::time_point<std::chrono::high_resolution_clock> mStart;
};

// Controls logging of a single line.
class LoggerStream {
   public:
    LoggerStream(bool abortAfterLog) : mAbortAfterLog(abortAfterLog) {}
    ~LoggerStream() {
        Logger::get()->log(ss.str() + '\n');
        if (mAbortAfterLog) abort();
    }

    template <typename T>
    LoggerStream& operator<<(const T& str) {
        ss << str;
        return *this;
    }

   private:
    LoggerStream(const LoggerStream&) = delete;
    LoggerStream& operator=(const LoggerStream&) = delete;
    std::stringstream ss;
    bool mAbortAfterLog;
};

template <typename T>
inline std::string toString(const T& obj) {
    return std::to_string(obj);
}

template <typename T>
inline std::string joinStr(const std::string& joint, const std::vector<T>& items) {
    std::stringstream ss;
    for (uint32_t i = 0; i < items.size(); i++) {
        if (i == 0) {
            ss << toString(items[i]);
        } else {
            ss << joint << toString(items[i]);
        }
    }
    return ss.str();
}

template <typename T, class Function>
inline std::string joinStr(const std::string& joint, const std::vector<T>& items, Function str) {
    std::stringstream ss;
    for (uint32_t i = 0; i < items.size(); i++) {
        if (i != 0) ss << joint;
        ss << str(items[i]);
    }
    return ss.str();
}

template <typename T>
inline std::string joinStr(const std::string& joint, int limit, const std::vector<T>& items) {
    if (items.size() > static_cast<size_t>(limit)) {
        std::vector<T> topMax(items.begin(), items.begin() + limit);
        return joinStr(joint, topMax) + ", (" + toString(items.size() - limit) + " ommited), " +
               toString(items.back());
    } else {
        return joinStr(joint, items);
    }
}

// TODO: Currently only 1.0 operations and operand types.
static const char* kOperationNames[] = {
        "ADD",
        "AVERAGE_POOL_2D",
        "CONCATENATION",
        "CONV_2D",
        "DEPTHWISE_CONV_2D",
        "DEPTH_TO_SPACE",
        "DEQUANTIZE",
        "EMBEDDING_LOOKUP",
        "FLOOR",
        "FULLY_CONNECTED",
        "HASHTABLE_LOOKUP",
        "L2_NORMALIZATION",
        "L2_POOL",
        "LOCAL_RESPONSE_NORMALIZATION",
        "LOGISTIC",
        "LSH_PROJECTION",
        "LSTM",
        "MAX_POOL_2D",
        "MUL",
        "RELU",
        "RELU1",
        "RELU6",
        "RESHAPE",
        "RESIZE_BILINEAR",
        "RNN",
        "SOFTMAX",
        "SPACE_TO_DEPTH",
        "SVDF",
        "TANH",
};

static const char* kTypeNames[] = {
        "FLOAT32", "INT32", "UINT32", "TENSOR_FLOAT32", "TENSOR_INT32", "TENSOR_QUANT8_ASYMM",
};

static const char* kLifeTimeNames[6] = {
        "TEMPORARY_VARIABLE", "MODEL_INPUT",        "MODEL_OUTPUT",
        "CONSTANT_COPY",      "CONSTANT_REFERENCE", "NO_VALUE",
};

static const bool kScalarDataType[]{
        true,   // ANEURALNETWORKS_FLOAT32
        true,   // ANEURALNETWORKS_INT32
        true,   // ANEURALNETWORKS_UINT32
        false,  // ANEURALNETWORKS_TENSOR_FLOAT32
        false,  // ANEURALNETWORKS_TENSOR_INT32
        false,  // ANEURALNETWORKS_TENSOR_SYMMETRICAL_QUANT8
};

static const uint32_t kSizeOfDataType[]{
        4,  // ANEURALNETWORKS_FLOAT32
        4,  // ANEURALNETWORKS_INT32
        4,  // ANEURALNETWORKS_UINT32
        4,  // ANEURALNETWORKS_TENSOR_FLOAT32
        4,  // ANEURALNETWORKS_TENSOR_INT32
        1,  // ANEURALNETWORKS_TENSOR_SYMMETRICAL_QUANT8
};

template <>
inline std::string toString<RandomVariableType>(const RandomVariableType& type) {
    static const std::string typeNames[] = {"FREE", "CONST", "OP"};
    return typeNames[static_cast<int>(type)];
}

inline std::string alignedString(std::string str, int width) {
    str.push_back(':');
    str.resize(width + 1, ' ');
    return str;
}

template <>
inline std::string toString<RandomVariableRange>(const RandomVariableRange& range) {
    return "[" + joinStr(", ", 20, range.getChoices()) + "]";
}

template <>
inline std::string toString<RandomOperandType>(const RandomOperandType& type) {
    static const std::string typeNames[] = {"Input", "Output", "Internal", "Parameter"};
    return typeNames[static_cast<int>(type)];
}

template <>
inline std::string toString<RandomVariableNode>(const RandomVariableNode& var) {
    std::stringstream ss;
    ss << "var" << var->index << " = ";
    switch (var->type) {
        case RandomVariableType::FREE:
            ss << "FREE " << toString(var->range);
            break;
        case RandomVariableType::CONST:
            ss << "CONST " << toString(var->value);
            break;
        case RandomVariableType::OP:
            ss << "var" << var->parent1->index << " " << var->op->getName();
            if (var->parent2 != nullptr) ss << " var" << var->parent2->index;
            ss << ", " << toString(var->range);
            break;
        default:
            NN_FUZZER_CHECK(false);
    }
    ss << ", timestamp = " << var->timestamp;
    return ss.str();
}

template <>
inline std::string toString<Type>(const Type& type) {
    return kTypeNames[static_cast<int32_t>(type)];
}

template <>
inline std::string toString<RandomVariable>(const RandomVariable& var) {
    return "var" + std::to_string(var.get()->index);
}

template <>
inline std::string toString<RandomOperand>(const RandomOperand& op) {
    return toString(op.type) + ", dimension = [" +
           joinStr(", ", op.dimensions,
                   [](const RandomVariable& var) { return std::to_string(var.getValue()); }) +
           "]";
}

// Dump the random graph to a spec file.
class SpecWriter {
   public:
    SpecWriter(std::string filename, std::string testname = "");
    bool isOpen() { return os.is_open(); }
    void dump(const std::vector<RandomOperation>& operations,
              const std::vector<std::shared_ptr<RandomOperand>>& operands);

   private:
    void dump(test_wrapper::Type type, const uint8_t* buffer, uint32_t length);
    void dump(const std::vector<RandomVariable>& dimensions);
    void dump(const std::shared_ptr<RandomOperand>& op);
    void dump(const RandomOperation& op);

    template <typename T>
    void dump(const T* buffer, uint32_t length) {
        for (uint32_t i = 0; i < length; i++) {
            if (i != 0) os << ", ";
            os << buffer[i];
        }
    }

    std::ofstream os;
};

struct RandomNumberGenerator {
    static std::mt19937 generator;
};

inline bool getBernoulli(double p) {
    std::bernoulli_distribution dis(p);
    return dis(RandomNumberGenerator::generator);
}

template <typename T>
inline T getUniform(T, T);
template <>
inline float getUniform<float>(float lower, float upper) {
    std::uniform_real_distribution<float> dis(lower, upper);
    return dis(RandomNumberGenerator::generator);
}
template <>
inline int32_t getUniform<int32_t>(int32_t lower, int32_t upper) {
    std::uniform_int_distribution<int32_t> dis(lower, upper);
    return dis(RandomNumberGenerator::generator);
}

template <typename T>
inline const T& getRandomChoice(const std::vector<T>& choices) {
    NN_FUZZER_CHECK(!choices.empty()) << "Empty choices!";
    std::uniform_int_distribution<size_t> dis(0, choices.size() - 1);
    size_t i = dis(RandomNumberGenerator::generator);
    return choices[i];
}

template <typename T>
inline void randomShuffle(std::vector<T>* vec) {
    std::shuffle(vec->begin(), vec->end(), RandomNumberGenerator::generator);
}

}  // namespace fuzzing_test
}  // namespace nn
}  // namespace android

#endif  // ANDROID_FRAMEWORK_ML_NN_RUNTIME_TEST_FUZZING_RANDOM_GRAPH_GENERATOR_UTILS_H
