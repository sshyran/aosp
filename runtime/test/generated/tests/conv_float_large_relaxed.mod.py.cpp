// clang-format off
// Generated file (from: conv_float_large_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_float_large_relaxed {
// Generated conv_float_large_relaxed test
#include "generated/examples/conv_float_large_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/conv_float_large_relaxed.model.cpp"
} // namespace conv_float_large_relaxed

TEST_F(GeneratedTests, conv_float_large_relaxed) {
    execute(conv_float_large_relaxed::CreateModel,
            conv_float_large_relaxed::is_ignored,
            conv_float_large_relaxed::examples);
}

