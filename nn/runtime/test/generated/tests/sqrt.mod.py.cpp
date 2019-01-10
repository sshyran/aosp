// clang-format off
// Generated file (from: sqrt.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace sqrt {
// Generated sqrt test
#include "generated/examples/sqrt.example.cpp"
// Generated model constructor
#include "generated/models/sqrt.model.cpp"
} // namespace sqrt

TEST_F(GeneratedTests, sqrt) {
    execute(sqrt::CreateModel,
            sqrt::is_ignored,
            sqrt::get_examples());
}

TEST_F(GeneratedTests, sqrt_relaxed) {
    execute(sqrt::CreateModel_relaxed,
            sqrt::is_ignored_relaxed,
            sqrt::get_examples_relaxed());
}

TEST_F(GeneratedTests, sqrt_float16) {
    execute(sqrt::CreateModel_float16,
            sqrt::is_ignored_float16,
            sqrt::get_examples_float16());
}

