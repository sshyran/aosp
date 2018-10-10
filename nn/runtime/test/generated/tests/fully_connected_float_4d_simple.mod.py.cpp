// clang-format off
// Generated file (from: fully_connected_float_4d_simple.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_float_4d_simple {
// Generated fully_connected_float_4d_simple test
#include "generated/examples/fully_connected_float_4d_simple.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_float_4d_simple.model.cpp"
} // namespace fully_connected_float_4d_simple

TEST_F(GeneratedTests, fully_connected_float_4d_simple) {
    execute(fully_connected_float_4d_simple::CreateModel,
            fully_connected_float_4d_simple::is_ignored,
            fully_connected_float_4d_simple::examples);
}

