// clang-format off
// Generated file (from: minimum.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace minimum {
// Generated minimum test
#include "generated/examples/minimum.example.cpp"
// Generated model constructor
#include "generated/models/minimum.model.cpp"
} // namespace minimum

TEST_F(GeneratedTests, minimum_simple) {
    execute(minimum::CreateModel,
            minimum::is_ignored,
            minimum::examples_simple);
}

TEST_F(GeneratedTests, minimum_simple_relaxed) {
    execute(minimum::CreateModel_relaxed,
            minimum::is_ignored_relaxed,
            minimum::examples_simple_relaxed);
}

TEST_F(GeneratedTests, minimum_simple_quant8) {
    execute(minimum::CreateModel_quant8,
            minimum::is_ignored_quant8,
            minimum::examples_simple_quant8);
}

TEST_F(GeneratedTests, minimum_simple_int32) {
    execute(minimum::CreateModel_int32,
            minimum::is_ignored_int32,
            minimum::examples_simple_int32);
}

TEST_F(GeneratedTests, minimum_broadcast) {
    execute(minimum::CreateModel_2,
            minimum::is_ignored_2,
            minimum::examples_broadcast);
}

TEST_F(GeneratedTests, minimum_broadcast_relaxed) {
    execute(minimum::CreateModel_relaxed_2,
            minimum::is_ignored_relaxed_2,
            minimum::examples_broadcast_relaxed);
}

TEST_F(GeneratedTests, minimum_broadcast_quant8) {
    execute(minimum::CreateModel_quant8_2,
            minimum::is_ignored_quant8_2,
            minimum::examples_broadcast_quant8);
}

TEST_F(GeneratedTests, minimum_broadcast_int32) {
    execute(minimum::CreateModel_int32_2,
            minimum::is_ignored_int32_2,
            minimum::examples_broadcast_int32);
}

