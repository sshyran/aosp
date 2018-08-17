// clang-format off
// Generated file (from: grouped_conv2d.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace grouped_conv2d {
// Generated grouped_conv2d test
#include "generated/examples/grouped_conv2d.example.cpp"
// Generated model constructor
#include "generated/models/grouped_conv2d.model.cpp"
} // namespace grouped_conv2d

TEST_F(GeneratedTests, grouped_conv2d) {
    execute(grouped_conv2d::CreateModel,
            grouped_conv2d::is_ignored,
            grouped_conv2d::examples);
}

TEST_F(GeneratedTests, grouped_conv2d_weight_as_input) {
    execute(grouped_conv2d::CreateModel_weight_as_input,
            grouped_conv2d::is_ignored_weight_as_input,
            grouped_conv2d::examples_weight_as_input);
}

TEST_F(GeneratedTests, grouped_conv2d_relaxed) {
    execute(grouped_conv2d::CreateModel_relaxed,
            grouped_conv2d::is_ignored_relaxed,
            grouped_conv2d::examples_relaxed);
}

TEST_F(GeneratedTests, grouped_conv2d_relaxed_weight_as_input) {
    execute(grouped_conv2d::CreateModel_relaxed_weight_as_input,
            grouped_conv2d::is_ignored_relaxed_weight_as_input,
            grouped_conv2d::examples_relaxed_weight_as_input);
}

TEST_F(GeneratedTests, grouped_conv2d_quant8) {
    execute(grouped_conv2d::CreateModel_quant8,
            grouped_conv2d::is_ignored_quant8,
            grouped_conv2d::examples_quant8);
}

TEST_F(GeneratedTests, grouped_conv2d_quant8_weight_as_input) {
    execute(grouped_conv2d::CreateModel_quant8_weight_as_input,
            grouped_conv2d::is_ignored_quant8_weight_as_input,
            grouped_conv2d::examples_quant8_weight_as_input);
}

TEST_F(GeneratedTests, grouped_conv2d_large) {
    execute(grouped_conv2d::CreateModel_large,
            grouped_conv2d::is_ignored_large,
            grouped_conv2d::examples_large);
}

TEST_F(GeneratedTests, grouped_conv2d_large_weight_as_input) {
    execute(grouped_conv2d::CreateModel_large_weight_as_input,
            grouped_conv2d::is_ignored_large_weight_as_input,
            grouped_conv2d::examples_large_weight_as_input);
}

TEST_F(GeneratedTests, grouped_conv2d_large_relaxed) {
    execute(grouped_conv2d::CreateModel_large_relaxed,
            grouped_conv2d::is_ignored_large_relaxed,
            grouped_conv2d::examples_large_relaxed);
}

TEST_F(GeneratedTests, grouped_conv2d_large_relaxed_weight_as_input) {
    execute(grouped_conv2d::CreateModel_large_relaxed_weight_as_input,
            grouped_conv2d::is_ignored_large_relaxed_weight_as_input,
            grouped_conv2d::examples_large_relaxed_weight_as_input);
}

TEST_F(GeneratedTests, grouped_conv2d_large_quant8) {
    execute(grouped_conv2d::CreateModel_large_quant8,
            grouped_conv2d::is_ignored_large_quant8,
            grouped_conv2d::examples_large_quant8);
}

TEST_F(GeneratedTests, grouped_conv2d_large_quant8_weight_as_input) {
    execute(grouped_conv2d::CreateModel_large_quant8_weight_as_input,
            grouped_conv2d::is_ignored_large_quant8_weight_as_input,
            grouped_conv2d::examples_large_quant8_weight_as_input);
}

TEST_F(GeneratedTests, grouped_conv2d_channel) {
    execute(grouped_conv2d::CreateModel_channel,
            grouped_conv2d::is_ignored_channel,
            grouped_conv2d::examples_channel);
}

TEST_F(GeneratedTests, grouped_conv2d_channel_weight_as_input) {
    execute(grouped_conv2d::CreateModel_channel_weight_as_input,
            grouped_conv2d::is_ignored_channel_weight_as_input,
            grouped_conv2d::examples_channel_weight_as_input);
}

TEST_F(GeneratedTests, grouped_conv2d_channel_relaxed) {
    execute(grouped_conv2d::CreateModel_channel_relaxed,
            grouped_conv2d::is_ignored_channel_relaxed,
            grouped_conv2d::examples_channel_relaxed);
}

TEST_F(GeneratedTests, grouped_conv2d_channel_relaxed_weight_as_input) {
    execute(grouped_conv2d::CreateModel_channel_relaxed_weight_as_input,
            grouped_conv2d::is_ignored_channel_relaxed_weight_as_input,
            grouped_conv2d::examples_channel_relaxed_weight_as_input);
}

TEST_F(GeneratedTests, grouped_conv2d_channel_quant8) {
    execute(grouped_conv2d::CreateModel_channel_quant8,
            grouped_conv2d::is_ignored_channel_quant8,
            grouped_conv2d::examples_channel_quant8);
}

TEST_F(GeneratedTests, grouped_conv2d_channel_quant8_weight_as_input) {
    execute(grouped_conv2d::CreateModel_channel_quant8_weight_as_input,
            grouped_conv2d::is_ignored_channel_quant8_weight_as_input,
            grouped_conv2d::examples_channel_quant8_weight_as_input);
}

