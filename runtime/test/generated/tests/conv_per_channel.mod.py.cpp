// clang-format off
// Generated file (from: conv_per_channel.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv_per_channel {
// Generated conv_per_channel test
#include "generated/examples/conv_per_channel.example.cpp"
// Generated model constructor
#include "generated/models/conv_per_channel.model.cpp"
} // namespace conv_per_channel

TEST_F(GeneratedTests, conv_per_channel) {
    execute(conv_per_channel::CreateModel,
            conv_per_channel::is_ignored,
            conv_per_channel::get_examples());
}

TEST_F(GeneratedTests, conv_per_channel_weight_as_input) {
    execute(conv_per_channel::CreateModel_weight_as_input,
            conv_per_channel::is_ignored_weight_as_input,
            conv_per_channel::get_examples_weight_as_input());
}

TEST_F(GeneratedTests, conv_per_channel_layouts_nhwc) {
    execute(conv_per_channel::CreateModel_layouts_nhwc,
            conv_per_channel::is_ignored_layouts_nhwc,
            conv_per_channel::get_examples_layouts_nhwc());
}

TEST_F(GeneratedTests, conv_per_channel_layouts_nhwc_weight_as_input) {
    execute(conv_per_channel::CreateModel_layouts_nhwc_weight_as_input,
            conv_per_channel::is_ignored_layouts_nhwc_weight_as_input,
            conv_per_channel::get_examples_layouts_nhwc_weight_as_input());
}

TEST_F(GeneratedTests, conv_per_channel_layouts_nchw) {
    execute(conv_per_channel::CreateModel_layouts_nchw,
            conv_per_channel::is_ignored_layouts_nchw,
            conv_per_channel::get_examples_layouts_nchw());
}

TEST_F(GeneratedTests, conv_per_channel_layouts_nchw_weight_as_input) {
    execute(conv_per_channel::CreateModel_layouts_nchw_weight_as_input,
            conv_per_channel::is_ignored_layouts_nchw_weight_as_input,
            conv_per_channel::get_examples_layouts_nchw_weight_as_input());
}

