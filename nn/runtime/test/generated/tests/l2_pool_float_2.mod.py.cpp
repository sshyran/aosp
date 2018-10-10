// clang-format off
// Generated file (from: l2_pool_float_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace l2_pool_float_2 {
// Generated l2_pool_float_2 test
#include "generated/examples/l2_pool_float_2.example.cpp"
// Generated model constructor
#include "generated/models/l2_pool_float_2.model.cpp"
} // namespace l2_pool_float_2

TEST_F(GeneratedTests, l2_pool_float_2) {
    execute(l2_pool_float_2::CreateModel,
            l2_pool_float_2::is_ignored,
            l2_pool_float_2::examples);
}

