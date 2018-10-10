// clang-format off
// Generated file (from: mean_quant8_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace mean_quant8_1 {
// Generated mean_quant8_1 test
#include "generated/examples/mean_quant8_1.example.cpp"
// Generated model constructor
#include "generated/models/mean_quant8_1.model.cpp"
} // namespace mean_quant8_1

TEST_F(GeneratedTests, mean_quant8_1) {
    execute(mean_quant8_1::CreateModel,
            mean_quant8_1::is_ignored,
            mean_quant8_1::examples);
}

