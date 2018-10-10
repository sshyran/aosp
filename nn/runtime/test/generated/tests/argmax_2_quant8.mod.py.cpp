// clang-format off
// Generated file (from: argmax_2_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmax_2_quant8 {
// Generated argmax_2_quant8 test
#include "generated/examples/argmax_2_quant8.example.cpp"
// Generated model constructor
#include "generated/models/argmax_2_quant8.model.cpp"
} // namespace argmax_2_quant8

TEST_F(GeneratedTests, argmax_2_quant8) {
    execute(argmax_2_quant8::CreateModel,
            argmax_2_quant8::is_ignored,
            argmax_2_quant8::examples);
}

