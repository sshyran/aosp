// clang-format off
// Generated file (from: reshape.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace reshape {
// Generated reshape test
#include "generated/examples/reshape.example.cpp"
// Generated model constructor
#include "generated/models/reshape.model.cpp"
} // namespace reshape

TEST_F(GeneratedTests, reshape) {
    execute(reshape::CreateModel,
            reshape::is_ignored,
            reshape::examples);
}

