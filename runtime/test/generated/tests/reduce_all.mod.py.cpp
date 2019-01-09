// clang-format off
// Generated file (from: reduce_all.mod.py). Do not edit
#include "../../TestGenerated.h"

namespace reduce_all {
// Generated reduce_all test
#include "generated/examples/reduce_all.example.cpp"
// Generated model constructor
#include "generated/models/reduce_all.model.cpp"
} // namespace reduce_all

TEST_F(GeneratedTests, reduce_all) {
    execute(reduce_all::CreateModel,
            reduce_all::is_ignored,
            reduce_all::get_examples());
}

TEST_F(GeneratedTests, reduce_all_2) {
    execute(reduce_all::CreateModel_2,
            reduce_all::is_ignored_2,
            reduce_all::get_examples_2());
}

TEST_F(GeneratedTests, reduce_all_3) {
    execute(reduce_all::CreateModel_3,
            reduce_all::is_ignored_3,
            reduce_all::get_examples_3());
}

