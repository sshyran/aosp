// clang-format off
// Generated file (from: reshape_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace reshape_relaxed {
// Generated reshape_relaxed test
#include "generated/examples/reshape_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/reshape_relaxed.model.cpp"
} // namespace reshape_relaxed

TEST_F(GeneratedTests, reshape_relaxed) {
    execute(reshape_relaxed::CreateModel,
            reshape_relaxed::is_ignored,
            reshape_relaxed::examples);
}

