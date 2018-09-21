// clang-format off
// Generated file (from: div_broadcast_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace div_broadcast_float {
// Generated div_broadcast_float test
#include "generated/examples/div_broadcast_float.example.cpp"
// Generated model constructor
#include "generated/models/div_broadcast_float.model.cpp"
} // namespace div_broadcast_float

TEST_F(GeneratedTests, div_broadcast_float) {
    execute(div_broadcast_float::CreateModel,
            div_broadcast_float::is_ignored,
            div_broadcast_float::examples);
}

