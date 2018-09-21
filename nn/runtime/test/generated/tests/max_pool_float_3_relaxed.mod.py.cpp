// clang-format off
// Generated file (from: max_pool_float_3_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace max_pool_float_3_relaxed {
// Generated max_pool_float_3_relaxed test
#include "generated/examples/max_pool_float_3_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/max_pool_float_3_relaxed.model.cpp"
} // namespace max_pool_float_3_relaxed

TEST_F(GeneratedTests, max_pool_float_3_relaxed) {
    execute(max_pool_float_3_relaxed::CreateModel,
            max_pool_float_3_relaxed::is_ignored,
            max_pool_float_3_relaxed::examples);
}

