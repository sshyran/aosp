// clang-format off
// Generated file (from: relu1_quant8_2.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace relu1_quant8_2 {
// Generated relu1_quant8_2 test
#include "generated/examples/relu1_quant8_2.example.cpp"
// Generated model constructor
#include "generated/models/relu1_quant8_2.model.cpp"
} // namespace relu1_quant8_2

TEST_F(GeneratedTests, relu1_quant8_2) {
    execute(relu1_quant8_2::CreateModel,
            relu1_quant8_2::is_ignored,
            relu1_quant8_2::examples);
}

