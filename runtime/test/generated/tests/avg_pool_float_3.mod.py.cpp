// clang-format off
// Generated file (from: avg_pool_float_3.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace avg_pool_float_3 {
// Generated avg_pool_float_3 test
#include "generated/examples/avg_pool_float_3.example.cpp"
// Generated model constructor
#include "generated/models/avg_pool_float_3.model.cpp"
} // namespace avg_pool_float_3

TEST_F(GeneratedTests, avg_pool_float_3) {
    execute(avg_pool_float_3::CreateModel,
            avg_pool_float_3::is_ignored,
            avg_pool_float_3::examples);
}

