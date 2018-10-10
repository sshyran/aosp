// clang-format off
// Generated file (from: transpose.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace transpose {
// Generated transpose test
#include "generated/examples/transpose.example.cpp"
// Generated model constructor
#include "generated/models/transpose.model.cpp"
} // namespace transpose

TEST_F(GeneratedTests, transpose) {
    execute(transpose::CreateModel,
            transpose::is_ignored,
            transpose::examples);
}

