// clang-format off
// Generated file (from: lsh_projection.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace lsh_projection {
// Generated lsh_projection test
#include "generated/examples/lsh_projection.example.cpp"
// Generated model constructor
#include "generated/models/lsh_projection.model.cpp"
} // namespace lsh_projection

TEST_F(GeneratedTests, lsh_projection) {
    execute(lsh_projection::CreateModel,
            lsh_projection::is_ignored,
            lsh_projection::examples);
}

