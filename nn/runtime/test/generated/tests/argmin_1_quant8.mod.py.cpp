// clang-format off
// Generated file (from: argmin_1_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace argmin_1_quant8 {
// Generated argmin_1_quant8 test
#include "generated/examples/argmin_1_quant8.example.cpp"
// Generated model constructor
#include "generated/models/argmin_1_quant8.model.cpp"
} // namespace argmin_1_quant8

TEST_F(GeneratedTests, argmin_1_quant8) {
    execute(argmin_1_quant8::CreateModel,
            argmin_1_quant8::is_ignored,
            argmin_1_quant8::examples);
}

