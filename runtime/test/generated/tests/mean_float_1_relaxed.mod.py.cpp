// clang-format off
// Generated file (from: mean_float_1_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mean_float_1_relaxed {
// Generated mean_float_1_relaxed test
#include "generated/examples/mean_float_1_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/mean_float_1_relaxed.model.cpp"
} // namespace mean_float_1_relaxed

TEST_F(GeneratedTests, mean_float_1_relaxed) {
    execute(mean_float_1_relaxed::CreateModel,
            mean_float_1_relaxed::is_ignored,
            mean_float_1_relaxed::examples);
}

