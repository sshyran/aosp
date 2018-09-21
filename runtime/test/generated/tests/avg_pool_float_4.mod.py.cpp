// clang-format off
// Generated file (from: avg_pool_float_4.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace avg_pool_float_4 {
// Generated avg_pool_float_4 test
#include "generated/examples/avg_pool_float_4.example.cpp"
// Generated model constructor
#include "generated/models/avg_pool_float_4.model.cpp"
} // namespace avg_pool_float_4

TEST_F(GeneratedTests, avg_pool_float_4) {
    execute(avg_pool_float_4::CreateModel,
            avg_pool_float_4::is_ignored,
            avg_pool_float_4::examples);
}

