// clang-format off
// Generated file (from: avg_pool_float_4_relaxed.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace avg_pool_float_4_relaxed {
// Generated avg_pool_float_4_relaxed test
#include "generated/examples/avg_pool_float_4_relaxed.example.cpp"
// Generated model constructor
#include "generated/models/avg_pool_float_4_relaxed.model.cpp"
} // namespace avg_pool_float_4_relaxed

TEST_F(GeneratedTests, avg_pool_float_4_relaxed) {
    execute(avg_pool_float_4_relaxed::CreateModel,
            avg_pool_float_4_relaxed::is_ignored,
            avg_pool_float_4_relaxed::examples);
}
