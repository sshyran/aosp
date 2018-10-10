// clang-format off
// Generated file (from: lstm3_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lstm3_relaxed {
// Generated lstm3_relaxed test
#include "generated/examples/lstm3_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/lstm3_relaxed.model.cpp"
} // namespace lstm3_relaxed

TEST_F(GeneratedTests, lstm3_relaxed) {
    execute(lstm3_relaxed::CreateModel,
            lstm3_relaxed::is_ignored,
            lstm3_relaxed::examples);
}

