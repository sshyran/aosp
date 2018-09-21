// clang-format off
// Generated file (from: mean.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mean {
// Generated mean test
#include "generated/examples/mean.example.cpp"
// Generated model constructor
#include "generated/models/mean.model.cpp"
} // namespace mean

TEST_F(GeneratedTests, mean) {
    execute(mean::CreateModel,
            mean::is_ignored,
            mean::examples);
}

