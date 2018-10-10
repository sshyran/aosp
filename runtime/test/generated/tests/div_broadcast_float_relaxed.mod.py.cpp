// clang-format off
// Generated file (from: div_broadcast_float_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace div_broadcast_float_relaxed {
// Generated div_broadcast_float_relaxed test
#include "generated/examples/div_broadcast_float_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/div_broadcast_float_relaxed.model.cpp"
} // namespace div_broadcast_float_relaxed

TEST_F(GeneratedTests, div_broadcast_float_relaxed) {
    execute(div_broadcast_float_relaxed::CreateModel,
            div_broadcast_float_relaxed::is_ignored,
            div_broadcast_float_relaxed::examples);
}

