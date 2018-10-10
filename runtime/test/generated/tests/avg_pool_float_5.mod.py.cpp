// clang-format off
// Generated file (from: avg_pool_float_5.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace avg_pool_float_5 {
// Generated avg_pool_float_5 test
#include "generated/examples/avg_pool_float_5.example.cpp"
// Generated model constructor
#include "generated/models/avg_pool_float_5.model.cpp"
} // namespace avg_pool_float_5

TEST_F(GeneratedTests, avg_pool_float_5) {
    execute(avg_pool_float_5::CreateModel,
            avg_pool_float_5::is_ignored,
            avg_pool_float_5::examples);
}

