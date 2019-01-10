// clang-format off
// Generated file (from: rsqrt.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace rsqrt {
// Generated rsqrt test
#include "generated/examples/rsqrt.example.cpp"
// Generated model constructor
#include "generated/models/rsqrt.model.cpp"
} // namespace rsqrt

TEST_F(GeneratedTests, rsqrt) {
    execute(rsqrt::CreateModel,
            rsqrt::is_ignored,
            rsqrt::get_examples());
}

TEST_F(GeneratedTests, rsqrt_relaxed) {
    execute(rsqrt::CreateModel_relaxed,
            rsqrt::is_ignored_relaxed,
            rsqrt::get_examples_relaxed());
}

TEST_F(GeneratedTests, rsqrt_float16) {
    execute(rsqrt::CreateModel_float16,
            rsqrt::is_ignored_float16,
            rsqrt::get_examples_float16());
}

