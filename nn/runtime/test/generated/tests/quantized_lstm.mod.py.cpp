// clang-format off
// Generated file (from: quantized_lstm.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace quantized_lstm {
// Generated quantized_lstm test
#include "generated/examples/quantized_lstm.example.cpp"
// Generated model constructor
#include "generated/models/quantized_lstm.model.cpp"
} // namespace quantized_lstm

TEST_F(GeneratedTests, quantized_lstm) {
    execute(quantized_lstm::CreateModel,
            quantized_lstm::is_ignored,
            quantized_lstm::get_examples());
}

TEST_F(GeneratedTests, quantized_lstm_relaxed) {
    execute(quantized_lstm::CreateModel_relaxed,
            quantized_lstm::is_ignored_relaxed,
            quantized_lstm::get_examples_relaxed());
}

