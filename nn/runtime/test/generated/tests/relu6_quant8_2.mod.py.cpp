// clang-format off
// Generated file (from: relu6_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu6_quant8_2 {
// Generated relu6_quant8_2 test
#include "generated/examples/relu6_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/relu6_quant8_2.model.cpp"
} // namespace relu6_quant8_2

TEST_F(GeneratedTests, relu6_quant8_2) {
    execute(relu6_quant8_2::CreateModel,
            relu6_quant8_2::is_ignored,
            relu6_quant8_2::examples);
}

