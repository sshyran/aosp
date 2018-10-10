// clang-format off
// Generated file (from: relu_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu_quant8_2 {
// Generated relu_quant8_2 test
#include "generated/examples/relu_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/relu_quant8_2.model.cpp"
} // namespace relu_quant8_2

TEST_F(GeneratedTests, relu_quant8_2) {
    execute(relu_quant8_2::CreateModel,
            relu_quant8_2::is_ignored,
            relu_quant8_2::examples);
}

