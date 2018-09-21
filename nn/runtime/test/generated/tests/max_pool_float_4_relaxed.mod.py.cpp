// clang-format off
// Generated file (from: max_pool_float_4_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace max_pool_float_4_relaxed {
// Generated max_pool_float_4_relaxed test
#include "generated/examples/max_pool_float_4_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/max_pool_float_4_relaxed.model.cpp"
} // namespace max_pool_float_4_relaxed

TEST_F(GeneratedTests, max_pool_float_4_relaxed) {
    execute(max_pool_float_4_relaxed::CreateModel,
            max_pool_float_4_relaxed::is_ignored,
            max_pool_float_4_relaxed::examples);
}

