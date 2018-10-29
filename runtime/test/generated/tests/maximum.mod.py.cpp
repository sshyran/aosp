// clang-format off
// Generated file (from: maximum.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace maximum {
// Generated maximum test
#include "generated/examples/maximum.example.cpp"
// Generated model constructor
#include "generated/models/maximum.model.cpp"
} // namespace maximum

TEST_F(GeneratedTests, maximum_simple) {
    execute(maximum::CreateModel,
            maximum::is_ignored,
            maximum::examples_simple);
}

TEST_F(GeneratedTests, maximum_simple_relaxed) {
    execute(maximum::CreateModel_relaxed,
            maximum::is_ignored_relaxed,
            maximum::examples_simple_relaxed);
}

TEST_F(GeneratedTests, maximum_simple_quant8) {
    execute(maximum::CreateModel_quant8,
            maximum::is_ignored_quant8,
            maximum::examples_simple_quant8);
}

TEST_F(GeneratedTests, maximum_simple_int32) {
    execute(maximum::CreateModel_int32,
            maximum::is_ignored_int32,
            maximum::examples_simple_int32);
}

TEST_F(GeneratedTests, maximum_broadcast) {
    execute(maximum::CreateModel_2,
            maximum::is_ignored_2,
            maximum::examples_broadcast);
}

TEST_F(GeneratedTests, maximum_broadcast_relaxed) {
    execute(maximum::CreateModel_relaxed_2,
            maximum::is_ignored_relaxed_2,
            maximum::examples_broadcast_relaxed);
}

TEST_F(GeneratedTests, maximum_broadcast_quant8) {
    execute(maximum::CreateModel_quant8_2,
            maximum::is_ignored_quant8_2,
            maximum::examples_broadcast_quant8);
}

TEST_F(GeneratedTests, maximum_broadcast_int32) {
    execute(maximum::CreateModel_int32_2,
            maximum::is_ignored_int32_2,
            maximum::examples_broadcast_int32);
}

