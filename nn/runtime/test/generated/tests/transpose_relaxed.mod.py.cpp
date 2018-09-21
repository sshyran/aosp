// clang-format off
// Generated file (from: transpose_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace transpose_relaxed {
// Generated transpose_relaxed test
#include "generated/examples/transpose_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/transpose_relaxed.model.cpp"
} // namespace transpose_relaxed

TEST_F(GeneratedTests, transpose_relaxed) {
    execute(transpose_relaxed::CreateModel,
            transpose_relaxed::is_ignored,
            transpose_relaxed::examples);
}

