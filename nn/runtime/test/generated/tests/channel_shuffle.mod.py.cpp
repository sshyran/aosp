// clang-format off
// Generated file (from: channel_shuffle.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace channel_shuffle {
// Generated channel_shuffle test
#include "generated/examples/channel_shuffle.example.cpp"
// Generated model constructor
#include "generated/models/channel_shuffle.model.cpp"
} // namespace channel_shuffle

TEST_F(GeneratedTests, channel_shuffle) {
    execute(channel_shuffle::CreateModel,
            channel_shuffle::is_ignored,
            channel_shuffle::examples);
}

TEST_F(GeneratedTests, channel_shuffle_relaxed) {
    execute(channel_shuffle::CreateModel_relaxed,
            channel_shuffle::is_ignored_relaxed,
            channel_shuffle::examples_relaxed);
}

TEST_F(GeneratedTests, channel_shuffle_quant8) {
    execute(channel_shuffle::CreateModel_quant8,
            channel_shuffle::is_ignored_quant8,
            channel_shuffle::examples_quant8);
}

TEST_F(GeneratedTests, channel_shuffle_2) {
    execute(channel_shuffle::CreateModel_2,
            channel_shuffle::is_ignored_2,
            channel_shuffle::examples_2);
}

TEST_F(GeneratedTests, channel_shuffle_relaxed_2) {
    execute(channel_shuffle::CreateModel_relaxed_2,
            channel_shuffle::is_ignored_relaxed_2,
            channel_shuffle::examples_relaxed_2);
}

TEST_F(GeneratedTests, channel_shuffle_quant8_2) {
    execute(channel_shuffle::CreateModel_quant8_2,
            channel_shuffle::is_ignored_quant8_2,
            channel_shuffle::examples_quant8_2);
}

