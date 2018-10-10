// clang-format off
// Generated file (from: argmax_1_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_1_quant8 {
// Generated argmax_1_quant8 test
#include "generated/examples/argmax_1_quant8.example.cpp"
// Generated model constructor
#include "generated/models/argmax_1_quant8.model.cpp"
} // namespace argmax_1_quant8

TEST_F(GeneratedTests, argmax_1_quant8) {
    execute(argmax_1_quant8::CreateModel,
            argmax_1_quant8::is_ignored,
            argmax_1_quant8::examples);
}

