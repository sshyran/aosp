// clang-format off
// Generated file (from: mean_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mean_relaxed {
// Generated mean_relaxed test
#include "generated/examples/mean_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/mean_relaxed.model.cpp"
} // namespace mean_relaxed

TEST_F(GeneratedTests, mean_relaxed) {
    execute(mean_relaxed::CreateModel,
            mean_relaxed::is_ignored,
            mean_relaxed::examples);
}

