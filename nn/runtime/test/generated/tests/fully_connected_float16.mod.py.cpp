// clang-format off
// Generated file (from: fully_connected_float16.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_float16 {
// Generated fully_connected_float16 test
#include "generated/examples/fully_connected_float16.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_float16.model.cpp"
} // namespace fully_connected_float16

TEST_F(GeneratedTests, fully_connected_float16) {
    execute(fully_connected_float16::CreateModel,
            fully_connected_float16::is_ignored,
            fully_connected_float16::get_examples());
}

