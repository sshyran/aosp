// clang-format off
// Generated file (from: sub_quantized.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sub_quantized {
// Generated sub_quantized test
#include "generated/examples/sub_quantized.example.cpp"
// Generated model constructor
#include "generated/models/sub_quantized.model.cpp"
} // namespace sub_quantized

TEST_F(GeneratedTests, sub_quantized) {
    execute(sub_quantized::CreateModel,
            sub_quantized::is_ignored,
            sub_quantized::examples);
}

