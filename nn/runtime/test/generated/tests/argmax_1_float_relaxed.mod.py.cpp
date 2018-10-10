// clang-format off
// Generated file (from: argmax_1_float_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_1_float_relaxed {
// Generated argmax_1_float_relaxed test
#include "generated/examples/argmax_1_float_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/argmax_1_float_relaxed.model.cpp"
} // namespace argmax_1_float_relaxed

TEST_F(GeneratedTests, argmax_1_float_relaxed) {
    execute(argmax_1_float_relaxed::CreateModel,
            argmax_1_float_relaxed::is_ignored,
            argmax_1_float_relaxed::examples);
}

