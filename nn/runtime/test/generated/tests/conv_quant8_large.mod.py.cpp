// clang-format off
// Generated file (from: conv_quant8_large.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_quant8_large {
// Generated conv_quant8_large test
#include "generated/examples/conv_quant8_large.example.cpp"
// Generated model constructor
#include "generated/models/conv_quant8_large.model.cpp"
} // namespace conv_quant8_large

TEST_F(GeneratedTests, conv_quant8_large) {
    execute(conv_quant8_large::CreateModel,
            conv_quant8_large::is_ignored,
            conv_quant8_large::examples);
}

