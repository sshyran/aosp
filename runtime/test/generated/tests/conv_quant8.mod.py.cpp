// clang-format off
// Generated file (from: conv_quant8.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_quant8 {
// Generated conv_quant8 test
#include "generated/examples/conv_quant8.example.cpp"
// Generated model constructor
#include "generated/models/conv_quant8.model.cpp"
} // namespace conv_quant8

TEST_F(GeneratedTests, conv_quant8) {
    execute(conv_quant8::CreateModel,
            conv_quant8::is_ignored,
            conv_quant8::examples);
}

