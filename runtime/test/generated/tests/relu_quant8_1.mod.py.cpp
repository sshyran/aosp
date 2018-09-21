// clang-format off
// Generated file (from: relu_quant8_1.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu_quant8_1 {
// Generated relu_quant8_1 test
#include "generated/examples/relu_quant8_1.example.cpp"
// Generated model constructor
#include "generated/models/relu_quant8_1.model.cpp"
} // namespace relu_quant8_1

TEST_F(GeneratedTests, relu_quant8_1) {
    execute(relu_quant8_1::CreateModel,
            relu_quant8_1::is_ignored,
            relu_quant8_1::examples);
}

