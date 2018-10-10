// clang-format off
// Generated file (from: fully_connected_float.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_float {
// Generated fully_connected_float test
#include "generated/examples/fully_connected_float.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_float.model.cpp"
} // namespace fully_connected_float

TEST_F(GeneratedTests, fully_connected_float) {
    execute(fully_connected_float::CreateModel,
            fully_connected_float::is_ignored,
            fully_connected_float::examples);
}

