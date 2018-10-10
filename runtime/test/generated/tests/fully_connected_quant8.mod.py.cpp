// clang-format off
// Generated file (from: fully_connected_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace fully_connected_quant8 {
// Generated fully_connected_quant8 test
#include "generated/examples/fully_connected_quant8.example.cpp"
// Generated model constructor
#include "generated/models/fully_connected_quant8.model.cpp"
} // namespace fully_connected_quant8

TEST_F(GeneratedTests, fully_connected_quant8) {
    execute(fully_connected_quant8::CreateModel,
            fully_connected_quant8::is_ignored,
            fully_connected_quant8::examples);
}

