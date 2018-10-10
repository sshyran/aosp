// clang-format off
// Generated file (from: fully_connected_float_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_float_relaxed {
// Generated fully_connected_float_relaxed test
#include "generated/examples/fully_connected_float_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_float_relaxed.model.cpp"
} // namespace fully_connected_float_relaxed

TEST_F(GeneratedTests, fully_connected_float_relaxed) {
    execute(fully_connected_float_relaxed::CreateModel,
            fully_connected_float_relaxed::is_ignored,
            fully_connected_float_relaxed::examples);
}

