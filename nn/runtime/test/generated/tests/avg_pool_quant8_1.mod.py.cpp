// clang-format off
// Generated file (from: avg_pool_quant8_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace avg_pool_quant8_1 {
// Generated avg_pool_quant8_1 test
#include "generated/examples/avg_pool_quant8_1.example.cpp"
// Generated model constructor
#include "generated/models/avg_pool_quant8_1.model.cpp"
} // namespace avg_pool_quant8_1

TEST_F(GeneratedTests, avg_pool_quant8_1) {
    execute(avg_pool_quant8_1::CreateModel,
            avg_pool_quant8_1::is_ignored,
            avg_pool_quant8_1::examples);
}

