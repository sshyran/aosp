// clang-format off
// Generated file (from: depth_to_space_float_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace depth_to_space_float_1 {
// Generated depth_to_space_float_1 test
#include "generated/examples/depth_to_space_float_1.example.cpp"
// Generated model constructor
#include "generated/models/depth_to_space_float_1.model.cpp"
} // namespace depth_to_space_float_1

TEST_F(GeneratedTests, depth_to_space_float_1) {
    execute(depth_to_space_float_1::CreateModel,
            depth_to_space_float_1::is_ignored,
            depth_to_space_float_1::examples);
}

