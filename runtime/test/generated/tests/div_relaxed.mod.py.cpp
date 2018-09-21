// clang-format off
// Generated file (from: div_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace div_relaxed {
// Generated div_relaxed test
#include "generated/examples/div_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/div_relaxed.model.cpp"
} // namespace div_relaxed

TEST_F(GeneratedTests, div_relaxed) {
    execute(div_relaxed::CreateModel,
            div_relaxed::is_ignored,
            div_relaxed::examples);
}

