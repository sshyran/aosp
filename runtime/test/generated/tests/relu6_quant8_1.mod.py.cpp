// clang-format off
// Generated file (from: relu6_quant8_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu6_quant8_1 {
// Generated relu6_quant8_1 test
#include "generated/examples/relu6_quant8_1.example.cpp"
// Generated model constructor
#include "generated/models/relu6_quant8_1.model.cpp"
} // namespace relu6_quant8_1

TEST_F(GeneratedTests, relu6_quant8_1) {
    execute(relu6_quant8_1::CreateModel,
            relu6_quant8_1::is_ignored,
            relu6_quant8_1::examples);
}

