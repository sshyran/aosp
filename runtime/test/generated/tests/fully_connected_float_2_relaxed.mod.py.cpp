// clang-format off
// Generated file (from: fully_connected_float_2_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_float_2_relaxed {
// Generated fully_connected_float_2_relaxed test
#include "generated/examples/fully_connected_float_2_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_float_2_relaxed.model.cpp"
} // namespace fully_connected_float_2_relaxed

TEST_F(GeneratedTests, fully_connected_float_2_relaxed) {
    execute(fully_connected_float_2_relaxed::CreateModel,
            fully_connected_float_2_relaxed::is_ignored,
            fully_connected_float_2_relaxed::examples);
}

