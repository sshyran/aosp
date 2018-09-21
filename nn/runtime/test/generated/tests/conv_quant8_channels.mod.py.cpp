// clang-format off
// Generated file (from: conv_quant8_channels.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_quant8_channels {
// Generated conv_quant8_channels test
#include "generated/examples/conv_quant8_channels.example.cpp"
// Generated model constructor
#include "generated/models/conv_quant8_channels.model.cpp"
} // namespace conv_quant8_channels

TEST_F(GeneratedTests, conv_quant8_channels) {
    execute(conv_quant8_channels::CreateModel,
            conv_quant8_channels::is_ignored,
            conv_quant8_channels::examples);
}

