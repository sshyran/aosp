// clang-format off
// Generated file (from: depth_to_space_float_2_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace depth_to_space_float_2_relaxed {
// Generated depth_to_space_float_2_relaxed test
#include "generated/examples/depth_to_space_float_2_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/depth_to_space_float_2_relaxed.model.cpp"
} // namespace depth_to_space_float_2_relaxed

TEST_F(GeneratedTests, depth_to_space_float_2_relaxed) {
    execute(depth_to_space_float_2_relaxed::CreateModel,
            depth_to_space_float_2_relaxed::is_ignored,
            depth_to_space_float_2_relaxed::examples);
}

