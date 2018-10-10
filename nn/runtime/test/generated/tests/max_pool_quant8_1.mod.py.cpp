// clang-format off
// Generated file (from: max_pool_quant8_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace max_pool_quant8_1 {
// Generated max_pool_quant8_1 test
#include "generated/examples/max_pool_quant8_1.example.cpp"
// Generated model constructor
#include "generated/models/max_pool_quant8_1.model.cpp"
} // namespace max_pool_quant8_1

TEST_F(GeneratedTests, max_pool_quant8_1) {
    execute(max_pool_quant8_1::CreateModel,
            max_pool_quant8_1::is_ignored,
            max_pool_quant8_1::examples);
}

