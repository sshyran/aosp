// clang-format off
// Generated file (from: argmax_2_float_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_2_float_relaxed {
// Generated argmax_2_float_relaxed test
#include "generated/examples/argmax_2_float_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/argmax_2_float_relaxed.model.cpp"
} // namespace argmax_2_float_relaxed

TEST_F(GeneratedTests, argmax_2_float_relaxed) {
    execute(argmax_2_float_relaxed::CreateModel,
            argmax_2_float_relaxed::is_ignored,
            argmax_2_float_relaxed::examples);
}

