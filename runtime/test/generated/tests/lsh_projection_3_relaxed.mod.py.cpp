// clang-format off
// Generated file (from: lsh_projection_3_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lsh_projection_3_relaxed {
// Generated lsh_projection_3_relaxed test
#include "generated/examples/lsh_projection_3_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/lsh_projection_3_relaxed.model.cpp"
} // namespace lsh_projection_3_relaxed

TEST_F(GeneratedTests, lsh_projection_3_relaxed) {
    execute(lsh_projection_3_relaxed::CreateModel,
            lsh_projection_3_relaxed::is_ignored,
            lsh_projection_3_relaxed::examples);
}

