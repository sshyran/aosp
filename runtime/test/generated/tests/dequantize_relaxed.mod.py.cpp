// clang-format off
// Generated file (from: dequantize_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace dequantize_relaxed {
// Generated dequantize_relaxed test
#include "generated/examples/dequantize_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/dequantize_relaxed.model.cpp"
} // namespace dequantize_relaxed

TEST_F(GeneratedTests, dequantize_relaxed) {
    execute(dequantize_relaxed::CreateModel,
            dequantize_relaxed::is_ignored,
            dequantize_relaxed::examples);
}

