// clang-format off
// Generated file (from: conv_float_channels.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_float_channels {
// Generated conv_float_channels test
#include "generated/examples/conv_float_channels.example.cpp"
// Generated model constructor
#include "generated/models/conv_float_channels.model.cpp"
} // namespace conv_float_channels

TEST_F(GeneratedTests, conv_float_channels) {
    execute(conv_float_channels::CreateModel,
            conv_float_channels::is_ignored,
            conv_float_channels::examples);
}

