// clang-format off
// Generated file (from: pow.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace pow {
// Generated pow test
#include "generated/examples/pow.example.cpp"
// Generated model constructor
#include "generated/models/pow.model.cpp"
} // namespace pow

TEST_F(GeneratedTests, pow) {
    execute(pow::CreateModel,
            pow::is_ignored,
            pow::examples);
}

TEST_F(GeneratedTests, pow_relaxed) {
    execute(pow::CreateModel_relaxed,
            pow::is_ignored_relaxed,
            pow::examples_relaxed);
}

TEST_F(GeneratedTests, pow_2) {
    execute(pow::CreateModel_2,
            pow::is_ignored_2,
            pow::examples_2);
}

TEST_F(GeneratedTests, pow_relaxed_2) {
    execute(pow::CreateModel_relaxed_2,
            pow::is_ignored_relaxed_2,
            pow::examples_relaxed_2);
}

TEST_F(GeneratedTests, pow_3) {
    execute(pow::CreateModel_3,
            pow::is_ignored_3,
            pow::examples_3);
}

TEST_F(GeneratedTests, pow_relaxed_3) {
    execute(pow::CreateModel_relaxed_3,
            pow::is_ignored_relaxed_3,
            pow::examples_relaxed_3);
}

