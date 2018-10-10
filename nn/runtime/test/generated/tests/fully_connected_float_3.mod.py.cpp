// clang-format off
// Generated file (from: fully_connected_float_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_float_3 {
// Generated fully_connected_float_3 test
#include "generated/examples/fully_connected_float_3.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_float_3.model.cpp"
} // namespace fully_connected_float_3

TEST_F(GeneratedTests, fully_connected_float_3) {
    execute(fully_connected_float_3::CreateModel,
            fully_connected_float_3::is_ignored,
            fully_connected_float_3::examples);
}

