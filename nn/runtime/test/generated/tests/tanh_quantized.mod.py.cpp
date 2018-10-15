// clang-format off
// Generated file (from: tanh_quantized.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace tanh_quantized {
// Generated tanh_quantized test
#include "generated/examples/tanh_quantized.example.cpp"
// Generated model constructor
#include "generated/models/tanh_quantized.model.cpp"
} // namespace tanh_quantized

TEST_F(GeneratedTests, tanh_quantized) {
    execute(tanh_quantized::CreateModel,
            tanh_quantized::is_ignored,
            tanh_quantized::examples);
}

