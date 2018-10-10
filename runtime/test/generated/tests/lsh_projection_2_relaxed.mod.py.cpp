// clang-format off
// Generated file (from: lsh_projection_2_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lsh_projection_2_relaxed {
// Generated lsh_projection_2_relaxed test
#include "generated/examples/lsh_projection_2_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/lsh_projection_2_relaxed.model.cpp"
} // namespace lsh_projection_2_relaxed

TEST_F(GeneratedTests, lsh_projection_2_relaxed) {
    execute(lsh_projection_2_relaxed::CreateModel,
            lsh_projection_2_relaxed::is_ignored,
            lsh_projection_2_relaxed::examples);
}

