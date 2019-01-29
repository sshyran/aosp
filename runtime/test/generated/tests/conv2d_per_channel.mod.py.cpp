// clang-format off
// Generated file (from: conv2d_per_channel.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace conv2d_per_channel {
// Generated conv2d_per_channel test
#include "generated/examples/conv2d_per_channel.example.cpp"
// Generated model constructor
#include "generated/models/conv2d_per_channel.model.cpp"
} // namespace conv2d_per_channel

TEST_F(GeneratedTests, conv2d_per_channel) {
    execute(conv2d_per_channel::CreateModel,
            conv2d_per_channel::is_ignored,
            conv2d_per_channel::get_examples());
}

TEST_F(GeneratedTests, conv2d_per_channel_weight_as_input) {
    execute(conv2d_per_channel::CreateModel_weight_as_input,
            conv2d_per_channel::is_ignored_weight_as_input,
            conv2d_per_channel::get_examples_weight_as_input());
}

TEST_F(GeneratedTests, conv2d_per_channel_layouts_nhwc) {
    execute(conv2d_per_channel::CreateModel_layouts_nhwc,
            conv2d_per_channel::is_ignored_layouts_nhwc,
            conv2d_per_channel::get_examples_layouts_nhwc());
}

TEST_F(GeneratedTests, conv2d_per_channel_layouts_nhwc_weight_as_input) {
    execute(conv2d_per_channel::CreateModel_layouts_nhwc_weight_as_input,
            conv2d_per_channel::is_ignored_layouts_nhwc_weight_as_input,
            conv2d_per_channel::get_examples_layouts_nhwc_weight_as_input());
}

TEST_F(GeneratedTests, conv2d_per_channel_layouts_nchw) {
    execute(conv2d_per_channel::CreateModel_layouts_nchw,
            conv2d_per_channel::is_ignored_layouts_nchw,
            conv2d_per_channel::get_examples_layouts_nchw());
}

TEST_F(GeneratedTests, conv2d_per_channel_layouts_nchw_weight_as_input) {
    execute(conv2d_per_channel::CreateModel_layouts_nchw_weight_as_input,
            conv2d_per_channel::is_ignored_layouts_nchw_weight_as_input,
            conv2d_per_channel::get_examples_layouts_nchw_weight_as_input());
}

