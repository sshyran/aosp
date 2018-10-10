// clang-format off
// Generated file (from: argmin_1_float_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmin_1_float_relaxed {
// Generated argmin_1_float_relaxed test
#include "generated/examples/argmin_1_float_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/argmin_1_float_relaxed.model.cpp"
} // namespace argmin_1_float_relaxed

TEST_F(GeneratedTests, argmin_1_float_relaxed) {
    execute(argmin_1_float_relaxed::CreateModel,
            argmin_1_float_relaxed::is_ignored,
            argmin_1_float_relaxed::examples);
}

