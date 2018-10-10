// clang-format off
// Generated file (from: avg_pool_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace avg_pool_quant8_2 {
// Generated avg_pool_quant8_2 test
#include "generated/examples/avg_pool_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/avg_pool_quant8_2.model.cpp"
} // namespace avg_pool_quant8_2

TEST_F(GeneratedTests, avg_pool_quant8_2) {
    execute(avg_pool_quant8_2::CreateModel,
            avg_pool_quant8_2::is_ignored,
            avg_pool_quant8_2::examples);
}

