// clang-format off
// Generated file (from: exp.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace exp {
// Generated exp test
#include "generated/examples/exp.example.cpp"
// Generated model constructor
#include "generated/models/exp.model.cpp"
} // namespace exp

TEST_F(GeneratedTests, exp) {
    execute(exp::CreateModel,
            exp::is_ignored,
            exp::get_examples());
}

TEST_F(GeneratedTests, exp_relaxed) {
    execute(exp::CreateModel_relaxed,
            exp::is_ignored_relaxed,
            exp::get_examples_relaxed());
}

TEST_F(GeneratedTests, exp_float16) {
    execute(exp::CreateModel_float16,
            exp::is_ignored_float16,
            exp::get_examples_float16());
}

