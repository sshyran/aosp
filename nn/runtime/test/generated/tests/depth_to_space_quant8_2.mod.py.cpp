// clang-format off
// Generated file (from: depth_to_space_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace depth_to_space_quant8_2 {
// Generated depth_to_space_quant8_2 test
#include "generated/examples/depth_to_space_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/depth_to_space_quant8_2.model.cpp"
} // namespace depth_to_space_quant8_2

TEST_F(GeneratedTests, depth_to_space_quant8_2) {
    execute(depth_to_space_quant8_2::CreateModel,
            depth_to_space_quant8_2::is_ignored,
            depth_to_space_quant8_2::examples);
}

