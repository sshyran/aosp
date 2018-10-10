// clang-format off
// Generated file (from: l2_normalization_large.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace l2_normalization_large {
// Generated l2_normalization_large test
#include "generated/examples/l2_normalization_large.example.cpp"
// Generated model constructor
#include "generated/models/l2_normalization_large.model.cpp"
} // namespace l2_normalization_large

TEST_F(GeneratedTests, l2_normalization_large) {
    execute(l2_normalization_large::CreateModel,
            l2_normalization_large::is_ignored,
            l2_normalization_large::examples);
}

