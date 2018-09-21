// clang-format off
// Generated file (from: max_pool_float_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace max_pool_float_2 {
// Generated max_pool_float_2 test
#include "generated/examples/max_pool_float_2.example.cpp"
// Generated model constructor
#include "generated/models/max_pool_float_2.model.cpp"
} // namespace max_pool_float_2

TEST_F(GeneratedTests, max_pool_float_2) {
    execute(max_pool_float_2::CreateModel,
            max_pool_float_2::is_ignored,
            max_pool_float_2::examples);
}

