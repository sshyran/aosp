// clang-format off
// Generated file (from: transpose_float_1_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace transpose_float_1_relaxed {
// Generated transpose_float_1_relaxed test
#include "generated/examples/transpose_float_1_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/transpose_float_1_relaxed.model.cpp"
} // namespace transpose_float_1_relaxed

TEST_F(GeneratedTests, transpose_float_1_relaxed) {
    execute(transpose_float_1_relaxed::CreateModel,
            transpose_float_1_relaxed::is_ignored,
            transpose_float_1_relaxed::examples);
}

